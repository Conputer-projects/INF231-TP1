#include <stdio.h>
#define SIZE 3
void produit_vecteur_matrice(int vect[SIZE], int mat[SIZE][SIZE], int result[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        result[i] = 0;
        for (int j = 0; j < SIZE; j++)
            result[i] += vect[j] * mat[j][i];
    }
}

void afficher_vecteur(int vect[SIZE]) {
    for (int i = 0; i < SIZE; i++)
        printf("%d ", vect[i]);
    printf("\n");
}

int main() {
    int vect[SIZE] = {1, 2, 3};
    int mat[SIZE][SIZE] = {
        {1, 0, 2},
        {0, 1, 0},
        {3, 0, 1}
    };
    int result[SIZE];

    produit_vecteur_matrice(vect, mat, result);
    printf("Produit vecteur * matrice:\n");
    afficher_vecteur(result);

    return 0;
}
