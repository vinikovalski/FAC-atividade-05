#include <stdio.h>

int main(){

char stdcivil;

printf("Digite um letra para o estado civil(S,C,V,D):");
scanf("%c", &stdcivil);

switch (stdcivil){
    case 's':
    case 'S':
        printf("Solteiro(a)\n");
        break;
    case 'C':
    case 'c':
        printf("Casado(a)\n");
        break;
    case 'v':
    case 'V':
        printf("Viuvo(a)\n");
        break;
    case 'd':
    case 'D':
        printf("Divorciado(a)\n");
        break;

    default:
    printf("Letra informada invalida\n");
    break;
}

    return 0;
}