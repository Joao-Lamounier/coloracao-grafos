#ifndef UNTITLED6_GRAPHMATRIXSERVICE_H
#define UNTITLED6_GRAPHMATRIXSERVICE_H

#include "../structures/graph_matrix/GraphMatrix.h"

/**
 * Verifica se uma cor é válida para um vértice em um grafo de rotas.
 *
 * @param graph Grafo de rotas.
 * @param vertex Índice do vértice no grafo.
 * @param color Cor a ser verificada.
 * @return true se a cor for válida, false caso contrário.
 */
bool isValidColor(GraphRoutes graph, int vertex, int color);

/**
 * Atribui cores aos vértices de um grafo de rotas de forma que vértices adjacentes tenham cores diferentes.
 *
 * @param graph Grafo de rotas.
 * @return Número máximo de cores utilizadas.
 */
int colorGraph(GraphRoutes graph);

#endif //UNTITLED6_GRAPHMATRIXSERVICE_H
