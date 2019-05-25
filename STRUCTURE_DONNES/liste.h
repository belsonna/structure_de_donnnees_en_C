#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct individu individu;
struct individu
    {
        char *nom;
        int age;
        individu *suivant;
    };
typedef individu* liste;
liste t,p,c;
liste inserertete(liste c,liste t);
liste inserer(liste t);
liste creer();
liste trierchaine(liste t);
void supprimer(individu *i);
void modifier(individu *i);
void afficher(liste c);
liste inserertete(liste c,liste t)
{

    c->suivant=t;
    return c;
}


liste creer()
{
    liste c;
    c=malloc(sizeof(individu));
    printf("entrer le nom de l'individu\n");
    scanf("%s",c->nom);
    printf("entrer la valeur de son age \n");
    scanf("%d",&c->age);
    c->suivant=NULL;
    return c;

}
void afficher(liste c)
{
    if (c==NULL)
    {
        printf("vide");
    }
    else
    {
        printf("%s\t",c->nom);
        printf("%d\n",c->age);
        afficher(c->suivant);
    }
}
liste inserer(liste t)
{
    // inserer après un individu
    liste i,p;
    int n;
    char *nom,*temp;
    temp=malloc(30*sizeof(char));
    nom=malloc(30*sizeof(char));
    p=t;
    printf("entrer le nom de l'individu apres lequel on souhaite inserer");
    scanf("%s",nom);
    i=creer();
    n=strlen(nom);
    while ( p!=NULL )
    {
        p->nom=malloc(n*sizeof(char));
        strcpy(p->nom,temp);
        if (strcmp(temp,nom))
        {
            i->suivant=p->suivant;
            p->suivant =i;
            return t;
            //exit(1);

        }
        p=p->suivant;
    }

    return t;
}
liste trierchaine(liste t)
{

}


