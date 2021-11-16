This project aims to search for various methods to capture similarity among programs+. 

I. Follow these steps to run our proposed implementation :

Dependencies required :
- ast api
- astor
- nltk

Go to the directory Proposed_Work and :

1) run the command : python generate_ast.py <index_number> /path/to/program1
2) run the command : python generate_ast.py <index_number> /path/to/program2

Here, <index_number> refers to an integer value associated with a file. For simplicity choose 1 and 2 as your <index_numbers> for program 1 and program 2 respectively.

The test codes in the 'Test_Codes' folder can be used. The folder 'PythonAssignment' contains codes submitted by IMT2017 students for Assignment 7, Question 6 of the ESS101 Programming I [Python] Course.

For eg.

- python generate_ast.py 1 Test_Codes/test1a.py
- python generate_ast.py 2 Test_Codes/test1b.py

3) run the command : python winnowing.py program<index_number> program<index_number>

Continued eg.

- python winnowing.py program1 program2

4) The output would display 3 values :

- Cosine Similarity at Level 0
- Cosine Similarity at Level 1
- Cosine Similarity at Level 2 
- Total Similarity Score

II. Follow these steps to run the graph edit distance on function call graphs :

Dependencies required :
- networkx
- pycallgraph

Go to the directory Approach_Call_Graph and :

1) run the command : pycallgraph -d graphviz --output-format=dot /path/to/program1 > <output1_file_name>

2) run the command : pycallgraph -d graphviz --output-format=dot /path/to/program2 > <output2_file_name>

The above 2 commands will generate the <output_files> containing the actual output of the mentioned programs, along with a "dot" representation of the function call graphs. Additionally both the programs also generate a "pycallgraph.png", for better visualization of the function call graphs and can be checked out after running each command for personal reference.

3) run the command : python scriptcallgraph.py <output1_file_name> <output2_file_name>

The above mentioned command will extract the "dot" representation of the function call graphs of the given pair of programs and store it in two distinct named files, "pycallgraph1" and "pycallgraph2".  

4) run the command : python graph_edit_dist_callgraphs.py pycallgraph1 pycallgraph2

The above command will generate the desired graph edit distance between the two function call graphs.

III. Follow these steps to run the n-grams comparison experiment :

Dependencies required :
- nltk

Go to the directory Approach_Ngrams and :

1) run the command : python ngram.py /path/to/program1 /path/to/program2 n

Here n refers to the value of n-grams that the user wishes to generate and compare.
On running the command, Jaccard Similarity and Cosine Similarity are given as outputs.

-------------------------------------------------------------------------------------------------

If you wish to use this work as is or as a source of reference, kindly cite the following paper : 

_Source-Code Similarity Measurement: Syntax Tree Fingerprinting for Automated Evaluation_

**_ACM Ref_**

Arjun Verma, Prateksha Udhayanan, Rahul Murali Shankar, Nikhila KN, and Sujit Kumar Chakrabarti. 2021. Source-Code Similarity Measurement: Syntax Tree Fingerprinting for Automated Evaluation. In <i>The First International Conference on AI-ML-Systems</i> (<i>AIMLSystems 2021</i>). Association for Computing Machinery, New York, NY, USA, Article 8, 1–7. DOI:https://doi.org/10.1145/3486001.3486228
