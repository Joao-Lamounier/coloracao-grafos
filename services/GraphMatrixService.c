#include <stdbool.h>
#include "GraphMatrixService.h"


bool isValidColor(GraphRoutes graph, int vertex, int color) {
    for (int i = 0; i < MAX_VERTEXES; i++) {
        if (graph->distances[vertex][i]->distance > 0 && graph->vertexes[i]->color == color) {
            return false;
        }
    }
    return true;
}
int colorGraph(GraphRoutes graph) {
    for (int i = 0; i < MAX_VERTEXES; i++) {
        for (int color = 1; color <= MAX_VERTEXES; color++) {
            if (isValidColor(graph, i, color)) {
                graph->vertexes[i]->color = color;
                break;
            }
        }
    }

    int maxColor = 0;
    for (int i = 0; i < MAX_VERTEXES; i++) {
        if (graph->vertexes[i]->color > maxColor) {
            maxColor = graph->vertexes[i]->color;
        }
    }

    return maxColor;
}