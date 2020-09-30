#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include <fstream>
int main()
{
    int matriz1[10][10], matriz2[10][10];

    int i,j;
    int a,b, c, d, f, g;

    FILE *fp,*fp1;
    	printf("\t\tEXERCICIO 5\n\n");
    printf("\nFaca um programa que leia 2 matrizes de um arquivo .txt de tamanho 10x10 e calcule a soma das duas matrizes. Imprima a matriz resultante.\n");
	printf("\n\n");
    fp= fopen("Matriz1_Exercicio3.txt","r");
    while(!feof(fp))
    {
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                fscanf(fp,"%d",&matriz1[i][j]);
            }
        }
    }

    printf("Matriz 1\n\n");

    for(a=0;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
            printf("%d ",matriz1[a][b]);
        }
        printf("\n");
    }
    
 //____________________________________________________________________
   fp1= fopen("Matriz2_Exercicio3.txt","r");
   while(!feof(fp1))
    {
        for(c=0;c<10;c++)
        {
            for(d=0;d<10;d++)
            {
                fscanf(fp1,"%d",&matriz2[c][d]);
            }
        }
    }
  
  printf("\n\nMatriz 2\n\n");
      for(f=0;f<10;f++)
    {
        for(g=0;g<10;g++)
        {
            printf("%d ",matriz2[f][g]);
        }
        printf("\n");
    }

    fclose(fp);
    
//_______________________________
//calcule a soma das duas matrizes. Imprima a matriz resultante.

 //SOMA
	printf("\nCalculando a soma das duas matrizes: ");
	printf("\n");
	 for(int c=0;c<10;c++){
        for(int d=0;d<10;d++){
          printf(" %d ", matriz1[c][d] + matriz2[c][d]);
		}
		
    printf("\n");
   }
    return 0;
	 
}