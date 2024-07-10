#include <stdio.h>

int main(){

char letra;

printf("Escreva uma letra: ");
scanf("%c", &letra);



switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c e uma vogal.\n", letra);
        break;
        default:
        printf("%c e uma consoante.\n", letra);

}
    return 0;
}