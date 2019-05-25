#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
# define n 1000
FILE * monfichier= NULL;
FILE * monfic= NULL;
int main()
{
    char chaine[n] = "";
    monfichier = fopen("file.txt", "r");
    if (monfichier != NULL)
        {
        fgets(chaine,n,monfichier);
        printf("%s", chaine); //
        fclose(monfichier);
        }
    monfic=fopen("copie/file.txt","w+");
    fprintf(monfic,chaine);
    fclose(monfic);


    return 0;


}
