/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int idades[6], maior = 0;
    for (int i = 0; i < 6; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        if (idades[i] > maior)
            maior = idades[i];
    }
    printf("Maior idade = %d\n", maior);
    return 0;
}