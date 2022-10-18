#include<stdio.h>

void main()

{ FILE *fp,*fp1;
   char c;
    fp = fopen("text1.txt", "r");
    if(fp==NULL)
    printf("\nFile does not exist");
    while(1)

    {
        c=fgetc(fp);
        if(c==EOF)
        break;
        printf("%c", c);

    }
    fclose(fp);
}