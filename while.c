#include <stdio.h>
#include <conio.h>
#include <locale.h>

main () {
    setlocale(LC_ALL, "");

    int cont = 1, soma = 0;

    while(cont <= 50) {
        printf("\n%d", cont);
        soma = soma + cont;
        cont++;
    }
    printf("\n A soma dos numeros é: %d", soma);

    getch();
}