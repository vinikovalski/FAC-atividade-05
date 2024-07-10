#include <stdio.h>

int main(){

float sal, aum, nsal;

printf("Informe seu salario:");
scanf("%f", &sal);

if (sal < 1500){
    aum = sal * 0.15;
}
else if (sal < 1750){
    aum = sal * 0.12;
}
else if (sal < 2000){
    aum = sal * 0.10;
}
else if (sal < 3000){
    aum = sal * 0.07;
}
else { aum = sal * 0.05;}

nsal = sal + aum;

printf("O aumento e de: R$ %.2f\n", aum);
printf ("NOVO SALARIO = %.2f", nsal);

    return 0;
}