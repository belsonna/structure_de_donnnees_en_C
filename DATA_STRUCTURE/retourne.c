
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, n, rep=1;
    char resultat[50];
    char lettre[50];
    while(rep)
    {
    system("color f5");
    system("cls");
    printf("entrer un mot\n");
    scanf("%s",&lettre);
    n=strlen(lettre);
    resultat[0]=lettre[n-1];
    printf("%c",resultat[0]);
     for(i=0;i<= n-2;i++)
    {
        resultat[i+1]=lettre[i];
    }
    for(i=1;i<= n-1;i++)
    {
        printf("%c",resultat[i]);
    }
        printf("\n voulez-vous entrer un autre mot tapez 1 pour oui ou 0 pour non \t");
        scanf("%d",&rep);
    }
    return 1;

}



