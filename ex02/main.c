#include <stdio.h>

int main(){

char nome[50];
int id;

printf("Digite o nome do atleta:");
fgets(nome, sizeof nome, stdin);

printf("Digite a idade do atleta:");
    scanf("%d", &id);

printf("Atleta: %s\nIdade: %d\n", nome, id);

switch(id){
    case 5 ... 10:
    printf("Categoria: Infantil\n");
    break;
    case 11 ... 15:
    printf("Categoria: Juvenil\n");
    break;
    case 16 ... 20:
    printf("Categoria: Junior\n");
    break;
    case 21 ... 25:
    printf("Categoria: Profissional\n");
    break;
    default:
    printf("Categoria: Nao definida\n");
    break;                   
}


    return 0;
}