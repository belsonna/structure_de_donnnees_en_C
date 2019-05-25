#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i,j,val,n;
void multimatrice(int a[n][n],int,int s[n][n]);
void affichermatrice(int a[n][n]);
void copie(int s[n][n],int d[n][n]);
void classe(int a[n][n]);
void matriceadjacence(int a[n][n]);

int main()
{
    printf("entrer l'ordre de la matrice\t");
    scanf("%d",&n);
    int tab[n][n];
    int somme[n][n];

   // tab= malloc(n*n*sizeof(int));
    for(i=0;i<= n-1;i++)
    {
        for(j=0;j<= n-1;j++)
        {
          printf("entrer l'element numero %d %d\t",i+1,j+1);
          scanf("\n%d",&val);
          tab[i][j]=val;

        }
    }
    affichermatrice(tab);
   multimatrice(tab,n,somme);
   classe(somme);
   matriceadjacence(tab);
   //affichermatrice(somme);




    return 0;
}


void multimatrice(int a[n][n],int n,int s[n][n])
{
    int i=0,j=0,l,k,c;
    int p[n][n];
   copie(a,s);
    printf(" s avant=\n");
  affichermatrice(s);
   for(l=0;l<n-1;l++)
   {
     for(i=0;i<= n-1;i++)
     {

          for(j=0;j<=n-1;j++)
          {
            p[i][j]=0;
            for(k=0;k<=n-1;k++)
              {
                  //   printf("a[%d][%d]=%d\t \n",i,j,a[i][j]);
                  p[i][j]=p[i][j]+(a[i][k]*a[k][j]);
                 // printf("p[%d][%d]=%d\t \n",i,j,p[i][j]);
              }

          }
     }

   for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {

           // printf("s[%d][%d]=%d \t",i,j,s[i][j]);
            s[i][j]=s[i][j]+p[i][j];
           //printf("s[%d][%d]=%d \t",i,j,s[i][j]);
        }
       //  printf("\n");
    }
   // printf("fin....\n");

    }
printf(" p=\n");
affichermatrice(p);
printf(" s=\n");
 affichermatrice(s);
}
void copie(int s[n][n],int d[n][n])
{
   // affichermatrice(s);
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            d[i][j]=s[i][j];
        }
   }
    //affichermatrice(d);
}


void affichermatrice(int a[n][n])
{
    int j,k;
    for(j=0;j<= n-1;j++)
          {
            for(k=0;k<= n-1;k++)
              {
                 printf("%d\t",a[j][k]);


              }
            printf("%\n\n");
          }

}
void classe(int a[n][n])
{
    int i,j;
     for(i=0;i<= n-1;i++)
          {
              printf("la classe de %d\n",i);
              for(j=i;j<= n-1;j++)
              {
                  if (a[i][j]*a[j][i]!=0)
                  {
                      printf("%d\t",j);
                  }
              }
              printf("\n");
          }


}
void matriceadjacence(int a[n][n])
{
    int i,j;
    for(i=0;i<= n-1;i++)
    {
        for(j=0;j<= n-1;j++)
        {
             if (a[i][j]!=0)
             {
                 a[i][j]=1;
             }
             else
             {
                 a[i][j]=0;
             }
        }

    }
    printf("la matrice d\'adjacence est: \n");
    affichermatrice(a);
}





