#include <stdio.h>
#include <stdlib.h>
void pivot(int a,int b);
void permute(int a, int b);
void quicksort(int tab[20], int inf, int sup);
int i,n,k,elem;
int tableau[1000];
int i,n,k,elem;
int main()
    {
        printf("entrez la taille du tableau \n");
        scanf("%d",&n);
        /*tableau = malloc(n * sizeof(int));*/
        for(i=0;i<= n-1;i++)
        {
            printf("entrer l'element numero %d\n",i+1);
            scanf("%d",&elem);
            tableau[i]= elem;
        }
        quicksort(tableau,0,n-1);


    }

void pivot(int a, int b)
{
    if (a < b)
    {
        k = b;
    }
    else
    {
        k = 0;
    }

}
void permute(int a, int b)
{
    k=a;
    a=b;
    b=k;
}
void quicksort(int tab[20],int inf, int sup)
{
    int gauche, droite,place;
    pivot(inf,sup);
    printf("le pivot est %d \n", k);
    place=k;
    if (place != 0)

    {
        gauche = place +1;
        droite= sup;
        printf("la gauche est %d \n", gauche);
        while (gauche <= droite)
        {
            while (tab[gauche]< tab[place])
            {
                gauche++;

            }
            while (tab[droite] <= tab[place])
            {
                droite--;
            }
            permute(tab[gauche],tab[droite]);

        permute(tab[place],tab[droite]);
        quicksort(tab,inf,droite-1);
        quicksort(tab,droite+1,sup);

        printf("le tableau trie est \n ");
        for(i=0;i<= n-1;i++)
        {
            printf("%d\t",tab[i]);

        }
        }

    }
}


