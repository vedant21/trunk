1. Prepare a GRAPH.
2. Initialize a order stack and visited array.
3. initialize visited all false
4. for each parent visited = false perform topological sort
	1. make visited true
	2. fetch its childs
	3. for each visted = false child perform topologial sort
	4. push the parent in the order stack.
	
5. Pop each stack top and make a order string.
	