#include <stdio.h>
#define MAX 10 // Define max size for matrices

void multiply_matrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int r1, int c1, int r2, int c2) {
    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }
    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r1, c1, r2, c2;

    // Input dimensions for matrix A
    printf("Entrez le nombre de lignes et de colonnes pour la matrice A: ");
    scanf("%d %d", &r1, &c1);

    // Input matrix A
    printf("Entrez les éléments de la matrice A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    // Input dimensions for matrix B
    printf("Entrez le nombre de lignes et de colonnes pour la matrice B: ");
    scanf("%d %d", &r2, &c2);

    // Check if 2 matrices are compatible for multiplication
    if (c1 != r2) {
        printf("Erreur: Le nombre de colonnes de la matrice A doit être egal au nombre de lignes de la matrice B.\n");
        return 1;
    }

    // Input matrix B
    printf("Entrez les elements de la matrice B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply matrices
    multiply_matrices(A, B, C, r1, c1, r2, c2);
    // Display the result
    printf("Le produit des matrices est:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
