//Faca um programa que imprima na tela todas as tabuadas de 1 a 10 na tela automaticamente, sem precisar de entrada de dados (scanf).
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 10; i++) {
        printf("Tabuada do %d:\n", i);
        for(j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

}
