cmake_minimum_required(VERSION 3.26)
project(untitled6 C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled6 main.c
        structures/graph_matrix/GraphMatrix.c
        structures/graph_matrix/GraphMatrix.h
        structures/vertex/Vertex.c
        structures/vertex/Vertex.h
        structures/edge/Edge.c
        structures/edge/Edge.h
        files/ReadFile.c
        files/ReadFile.h
        entities/airport/Airport.c
        entities/airport/Airport.h
        entities/route/Routes.c
        entities/route/Routes.h
        services/GraphMatrixService.c
        services/GraphMatrixService.h)
target_link_libraries(untitled6 m)