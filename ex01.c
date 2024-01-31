#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    setlocale(LC_ALL, "");

    int i = 1;
    float peso, media = 0;
    
    printf("Digite o peso de 10 alunos:\n");
    while (i <= 10) {
        printf("Aluno %d: ", i);
        scanf("%f", &peso);
        media += peso;
        i++;
    }
    
    media /= 10;
    printf("\nA média dos pesos dos alunos eh: %.2f\n", media);
    
    return 0;
}
