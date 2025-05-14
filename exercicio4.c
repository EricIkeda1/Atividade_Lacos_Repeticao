//Faca um algoritmo que receba do usuario 10 numeros inteiros e positivos representando as idades de 10 pessoas.
//Em seguida, o algoritmo devera calcular e mostrar qual a idade da pessoa mais nova fornecida pelo usuario.
#include <stdio.h>

int main() {
    int idade, menor_idade;
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        while (idade <= 0) {
            printf("Idade invalida! Digite uma idade positiva: ");
            scanf("%d", &idade);
        }

        if(i == 0 || idade < menor_idade) {
            menor_idade = idade;
        }
    }

    printf("\nA menor idade fornecida foi: %d\n", menor_idade);

}
