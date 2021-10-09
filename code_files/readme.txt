This file has instructions to run the code

### Code Files
There are 5 code files in 'code_files' folder:
`main.cpp`: Main file to run
`naive_greedy.cpp`: Contains code for naive greedy algorithm
`weave.cpp`: Contains code for naive and Hoffmann weave algorithms
`dirac.cpp`: Contains code for Dirac algorithm
`_2opt.cpp`: Contains code for pure 2-opt and rand 2-opt

### To run the code
1. Place the `TSP_data_files` folder inside the `code_files` folder
2. cd to the `code_files` folder
3. Run: 'g++ main.cpp dirac.cpp _2opt.cpp weave.cpp naive_greedy.cpp -o main.out'. Alternatively, an executable named 'ch' can be run ('./ch').

### DATA
There are 2 data folders, 2 results folders in 'evaluation_files' folder:
1. 2 data folders:
->The `TSP_data_files` folder contains data files for the TSP2 dataset described in the report. Prefixes [a,b,c,d,e,f,g,h] refer the number of nodes in the file from [10,50,100,200,400,600,800,1000] respectively.

2. 2 results folders:
->ALL_TSP_results: Perturbed and unperturbed results pertaining to ALL_TSP
->ALL_TSP_NEW_results: Perturbed and unperturbed results pertaining to ALL_TSP_new

