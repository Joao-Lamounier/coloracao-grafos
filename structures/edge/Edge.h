#ifndef UNTITLED6_EDGE_H
#define UNTITLED6_EDGE_H

#include "../vertex/Vertex.h"

typedef struct _Edge {
    double distance;
} _Edge;

typedef _Edge *Edge;

/**
 * Cria uma nova aresta entre dois vértices, calculando a distância entre os aeroportos associados.
 *
 * @param v1 Primeiro vértice da aresta.
 * @param v2 Segundo vértice da aresta.
 * @return Nova aresta alocada dinamicamente.
 */
Edge newEdge(Vertex v1, Vertex v2);

#endif //UNTITLED6_EDGE_H
