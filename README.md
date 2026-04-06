📘 PROJECT README
→ TITLE

Route Finder using Graph (Dijkstra’s Algorithm)

→ TEAM MEMBERS
Your Name
(Add your teammates if any)
→ PROBLEM STATEMENT

This project implements a Route Finder System using a Graph Data Structure in C.

It models real-world road networks where:

Cities are represented as vertices (nodes)
Roads are represented as edges with weights (distance/cost)

The system helps to:

Find the shortest path between cities
Display connections between cities
Dynamically add roads using a menu-driven interface
→ OBJECTIVES
To understand Graph Data Structure
To implement Dijkstra’s Algorithm
To build a menu-driven application
To simulate a real-world navigation system
→ DATA STRUCTURE USED
Graph (Adjacency List Representation)

Each vertex contains:

A list of connected cities
Distance (weight) to each connected city
Node Structure:
dest → destination city
weight → distance
next → pointer to next node
→ ALGORITHM USED
Dijkstra’s Algorithm

Used to find the shortest path from a source city to all other cities

→ ALGORITHM EXPLANATION
1. Function: createNode()

Steps:

Allocate memory using malloc
Assign destination and weight
Set next pointer to NULL
Return node
2. Function: createGraph()

Steps:

Allocate memory for graph
Initialize all adjacency lists to NULL
3. Function: addEdge()

Steps:

Create new node
Insert into adjacency list
Since graph is undirected:
Add edge in both directions
4. Function: displayGraph()

Steps:

Traverse each vertex
Print all connected nodes and weights
5. Function: minDistance()

Steps:

Find the vertex with minimum distance
Ignore visited vertices
Return index of minimum vertex
6. Function: dijkstra()

Steps:

Initialize distance array to infinity
Mark all vertices unvisited
Set source distance = 0

Repeat:

Pick minimum distance vertex
Mark it visited
Update distances of adjacent vertices

Print shortest distances

7. Function: Main Menu

Steps:

Display options:
Add Road
Display Graph
Find Shortest Path
Exit
Take user input
Call respective function
Repeat until exit
→ SAMPLE INPUT
Enter number of cities: 4
Enter number of roads: 4

0 1 10
0 3 30
1 2 50
3 2 20

Enter source city: 0
→ SAMPLE OUTPUT
Shortest distances from source 0:
To 0 -> 0
To 1 -> 10
To 2 -> 50
To 3 -> 30
→ TIME COMPLEXITY
Dijkstra Algorithm: O(V²)
With adjacency list: O(V² + E)

Where:

V = number of vertices
E = number of edges
→ SPACE COMPLEXITY
O(V + E) due to adjacency list
→ IMPORTANT DESIGN DECISIONS
Adjacency List used instead of Matrix
Saves memory
Undirected Graph
Roads work in both directions
Menu-driven approach
Improves user interaction
→ LIMITATIONS
Does not support negative weights
Works only with integer distances
No graphical interface (console-based)
→ APPLICATIONS
Google Maps (basic concept)
GPS navigation systems
Network routing
Transportation systems
→ COMPILATION INSTRUCTIONS
Using GCC:
gcc route.c -o output
./output
→ SCREENSHOTS

(Add your program screenshots here)

Examples:

Adding roads
Display graph
Shortest path output
→ CONCLUSION

This project demonstrates how graphs can be used to solve real-world problems like route finding.
Dijkstra’s Algorithm efficiently computes the shortest path and is widely used in navigation systems.

→ FUTURE ENHANCEMENTS
Add path printing (not just distance)
Use priority queue (min heap) for optimization
Add city names instead of numbers
GUI-based interface


