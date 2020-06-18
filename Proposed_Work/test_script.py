import sys
import pickle

program_number1 = sys.argv[1]
filename_prognum = "program"+program_number1

output_file_lev1_pc = open((filename_prognum+"_lev1_pc.pickle"), "rb")
pc_1 = pickle.load(output_file_lev1_pc)

output_file_lev2_pc = open((filename_prognum+"_lev2_pc.pickle"), "rb")
pc_2 = pickle.load(output_file_lev2_pc)

print(pc_1)

print(pc_2)