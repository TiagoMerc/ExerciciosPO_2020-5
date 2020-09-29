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
    
    fp= fopen("Exercicio3.txt","r");
    while(!feof(fp))
    {
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                fscanf(fp,"%d",&matriz[i][j]);
            }
        }
    }

    printf("Matriz lida com sucesso\n\n");

    for(a=0;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
            printf("%d ",matriz[a][b]);
        }
        printf("\n");
    }
    
 //____________________________________________________________________
   fp1= fopen("Exercicio3_1.txt","r");
   while(!feof(fp1))
    {
        for(c=0;c<10;c++)
        {
            for(d=0;d<10;d++)
            {
                fscanf(fp1,"%d",&matriz[c][d]);
            }
        }
    }
  
  printf("\n\nMatriz 2\n\n");
      for(f=0;f<10;f++)
    {
        for(g=0;g<10;g++)
        {
            printf("%d ",matriz[f][g]);
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}