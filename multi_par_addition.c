#include <stdio.h>

int produit_par_addition(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++)
        for (int j = 0; j < a; j++)
            result += 1;
    return result;
}

int main() {
    int a = 4, b = 3;
    printf("Produit de %d * %d = %d\n", a, b, produit_par_addition(a, b));
    return 0;
}
