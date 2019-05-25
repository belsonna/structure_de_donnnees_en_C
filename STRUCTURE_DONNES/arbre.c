#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct arbre Arbre;
    struct arbre
    {
        int val;
        Arbre *frere;
        Arbre *enfant;
    };
Arbre *A,*B,*C,*D,*E,*F,*G;

void construirearbre();
int profondeur(Arbre *B,Arbre *C);
int taille(Arbre *noeud );
void afficher(Arbre *noeud);
int maximum(int a,int b);
int main()
{
    int hauteur;
    construirearbre();
    hauteur=profondeur(B,C);
    printf("la profondeur du graphe est %d\n",hauteur);
    afficher(A);
    return 1;
}
void construirearbre()
{
    Arbre G={7,NULL,NULL};
    Arbre D={4,NULL,NULL};
    Arbre E={5,&D,&G};
    Arbre F={6,NULL,NULL};
    Arbre C={3,NULL,&F};
    Arbre A={1,NULL,&C};
    Arbre B={2,&C,&E};


}
int taille(Arbre *noeud )
{
    //Arbre *enfants;
    int compteur = 1;
    /*for (enfants = noeud ->enfant; enfants != NULL; enfants =enfants->next)
        compteur += taille(enfants->node);*/
    return compteur;
}
int profondeur(Arbre *B,Arbre *C)
{
    int p,q;
    p=taille(B) +1;
    q=taille(C) +1;
    return(maximum(p,q));
}
int maximum(int a,int b)
{
    if (a <= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
void afficher(Arbre *noeud)
{
    printf("%d\n",&noeud->val);
    if (noeud->frere!=NULL || noeud->enfant!=NULL)
     {
        afficher(noeud->frere);
        afficher(noeud->enfant);
     }

}


