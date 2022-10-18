#include<stdio.h>
int main()
{
    int x[2][2][2]={{{0,1},{2,3}},{{4,5},{6,7}}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
        {
            printf("%d",x[i][j][k]);
        }
        printf("\n");
        
        }
    }
    
    return 0;

}