#include<stdio.h>
int main()
{
    FILE *fp;
    fp= fopen("C:\\Users\\ChoudAnt\\Documents\\c programming\\text1.txt","w+");
    fprintf(fp,"This is testing for fprintf gggg...\n",fp);
    fputs("This is testinf for fputsgggg....\n",fp);
    fclose(fp);
   return 0;
}