#include "common.h"

vector<int> dirac(vector<vector<float> > adj_mat, float *scatter_value, float *scatter_bound)  //(adj_mat: square adjacency matrix with non-negative entries)
{  //returns max scatter based on Arkin's maxmin_1 heuristic based on Dirac's theorem for mstsp 
    int n=adj_mat.size(), S_i, p, q, min_node;
    float min=INFINITY, median, temp_dist;
    vector<int> ham_path=rand_ham_path(n);  //0->(n-1) directional loop;  //{13,7,5,1,15,14,9,2,12,3,11,4,10,8,0,6}; --one test-case for "ulysses16.tsp"
    vector<float> to_sort(n);
    vector<vector<int> > E_(n);    
    if(n<2)
    {
        *scatter_value=*scatter_bound=0;
        return (ham_path);
    }
    for(int i=0;i<n;i++)  //to verify adj-mat & find d_e
    {
        if(adj_mat[i].size()==n) // && all_of(adj_mat[i].begin(),adj_mat[i].end(),[](float x){return x>=0;}))
        {
            to_sort=adj_mat[i];
            sort(to_sort.begin(),to_sort.end());
            median=to_sort[ceil((n+1)/2)];
            if(min>median)
                min=median;
            if(*scatter_bound>to_sort[n-2])
                *scatter_bound=to_sort[n-2];
        }
        else 
        {
            cout<<"unexpected non-square adjacency-matrix, exiting!";
            exit(0);
        }
    }
//    return (ham_path);  //new addend to just obtain scatter_bound!
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(adj_mat[i][j]>=min)
                E_[i].push_back(j);
    for(int i=0;i<n;i++)
    {
        p=ham_path[i],q=ham_path[(i+1)%n];
        temp_dist=adj_mat[p][q];
        if(temp_dist<min)   
        {
            vector<int> S_p(E_[p].size()), S_q(E_[q].size()), S_pq(n);
            for(int j=0;j<E_[q].size();j++)  //transform(E_[q].begin(),E_[q].end(),S_q.begin(),[](int x){return(--x);});
            {
                S_q[j]=get_index(ham_path,E_[q][j])-1;
                if(S_q[j]==-1)
                    S_q[j]+=n;
            }
            for(int j=0;j<E_[p].size();j++)  //transform(E_[p].begin(),E_[p].end(),S_p.begin(),[](int x){return(--x);});
                S_p[j]=get_index(ham_path,E_[p][j]);
            sort(S_p.begin(),S_p.end());sort(S_q.begin(),S_q.end());
            set_intersection(S_p.begin(),S_p.end(),S_q.begin(),S_q.end(),S_pq.begin());
            S_i=S_pq[0];  //certainly will yield an intersection value
            ham_path=_2opt_step(ham_path,i,(i+1)%n,S_i,(S_i+1)%n);
        }
    }
    *scatter_value=scatter(adj_mat,ham_path,n,&min_node);
    return (ham_path);
}