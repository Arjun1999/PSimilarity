import networkx as nx
# import pygraphviz
# import gmatch4py as gm
import sys

filename1 = sys.argv[1]
filename2 = sys.argv[2]

G1 = nx.MultiDiGraph(nx.drawing.nx_pydot.read_dot(filename1))
G2 = nx.MultiDiGraph(nx.drawing.nx_pydot.read_dot(filename2))

# networkx
ged = nx.graph_edit_distance(G1,G2)
print("Graph Edit Distance from Networkx : ", ged)

# gmatch4py
# ged = gm.GraphEditDistance(1,1,1,1) # node insertion cost,node deletion cost, edge insertion cost, edge deletion cost
# result = ged.compare([G1,G2],None) 
# print("Graph Edit Distance Matrix from GMatch4py : ", result)

# A sufficient working prototype using the libraries has been implemented.
# However, a self defined graph edit distance can be implemented to not depend much on libraries.
