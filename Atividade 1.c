// Exercício Ponteiros e Alocação de Memomia

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* funcao(int n){
    char *lista = (char*) malloc((n*10) * sizeof(char));
    char *retorno = lista;
    for(int x=0; x<n; x++){
        printf("Diga o nome %d: ", x+1);
        scanf("%s", lista);
        lista += 10;
    }
    return retorno;
}
int main(){

    int n;
    char *p;
    printf("Diga o número de elementos: ");
    scanf("%d", &n);
    p = funcao(n);
    for(int x=0; x<n; x++){
    printf("The list is: \n %s \n", p);
    p+=10;
    }
    free(p);
return 0;
}
