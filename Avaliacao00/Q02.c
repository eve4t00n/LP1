//Soma de Números em um Array: Faça um programa que leia 5 números inteiros
//armazene-os em um array e calcule a soma total desses números.

#include <stdio.h>

void lerVetor(int v[]){
    for(int i=0;i<5;i++){
        scanf("%d",&v[i]);
    }
}

int somarVetor(int v[]){
    int soma;
    soma = 0;
    for(int i=0;i<5;i++){
        soma += v[i];
    }
    return soma;
}

int main(){
    int vetor[5],resultado;
    lerVetor(vetor);
    resultado = somarVetor(vetor);
    printf("Resultado da soma do Vetor: %d",resultado);
    return 0;
}