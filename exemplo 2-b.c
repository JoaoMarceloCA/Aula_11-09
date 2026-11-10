#include <stdio.h>

int main() {
    
    double kilo, mihas;
    char res;

    do
    {
        printf("Digite o valor em milhas: ");
        scanf("%lf", &mihas);

        kilo = mihas*0.621371;
        printf("Valor em (Km): %.1f\n", kilo);

        printf("Deseja repetir (s/n)? ");
        scanf(" %c", &res);
    } while (res == 's');
    

    return 0;
}