#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("W pierwszym branchu: 2+3 = %d", Policz(2, 3));
    printf("\nKolejny commit");
    return 0;
}

int Policz(int a, int b){
    return a*b;
}