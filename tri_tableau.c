#include <stdio.h>

int est_trie(int tab[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (tab[i] > tab[i + 1])
            return 0;
    return 1;
}

int main() {
    int tab[] = {1, 7, 4, 65, 5};
    int n = sizeof(tab)/sizeof(tab[0]);

    if (est_trie(tab, n))
        printf("Le tableau est trie.\n");
    else
        printf("Le tableau n'est pas trie.\n");

    return 0;
}
