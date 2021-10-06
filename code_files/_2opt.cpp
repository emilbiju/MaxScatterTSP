#include "common.h"

vector<int> _2opt(vector<int> ham_path, vector<vector<float>> adj_mat, int* MAX_ITER, float *scatter_value, int randomize=1)
{
	int n=adj_mat.size(), min_index, found=1, p, q, r, s;  //p=V_i, q=V_{i+1}, r=V_j, s=V_{j+1}
	if (randomize)
		ham_path=rand_ham_path(n);  //randomize initial 'ham_path'
	float min_dist;
	*MAX_ITER=0;
	while(true)
	{
		*MAX_ITER+=1;
		found=0;
		min_dist=scatter(adj_mat,ham_path,n,&min_index);
		for(int i=0;i<n;i++)
		{
			p=ham_path[i];
			q=ham_path[(i+1)%n];
			r=ham_path[min_index];
			s=ham_path[(min_index+1)%n];
			if (adj_mat[p][r]>min_dist && adj_mat[q][s]>min_dist)
			{
				ham_path=_2opt_step(ham_path,i,(i+1)%n,min_index,(min_index+1)%n);
				found=1;
				break;
			}
		}
		if (found==1)
			continue;
		else
		{
			*scatter_value=scatter(adj_mat,ham_path,n,&min_index);
			return (ham_path);
		}
	}
	*scatter_value=scatter(adj_mat,ham_path,n,&min_index);
	return (ham_path);
}