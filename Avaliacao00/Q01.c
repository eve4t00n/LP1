//Cálculo de Fatorial: Crie um programa que calcule e imprima
//o fatorial de um número inteiro fornecido pelo usuário.

#include <stdio.h>

int fatorial(int n){
    if(n == 1){
        return n;
    }
    return n * fatorial(n-1);
}

int main(){
    int numero,resultado;
    scanf("%d",&numero);
    resultado = fatorial(numero);
    printf("Fatorial de %d: %d",numero,resultado);
    return 0;
}