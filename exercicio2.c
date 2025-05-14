//Faca um algoritmo que mostre os 20 primeiros numeros impares. Use comandos de repeticao.
#include <stdio.h>

int main() {
    int i = 1, contador = 0;

    while(contador < 20) {
        if(i % 2 != 0) {
            printf("%d\n", i);
            contador++;
        }
        i++;
    }

}
