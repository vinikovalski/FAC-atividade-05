#include <stdio.h>
#include <math.h>
int main(){

float num;
int op;

printf ("Digite um numero: ");
    scanf("%f", &num);
printf ("Selecione uma operacao\n");
printf("1. Raiz quadrada\n");
printf("2. Metade do valor\n");
printf("3. 10%% do valor\n");
printf("4. Dobro do valor\n");
    scanf("%d", &op);

switch(op) {
    case 1:
    printf("Raiz quadrada: %.2f\n", sqrt(num));
    break;
    case 2:
    printf("Metade do valor: %.2f\n", num / 2);
    break;
    case 3:
    printf("10%% do valor: %.2f\n", num * 0.1);
    break;
    case 4:
    printf("Dobro do valor: %.2f\n", num * 2);
    break;
    default:
    printf("Opcao invalida.\n");
    }

    return 0;
}