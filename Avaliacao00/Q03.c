//Contagem de Caracteres em uma String: Crie um programa que leia uma string
//e conte quantos caracteres (incluindo espaços) ela possui.

#include <stdio.h>

int contarCaracteres(char s[]){
    int i,caracteres;
    i = 0;
    caracteres = 0;
    while(s[i] != '\n'){
        caracteres ++;
        i++;
    }
    return caracteres;
}

int main(){
    char string[50];
    int resultado;
    fgets(string,sizeof(string),stdin);
    resultado = contarCaracteres(string);
    printf("A palavra %s possui %d caracteres",string,resultado);
    return 0;
}