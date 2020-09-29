#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include <fstream>
int main()
{
    int matriz[10][10];
    int i,j;
    int a,b, c, d, f, g;

    FILE *fp,*fp1;
    
    fp= fopen("Exercicio3_arquivo.txt","r");
    while(!feof(fp))
    {
        for(i=9;i<19;i++)
        {
            for(j=9;j<19;j++)
            {
                fscanf(fp,"%d",&matriz[i][j]);
            }
        }
    }

    printf("Matriz 1\n\n");

    for(a=9;a<19;a++)
    {
        for(b=9;b<19;b++)
        {
            printf("%d ",matriz[a][b]);
        }
        printf("\n");
    }
    
     fclose(fp);
    return 0;
}