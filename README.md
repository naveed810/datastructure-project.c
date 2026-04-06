<img width="455" height="203" alt="Screenshot 2026-04-06 220517" src="https://github.com/user-attachments/assets/84dd1fa1-d45c-41cc-82cf-29a5a3962052" />📘 PROJECT README
1. TITLE

Route Finder using Graph (Dijkstra’s Algorithm)

2. TEAM MEMBERS
SK.NAVEED BASHA
B.SUHRUTH

3. PROBLEM STATEMENT

This project implements a Route Finder System using a Graph Data Structure in C.

It models a real-life road network such as:

City → Connected City → Distance

The system supports operations including:

 • Adding roads  

 • Displaying graph  

 • Finding shortest path  

 • Menu-driven interaction  

The program demonstrates shortest path calculation using Dijkstra’s Algorithm.

4. OBJECTIVES

• To understand Graph Data Structure

• To implement Dijkstra’s Algorithm

• To build a menu-driven application

• To simulate real-world navigation systems

5. DATA STRUCTURE USED

Graph (Adjacency List Representation)

Each node contains:

 • dest → Destination city  

 • weight → Distance between cities  

 • next → Pointer to next connected node  
6. ALGORITHM USED

Dijkstra’s Algorithm

Used to find the shortest path from a source city to all other cities.

7. ALGORITHM EXPLANATION

Function: createNode()

Steps:

Allocate memory using malloc  

Assign destination and weight  

Set next = NULL  

Return node  

Function: createGraph()

Steps:

Allocate memory for graph  

Initialize all vertices to NULL  

Function: addEdge()

Steps:

Create new node  

Insert into adjacency list  

Since graph is undirected:  

    Add edge in both directions  

Function: displayGraph()

Steps:

Traverse each vertex  

Print connected cities and distances  

Function: minDistance()

Steps:

Find minimum distance vertex  

Ignore visited nodes  

Return index  

Function: dijkstra()

Steps:

Initialize distance array to infinity  

Mark all nodes unvisited  

Set source distance = 0  

Repeat:

    Pick minimum distance node  

    Mark visited  

    Update adjacent distances  

Print shortest distances  

Function: Main Menu

Steps:

Display menu options:

     1. Add Road  

     2. Display Graph  

     3. Find Shortest Path  

     4. Exit  

Take user input  

Call respective function  

Repeat until exit  
8. SAMPLE INPUT

Enter number of cities: 4

Enter number of roads: 4

0 1 10

0 3 30

1 2 50

3 2 20

Enter source city: 0

9. SAMPLE OUTPUT

Shortest distances from source 0:

To 0 → 0

To 1 → 10

To 2 → 50

To 3 → 30

10. TIME COMPLEXITY

Dijkstra Algorithm:

   O(V²)

With adjacency list:

   O(V² + E)

Where:

   V → Number of vertices  

   E → Number of edges  
11. SPACE COMPLEXITY

O(V + E)

12. IMPORTANT DESIGN DECISION

Graph Type:

• Undirected graph is used

Reason:

• Roads are two-way connections

• Easy representation

• Matches real-world scenarios

13. LIMITATIONS

• Does not support negative weights

• Console-based only

• No graphical interface

→ APPLICATIONS

• GPS navigation systems

• Route planning

• Network routing

• Transportation systems

→ COMPILATION INSTRUCTIONS

Using GCC:

Compile:

gcc route.c -o output

Run:

./output

14. SCREENSHOTS
Adding Roads
Display Graph
Shortest Path Output

(Add your screenshots here)

15. CONCLUSION

This project demonstrates how graphs can be used to solve real-world problems like route finding.

Dijkstra’s Algorithm efficiently finds shortest paths and is widely used in navigation systems.

16. FUTURE ENHANCEMENTS

• Print actual path (not just distance)

• Use priority queue for optimization

• Add city names instead of numbers

• GUI-based interface




<img width="874" height="86" alt="Screenshot 2026-04-06 220510" src="https://github.com/user-attachments/assets/80471e06-7bd0-431a-810b-668a03032804" />

<img width="455" height="203" alt="Screenshot 2026-04-06 220517" src="https://github.com/user-attachments/assets/8e189049-d6c0-4aa2-a747-53846648ab83" />
<img width="315" height="230" alt="Screenshot 2026-04-06 220526" src="https://github.com/user-attachments/assets/193ed1c7-ac1e-48ab-bd67-99e604913563" />
<img width="323" height="165" alt="Screenshot 2026-04-06 220534" src="https://github.com/user-attachments/assets/38c6d039-703f-4027-9c5f-66ab2db33902" />
<img width="309" height="128" alt="Screenshot 2026-04-06 220542" src="https://github.com/user-attachments/assets/ecf7bf95-52b5-450a-bbde-fef5ebb23a9f" />
<img width="543" height="181" alt="Screenshot 2026-04-06 220551" src="https://github.com/user-attachments/assets/8fdf6a8b-3413-4d35-a2ed-6736edc82489" />
