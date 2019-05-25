// MODULE PROGRAMMATION
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
FILE * monfichier= NULL;
char chaine[10000];
int contenu(FILE *);
typedef struct
{
    char *numero;
    char *salle;
    char *plage;
    char *matiere;
    char *enseignant;
    char *dat;
    char *numemploi;
}programme;
programme p;
int choix;
void menu();
void enregistrer();
void save();
void modifier();
void supprimer();
void rechercher();
void lister() ;
void emploitemps();
int main()
{
   monfichier = fopen("Programmation.txt", "a+");
   if (monfichier == NULL)
   {
       printf("Echec de creation du fichier");
       exit(1);
   }
   else
   {
       menu();
       system("PAUSE");
       fclose(monfichier);

   }
   return 0;


}
void menu ()
{
    printf("*****************************************\n");
    printf("*          MENU PRINCIPAL               *\n");
    printf("*****************************************\n");
    printf("*  1- ENREGISTRER UNE PROGRAMMATION     *\n");
    printf("*  2- MODIFIER UNE PROGRAMMATION        *\n");
    printf("*  3- SUPPRIMER UNE PROGRAMMATION       *\n");
    printf("*  4- RECHERCHER UNE PROGRAMMATION      *\n");
    printf("*  5- LISTER LES PROGRAMMATIONS         *\n");
    printf("*  6- EMPLOI DE TEMPS                   *\n");
    printf("*  7- MEMBRE DU GROUPE                  *\n");
    printf("*  8- QUITTER                           *\n");
    printf("*****************************************\n");
    printf("faites un choix\n");
    scanf("%d",&choix);

    switch (choix)
    {
        case 1: enregistrer();break;
        case 2: enregistrer();break;
        case 3: enregistrer();break;
        case 4: enregistrer();break;
        case 5: enregistrer();break;
        case 6: enregistrer();break;
        case 7: enregistrer();break;
        case 8: enregistrer();break;
        default: printf("veuillez refaire le choix\n"); menu();

    }
}
void enregistrer()
{ int contain;

 contain = contenu(monfichier);

    if (contain == 0)
   {

        fprintf(monfichier,"                           LES PROGRAMMATIONS                      \n\n");
        fprintf(monfichier,"NUMERO\tSALLE\t\tDATE\t\tPLAGE\t\tMATIERE\t\tENSEIGNANT\t\tEMPLOI\n");
        save();
   }
    else
    {
    save();

    }
    exit(1);
}
int contenu(FILE * fic)
{
    int i,caractereActuel = 0;
    if (fic != NULL)
        {

            caractereActuel = fgetc(fic);
            while (caractereActuel != EOF)
            {
                chaine[i]= caractereActuel;
                caractereActuel = fgetc(fic);
                i++;
            }
            return strlen(chaine);
        }
}
void save()
{
    int rep=1;
    while (rep == 1)

        {   printf("entrez les informations sur la programmation en cours\n");
            printf("Numero:\t");
            scanf("%s",&p.numero);
            fprintf(monfichier,&p.numero);
            fprintf(monfichier," \t");
            printf("Salle:\t");
            scanf("%s",&p.salle);
            fprintf(monfichier,&p.salle);
            fprintf(monfichier," \t\t");
            printf("Date:\t");
            scanf("%s",&p.dat);
            fprintf(monfichier,&p.dat);
            fprintf(monfichier," \t");
            printf("Plage:\t");
            scanf("%s",&p.plage);
            fprintf(monfichier,&p.plage);
            fprintf(monfichier," \t\t");
            printf("Matiere:\t");
            scanf("%s",&p.matiere);
            fprintf(monfichier,&p.matiere);
            fprintf(monfichier," \t\t");
            printf("Enseignant:\t");
            scanf("%s",&p.enseignant);
            fprintf(monfichier,&p.enseignant);
            fprintf(monfichier," \t\t\t");
            printf("Emploi:\t");
            scanf("%s",&p.numemploi);
            fprintf(monfichier,&p.numemploi);
            fprintf(monfichier," \n");
            printf("un autre enregistrement tapez 1 pour oui et 0 pour non\t\t");
            scanf("%d",&rep);
        }
}


