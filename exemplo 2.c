#include <stdio.h>

int main() {
    
    double kilo, mihas;
    char res;

    do
    {
        printf("Digite o valor em (Km): ");
        scanf("%lf", &kilo);

        mihas = kilo*1.60934;
        printf("Valor em milha: %.1f\n", mihas);

        printf("Deseja repetir (s/n)? ");
        scanf(" %c", &res);
    } while (res == 's');
    

    return 0;
}