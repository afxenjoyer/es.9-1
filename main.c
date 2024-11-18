#include <stdio.h>

float quadrato(float valore)
{
    return valore * valore;
}

int main(void)
{
    float lato;

    printf("Inserisci la lunghezza del lato\n");
    scanf("%f", &lato);

    float area = quadrato(lato);
    printf("%.2f\n", area);

    return 0;
}