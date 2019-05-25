#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

 typedef struct
 {
     char *matricule;
     char *nom;
     char *prenom;
     float moyenne;

 } Etudiant;
 Etudiant *tab= NULL;
 void ordre(Etudiant *tab, int n);
 void desordre(Etudiant *tab,int n);
 void ordremoyenne(Etudiant *tab, int n);
 void permute(Etudiant a, Etudiant b);
 int i,n;
 char *mat,*nom,*prenom;
 float moy;
 int main()
 {
     printf("entrez le nombre d\'etudiant ");
     scanf("%d",&n);
     tab= malloc(n*sizeof(Etudiant));
     if (tab == NULL)
     {
        exit(0);
     }
     for(i=0;i<= n-1;i++)
     {
            printf("entrer les informations de l\'etudiant numero %d\n",i+1);
            printf ("Matricule\t");
            scanf("%s",&mat);
            tab[i].matricule= mat;
            printf ("\nNom\t");
            scanf("%s",&nom);
            tab[i].nom=nom;
            printf ("\nPrenom\t");
            scanf("%s",&prenom);
            tab[i].prenom=prenom;
            printf ("\nmoyenne\t");
            scanf("%f",&moy);
            tab[i].moyenne=moy;
    }
    printf("les etudiants dans l'ordre d'entrée sont\n");
    ordre(tab,n);
    printf("les etudiants dans l'ordre contraire d'entrée sont\n");
    desordre(tab,n);
    printf("les etudiants dans l'ordre de moyenne decroissant sont\n");
   ordremoyenne(tab,n);
     return 0;
 }
 void ordre(Etudiant *tab,int n)
 {
     printf("Numero\t Matricule\t \tNom\t Prenom\t Moyenne\n");
for(i=0;i<= n-1;i++)
     {
            printf("%d\t %s\t %s\t %s\t %f\n",i+1,&tab[i].matricule,&tab[i].nom,&tab[i].prenom,tab[i].moyenne);

    }
 }
  void desordre(Etudiant *tab,int n)
 {
     printf("Numero\t Matricule\t Nom\t Prenom\t Moyenne\n");
    for(i=n-1;i>= 0;i--)
     {
            printf("%d\t %s\t %s\t %s\t %f\n",i+1,&tab[i].matricule,&tab[i].nom,&tab[i].prenom,tab[i].moyenne);

    }
 }
 void ordremoyenne(Etudiant *tab, int n)
    {
        Etudiant *gauche;
        Etudiant *droite;
        int i,j,k,elem,stop,c;
        gauche= malloc(n/2*sizeof(Etudiant));
        droite= malloc(n/2*sizeof(Etudiant));

    while(k<=n/2-1 && stop ==0)
    {
        j=0;
        stop=1;
        while(j<= n/2-k)
        {
            if (&gauche[j].moyenne <&gauche[j+1].moyenne)
            {
                permute(gauche[j],gauche[j+1]);
                stop=0;
            }
            j++;

        }
        k++;
    }
    stop = 0;
    k=0;
    while(k<=n/2-1 && stop ==0)
    {
        j=0;
        stop=1;
        while(j<= n/2-k)
        {
            if (&droite[j].moyenne < &droite[j+1].moyenne)
            {
               permute(gauche[j],gauche[j+1]);

                stop=0;
            }
            j++;

        }
        k++;
    }
    i=0;
    j=0;
    k=-1;
    while(i<=n/2-1 && j>=n/2-1)
    {
        k++;
        if (&gauche[i].moyenne>= &droite[j].moyenne)
        {
            tab[k]= gauche[i];
            i++;
        }
        else{
            tab[k]= droite[j];
            j++;
        }
        }

    while (i<=4)
    {
        k++;
        tab[k]=gauche[i];
        i++;
    }
    while (j<=4)
    {
        k++;
        tab[k]=droite[j];
        j++;
    }
    printf("Numero\t Matricule\t Nom\t Prenom\t Moyenne\n");
    for(i=0;i<= n-1;i++)
     {
            printf("%d\t %s\t %s\t %s\t %f\n",i+1,&tab[i].matricule,&tab[i].nom,&tab[i].prenom,tab[i].moyenne);

    }
    }
void permute(Etudiant a, Etudiant b)
{
    Etudiant c;
    c.matricule=a.matricule;
    c.nom=a.nom;
    c.prenom=a.prenom;
    c.moyenne=a.moyenne;

    a.matricule=b.matricule;
    a.nom=b.nom;
    a.prenom=b.prenom;
    a.moyenne=b.moyenne;

    b.matricule=c.matricule;
    b.nom=c.nom;
    b.prenom=c.prenom;
    b.moyenne=c.moyenne;
}
