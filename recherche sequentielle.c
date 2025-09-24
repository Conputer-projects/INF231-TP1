#include <stdio.h>

int sequential_search(int arr[], int size, int target) {
	int i;
    for (i = 0; i < size; i++) 
	{
        if (arr[i] == target) 
		{
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int size, target, i;

    // Input the size of the array
    printf("Entrez la taille du tableau: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < size; i++) 
	{
        printf("element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the target element to search for
    printf("Entrez l'element a rechercher: ");
    scanf("%d", &target);

    // Perform the search
    int result = sequential_search(arr, size, target);

    // Display the result
    if (result != -1) 
	{
        printf("L'element %d a ete trouve a l'index %d.\n", target, result);
    } else 
	{
        printf("L'element %d n'a pas ete trouve dans le tableau.\n", target);
    }

    return 0;
}
