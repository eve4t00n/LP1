//Verificação de Número Primo: Desenvolva um programa que leia um número
//inteiro e determine se ele é um número primo ou não.

#include <stdio.h>

int verificaPrimo(int n, int m){
    if(m == 1){
        return 0;
    }
    if((n % m == 0) && (n != m)){
        return 1;
    }
    return verificaPrimo(n,m-1);
}

int main(){
    int numero,primo;
    scanf("%d",&numero);
    primo = verificaPrimo(numero,numero);
    if(primo){
        printf("O numero %d nao eh primo",numero);
    } else {
        printf("O numero %d eh primo",numero);
    }
    return 0;
}