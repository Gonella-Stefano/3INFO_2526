#include <stdio.h>

int main() 
{
    char testo[100];
    char alfabeto[] = "abcdefgilmnopqrstuvxz";
    int chiave, i, j;

    printf("Testo: ");
    scanf("%s", testo);

    printf("Chiave: ");
    scanf("%d", &chiave);

    for(i = 0; testo[i] != '\0'; i++) 
    {

        for(j = 0; j < 21; j++) 
        {

            if(testo[i] == alfabeto[j]) {
                testo[i] = alfabeto[(j + chiave) % 21];
                break;
            }
        }
    }

    printf("Cifrato: %s\n", testo);

    return 0;
}