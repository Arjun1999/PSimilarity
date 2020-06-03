This project aims to search for various methods to capture similarity among programs. 

Follow these steps to run our proposed implementation :

1) run the command : python ast_levels.py <index_number> /path/to/program1
2) run the command : python ast_levels.py <index_number> /path/to/program2

Here, <index_number> refers to an integer value associated with a file. For simplicity choose 1 and 2 as your <index_numbers> for program 1 and program 2 respectively.

For eg.

- python ast_levels.py 1 /path/to/program1
- python ast_levels.py 2 /path/to/program2

3) run the command : python winnowing.py program<index_number> program<index_number>

Continued eg.

- python winnowing.py program1 program2

4) The output would display 3 values :

- Cosine Similarity at Level 0
- Cosine Similarity at Level 1
- Cosine Similarity at Level 2 
- Total Similarity Score