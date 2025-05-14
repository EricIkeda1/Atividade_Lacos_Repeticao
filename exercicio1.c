//1.Faca um algoritmo que mostre os 20 primeiros numeros pares. Use comandos de repeticao.
#include <stdio.h>

int main() {
    int i, contador = 0;

    for(i = 1; contador < 20; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
            contador++;
        }
    }

}
