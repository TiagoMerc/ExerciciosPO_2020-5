#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
  
    	/*____________________________________________________________________________*/	
	cout << "===============================================" << endl;
	cout << "  \n\t UFVJM - Sistemas de Informacao \n\t\tPO - Luciana Assis";
	cout <<" \n\t     Exercicios\n " << endl;
	cout <<" \n     \t\t   2020-05   \n " ;
	cout << "===============================================" << endl;
	
	cout <<"\n\t\t EXERCICIO 10" << endl;
    
	cout <<"\nDada as matrizes da questão 3, faça um programa que calcule: ";

	
	int lin, col, tam=10, c=0, l=0;
  double ARMv[10][10]{{1,2,5,7,9,11,13,15,17,19},{2,4,6,8,10,12,14,16,18,20}};
  cout<< "\nDigite dez numeros: " << endl;
  cout << "\nPrimeira Linha: " << endl;  	    		   	
	    cout << "\n" << endl;
		       
    //IMPRIMIR
	cout << "\nImprimindo os valores armazenados no vetor!" << endl;
	cout << "\t\tValores:\n "<< endl;
	cout << "\n";
	//Repetição até 2 linas
 	 for(lin=0; lin<2; lin++){ 
        for(col=0; col<10; col++){
		  cout << ARMv[lin][col] << "\t";
	
		}
	  }
	 int n, somatorio = 0, i = 1;
     cin >> n;
     while (i <= n)
     {
         somatorio = somatorio + i * (i + 1);
         i = i + 1;
     }
    cout << "\nSomatorio \n" << somatorio << endl;
     return 0;
}