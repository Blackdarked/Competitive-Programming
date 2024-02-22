import networkx as netx

grid = netx.MultiGraph(netx.grid_2d_graph(m=4,n=4))
grid = netx.eulerize(grid)
cycle = netx.eulerian_circuit(grid,source=(0,0))
print('->'.join(str(edge[0]) for edge in cycle))