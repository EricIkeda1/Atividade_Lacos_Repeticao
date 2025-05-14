//Faca um algoritmo que receba a idade de dez pessoas e que calcule e mostre a quantidade de pessoas menores de idade (idade menor que 18)
//e maiores de idade (idade maior ou igual a 18) e tambem o percentual de cada um.
#include <stdio.h>

int main() {
    int idade, i, menores = 0, maiores = 0;

    for(i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        if(idade < 18) {
            menores++;
        } else {
            maiores++;
        }
    }

    printf("\nTotal de menores de idade: %d\n", menores);
    printf("Total de maiores de idade: %d\n", maiores);

    printf("Percentual de menores: %d\n", (menores * 100) / 10);
    printf("Percentual de maiores: %d\n", (maiores * 100) / 10);

}
