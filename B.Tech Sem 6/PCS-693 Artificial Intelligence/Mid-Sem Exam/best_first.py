from queue import PriorityQueue

vertices = 14
graph = [[] for _ in range(vertices)]

def add_edge(x,y, cost):
    graph[x].append((y, cost)) 
    graph[y].append((x, cost))

def best_first_search(source, target, vertices):
    visited = [0] * vertices
    pq = PriorityQueue() 
    pq.put((0, source)) 
    print("Path: ")
    while not pq.empty():
        u = pq.get()[1]
        print(u, end="")
        if u == target:
            break

        for v, c in graph[u]: 
            if not visited[v]:
                visited[v] = True
                pq.put((c, v)) 
        print()


source = 0
target = 2

add_edge(0,2,14)
add_edge(4,3,2)
add_edge(1,4,11)
add_edge(3,2,6)
add_edge(1,3,16)
add_edge(2,4,5)

best_first_search(source, target, vertices)

