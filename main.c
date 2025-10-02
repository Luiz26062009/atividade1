
#include <stdio.h>

int main(void){
    int v[10]
    // preenche com os números de 1 a 10
    for (int i = 0; i < 10; i++) {
        v[i] = i + 1;
    }
    
    
    // mostra todos os elementos 
    printf("Elementos do vetor:\n");
    for (int i = 0; i<10; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}