#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100

// Node structure
struct Node {
    int dest;
    int weight;
    struct Node* next;
};

// Graph structure
struct Graph {
    struct Node* head[MAX];
    int vertices;
};

// Create node
struct Node* createNode(int dest, int weight) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->dest = dest;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}

// Create graph
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = vertices;

    for (int i = 0; i < vertices; i++)
        graph->head[i] = NULL;

    return graph;
}

// Add edge
void addEdge(struct Graph* graph, int src, int dest, int weight) {
    struct Node* newNode = createNode(dest, weight);
    newNode->next = graph->head[src];
    graph->head[src] = newNode;

    newNode = createNode(src, weight);
    newNode->next = graph->head[dest];
    graph->head[dest] = newNode;
}

// Display graph
void displayGraph(struct Graph* graph) {
    for (int i = 0; i < graph->vertices; i++) {
        struct Node* temp = graph->head[i];
        printf("City %d -> ", i);
        while (temp != NULL) {
            printf("(%d, %d) ", temp->dest, temp->weight);
            temp = temp->next;
        }
        printf("\n");
    }
}

// Find minimum distance
int minDistance(int dist[], int visited[], int V) {
    int min = INT_MAX, index;

    for (int i = 0; i < V; i++) {
        if (!visited[i] && dist[i] <= min) {
            min = dist[i];
            index = i;
        }
    }
    return index;
}

// Dijkstra
void dijkstra(struct Graph* graph, int src) {
    int V = graph->vertices;
    int dist[V], visited[V];

    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited, V);
        visited[u] = 1;

        struct Node* temp = graph->head[u];
        while (temp != NULL) {
            int v = temp->dest;

            if (!visited[v] && dist[u] != INT_MAX &&
                dist[u] + temp->weight < dist[v]) {
                dist[v] = dist[u] + temp->weight;
            }

            temp = temp->next;
        }
    }

    printf("\nShortest distances from city %d:\n", src);
    for (int i = 0; i < V; i++)
        printf("To %d -> %d\n", i, dist[i]);
}

// Main
int main() {
    int V, choice, src, dest, weight, source;

    printf("Enter number of cities: ");
    scanf("%d", &V);

    struct Graph* graph = createGraph(V);

    do {
        printf("\n--- MENU ---\n");
        printf("1. Add Road\n");
        printf("2. Display Graph\n");
        printf("3. Find Shortest Path (Dijkstra)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter source, destination and distance: ");
                scanf("%d %d %d", &src, &dest, &weight);
                addEdge(graph, src, dest, weight);
                printf("Road added!\n");
                break;

            case 2:
                displayGraph(graph);
                break;

            case 3:
                printf("Enter source city: ");
                scanf("%d", &source);
                dijkstra(graph, source);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}