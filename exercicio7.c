//Faca um programa que imprima na tela os 20 primeiros numeros primos.
#include <stdio.h>

int main() {
    int contador = 0, num = 2, i;

    while(contador < 20) {
        int primo = 1;

        for(i = 2; i < num; i++) {
            if(num % i == 0) {
                primo = 0;
                break;
            }
        }

        if(primo) {
            printf("%d ", num);
            contador++;
        }

        num++;
    }

}
