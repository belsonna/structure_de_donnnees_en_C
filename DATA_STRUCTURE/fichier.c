#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
FILE * monfichier= NULL;

int main()
{
    //long pos;
    monfichier=fopen("file.txt","w+");
    fprintf(monfichier,"BONJOUR ");
    fclose(monfichier);
    monfichier=fopen("file.txt","a+");
    rewind (monfichier);
    fprintf(monfichier,"SONNA MOMO BELONA ");
    fclose(monfichier);
    monfichier=fopen("file.txt","a+");
    fprintf(monfichier," OK");
    fclose(monfichier);
    return 0;


}
