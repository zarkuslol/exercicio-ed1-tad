#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
    
    int ponto_x;
    int ponto_y;
    
};

typedef struct ponto Ponto;

Ponto *criar(int x, int y) {
    
    Ponto *p;
    
    p = malloc(sizeof(Ponto));
    
    if (p) {
        
        p->ponto_x = x;
        p->ponto_y = y;
        
        return p;
        
    }
    
}

void acessar(Ponto *p, int *x, int *y) {
    
    *x = p->ponto_x;
    *y = p->ponto_y;
    
}

void atribuir(Ponto *p, int x, int y) {
    
    p->ponto_x = x;
    p->ponto_y = y;
    
}

float distancia(Ponto *p1, Ponto *p2) {
    
    int x = p2->ponto_x - p1->ponto_x;
    int y = p2->ponto_y - p1->ponto_y;
    int resultado = sqrt(pow(x, 2) + pow(y, 2));
    
    return resultado;
    
}

int destruir(Ponto *p) {
    
    if (p) {
        
        free(p);
        return 1;
        
    }
    
    return 0;
    
}

int main() {
    
    Ponto *p1 = criar(-3, -11);
    Ponto *p2 = criar(2, 1);
    
    printf("%.2f", distancia(p1, p2));
    
    destruir(p1);
    destruir(p2);
    
    return 0;
    
}
