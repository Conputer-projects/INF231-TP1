#include <stdio.h>

void produit_vectoriel(int u[3], int v[3], int w[3]) {
    w[0] = u[1]*v[2] - u[2]*v[1];
    w[1] = u[2]*v[0] - u[0]*v[2];
    w[2] = u[0]*v[1] - u[1]*v[0];
}

int main() {
    int u[3] = {1, 2, 3};
    int v[3] = {4, 5, 6};
    int w[3];

    produit_vectoriel(u, v, w);
    printf("Produit vectoriel: [%d, %d, %d]\n", w[0], w[1], w[2]);

    return 0;
}
