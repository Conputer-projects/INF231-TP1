#include <stdio.h>
#include <stdlib.h>

// Fonction pour trier le tableau
void trierTableau(int tableau[], int taille) {
    int i, j, temp;
    for (i = 0; i < taille - 1; i++)
	 {
        for (j = i + 1; j < taille; j++)
		 {
            if (tableau[i] > tableau[j]) 
			{
                temp = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = temp;
            }
        }
    }
}

// Fonction pour calculer la mediane
float calculerMedian(int tableau[], int taille) {
    trierTableau(tableau, taille);
    
    if (taille % 2 == 0) 
	{
        return (tableau[taille/2 - 1] + tableau[taille/2]) / 2.0;
    } 
	else 
	{
        return tableau[taille/2];
    }
}

int main() {
    int taille, i;
    
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);
    
    int tableau[taille];
    
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < taille; i++)
	 {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    
    float median = calculerMedian(tableau, taille);
    
    printf("\nTableau trie : ");
    for (i = 0; i < taille; i++) 
	{
        printf("%d ", tableau[i]);
    }
    
    printf("\nLa mediane est : %.2f\n", median);
    
    return 0;
}
