#include <stdio.h>

int main(){

int num;

printf ("Escreva um numero de 1 a 10:");
scanf("%d", &num);

switch (num){
    case 1:
    printf ("Numero um");
    break;
    case 2:
    printf ("Numero dois");
    break;
    case 3:
    printf ("Numero tres");
    break;
    case 4:
    printf ("Numero quatro");
    break;
    case 5:
    printf ("Numero cinco");
    break;
    case 6:
    printf ("Numero seis");
    break;
    case 7:
    printf ("Numero sete");
    break;
    case 8:
    printf ("Numero oito");
    break;
    case 9:
    printf ("Numero nove");
    break;
    case 10:
    printf ("Numero dez");
    break;
    default:
    printf("Numero invalido \n");
    break;
}
    return 0;
}