#include <stdio.h>
#include <stdbool.h>
#include "structures/graph_matrix/GraphMatrix.h"
#include "services/GraphMatrixService.h"

int main() {
    Vertex vertexes[MAX_VERTEXES];
    newVertexes(vertexes);
    GraphRoutes graph = newGraphRoutes(vertexes);

    int numColors = colorGraph(graph);
    printf("Quantidade de cores utilizadas: %d\n", numColors);

    return 0;
}
