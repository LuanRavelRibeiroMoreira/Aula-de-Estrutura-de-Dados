#include <stdio.h>
#include <stdlib.h>
typedef struct No{
        int valor;
        struct No * prox;
}No;
 
 
No * inicio = NULL;
int tam = 0;
void adcionar (int valor, int pos){
    No * novo = malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;
    if(inicio ==NULL){
        inicio = novo;
    }else if(pos==0){
        novo->prox = inicio;
        inicio=novo;
    }
    tam++;
}
void imrpimir(){
    No*aux =inicio;
    for(int i=0; i<tam; i++);
    printf("Valor= %d\n", aux->valor);
    aux=aux->prox;
}

int main(){
    adcionar(45,0);
    adcionar(10,0);
    printf("tam = %d\n", tam);
return 1;
}
