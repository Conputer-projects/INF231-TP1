#include <stdio.h>

//---program to reverse a table-----

void inverserTableau(int tableau[], int taille) {
    int temp[taille];
    int i;
    
    // Copier le tableau dans l'ordre inverse
    for (i = 0; i < taille; i++) 
	{
        temp[i] = tableau[taille - 1 - i];
    }
    // Recopier dans le tableau original
    for (i = 0; i < taille; i++) 
	{
        tableau[i] = temp[i];
    }
}

void afficherTableau(int tableau[], int taille) {
    int i;
    for (i = 0; i < taille; i++) 
	{
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

int main() {
    int taille, i;
    
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);
    
    int tableau[taille];
    
    printf("Entrez les éléments du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    
    printf("\nTableau original : ");
    afficherTableau(tableau, taille);
    
    inverserTableau(tableau, taille);
    
    printf("Tableau inversé : ");
    afficherTableau(tableau, taille);
    
    return 0;
}
