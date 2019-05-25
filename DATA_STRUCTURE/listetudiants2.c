#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include<windows.h>
#include "dimitry.h"
void rectangleX(int largeur,int hauteur,int ligne,int colonne,int sens,int nombre);
void rectangle(int largeur,int hauteur,int ligne,int colonne);
enum tsexe
{ masculin=1,feminin}sexe;
int i,j;
struct  tdate
{
  int mois;
  int jour;
  int annee ;
}date;
typedef struct tetudiant
 {
   char nom[15];
   char prenom[15];
   char matricule[15];
   char lieunaissance[15];
   int age;
   enum tsexe sexe;
   struct tdate datenaissance;
 }etudiant ;
struct tetudiant t[20];
void gotxy (int ligne, int colonne);
void liretudiant(void);
void  menuaffichage(void);
void ecriretudiant(void);
void viderBuffer(void);
int n=1;
int rep;
main()
{
    system("color f6");
    gotoxy(1,1);printf("BONJOUR CE PROGAMME PERMET DE LISTER DES ETUDIANTS ENREGISTRE(E)S");
    menuaffichage();
    liretudiant();
    ecriretudiant();
    system("PAUSE");

}
void  liretudiant(void)
{

do
{
                      if(n%2)
                            system("color  A4 ");
                    gotoxy(15,6);scanf("%s",&t[n].matricule);
                    viderBuffer();
                    gotoxy(9,8);gets(t[n].nom);
                    gotoxy(12,10);gets(t[n].prenom);
                    gotoxy(13,12);scanf("%2d",&t[n].datenaissance.jour);
                    gotoxy(16,12);scanf("%2d",&t[n].datenaissance.mois);
                    gotoxy(19,12);scanf("%4d",&t[n].datenaissance.annee);
                    gotoxy(28,12);scanf("%s",&t[n].lieunaissance);
                    gotoxy(41,14);scanf("%d",&t[n].sexe );
                    gotoxy(9,16);scanf("%d",&t[n].age);
                    gotoxy(4,18);printf("voulez-vous continuer 1 pour continuer et 0 pour arreter");
                    gotoxy(15,19);printf("Reponse:");
                    gotoxy(25,19);scanf("%d",&rep);
                   if(rep==1)
                        {
                            system("cls");
                            n=n+1;
                            menuaffichage();
                        }

                   }while(rep==1);
}
void  menuaffichage()
{
    system("color E5");
    rectangle(60,21,2,2);
    gotoxy(7,4);printf("  ENREGISTREMENT DU %d EME ETUDIANT ",n);
    gotoxy(4,6);printf("matricule: _____________  ");
    gotoxy(4,8);printf("nom: ____________  ");
    gotoxy(4,10);printf("prenom: _________________ ");
    gotoxy(4,12);printf("Ne(\x82) le __/__/_____");
    gotoxy(26,12); printf("\x85 ____________________");
    gotoxy(4,14);printf("sexe,1 pour masculin/2 pour feminin: _");
    gotoxy(4,16);printf("age: __");

}

void ecriretudiant()
{
    system("cls");
    printf("    la liste des differents etudiants enregistre(e)s");
    system("color  A2");
    rectangleX (15,3,1,1,1,8);
    gotoxy(6,2);
    printf("numero");
    gotoxy(19,2);
    printf("matricule");
    gotoxy(36,2);
    printf("noms");
    gotoxy(51,2);
    printf(" prenom");
    gotoxy(64,2);
    printf("date naiss");
    gotoxy(79,2);
    printf("lieu naiss");
    gotoxy(95,2);
    printf("sexe");
    gotoxy(110,2);printf("age");
    int i=6,k,m=0;

    for (j=1;j<=n;j++)

{

    gotoxy(3,5+m);printf(" %7d",j);
    gotoxy(20,5+m);printf("%s",t[j].matricule);
    gotoxy(33,5+m);printf(" %s",t[j].nom);
    gotoxy(48,5+m);printf("%s",t[j].prenom);
    gotoxy(63,5+m);printf("%d/",t[j].datenaissance.jour);
    gotoxy(66,5+m);printf("%d/",t[j].datenaissance.mois);
    gotoxy(69,5+m); printf("%d",t[j].datenaissance.annee);
    gotoxy(79,5+m);printf("%s",t[j].lieunaissance);
    if (t[j].sexe==1)
          {
              gotoxy(94,5+m);
              printf("masculin");
          }
    else
          {
              gotoxy(94,5+m);
              printf("feminin");
        }
    gotoxy(113,5+m); printf("%d\n",t[j].age);
    m=m+3;
}
for (k=1;k<=n;k++)
            {
                rectangleX (15,i,1,1,1,8);

                i=i+3;
            }

gotoxy(1,m+6);
}
void viderBuffer(void)
{
    int c=0;
    while((c=getchar())!='\n'&&c!=EOF);
}

