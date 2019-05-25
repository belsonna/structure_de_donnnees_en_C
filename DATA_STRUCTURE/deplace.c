#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
# define n 1000
FILE * monfichier= NULL;
int main()
{
    char chaine[n] = "";
    monfichier = fopen("file.txt", "r");
    if (monfichier != NULL)
        {
        fgets(chaine, n, monfichier);
        printf("%s", chaine); //
        fclose(monfichier);
        }
    monfichier=fopen("deplace/file.txt","w+");
    fprintf(monfichier,chaine);
    fclose(monfichier);
    remove("file.txt");
    return 0;
}
