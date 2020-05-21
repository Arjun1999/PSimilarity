import networkx as nx
import pygraphviz

G1 = nx.MultiDiGraph(nx.drawing.nx_pydot.read_dot("pycallgraph1.dot"))
G2 = nx.MultiDiGraph(nx.drawing.nx_pydot.read_dot("pycallgraph2.dot"))

ged = nx.graph_edit_distance(G1,G2)
print("Graph Edit Distance : ", ged)