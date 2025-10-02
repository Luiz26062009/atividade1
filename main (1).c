#include <stdio.h>

int main(void){
    float numeros[5];
    float soma = 0, media;
    
    // Leitura dos números reais 
    for (int i = 0; i < 5; i++) {
        printf("digite o %d° número: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }
    
    
    //calcula a média
    media = soma / 5;
    
    //mostra a média
    printf("\nA média dos números é: %.2f\n", media);

    return 0;
}
