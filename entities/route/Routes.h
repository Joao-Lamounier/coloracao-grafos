#ifndef UNTITLED6_ROUTES_H
#define UNTITLED6_ROUTES_H
#define MAX_ROUTES 34

#define FILEROUTES "files/routes.txt"

typedef struct _Route {
    char source[4];
    char target[4];

    void (*toString)(struct _Route *);
} _Route;
typedef _Route *Route;


Route newRoute(char source[4], char target[4]);

void printRoute(Route route);

void newRoutes(Route routes[MAX_ROUTES]);


#endif //UNTITLED6_ROUTES_H
