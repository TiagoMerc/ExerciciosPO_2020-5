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
	
	cout <<"\n\t\t EXERCICIO 9" << endl;
    
	cout <<"\nEscreva um programa que, para n>0, escreva: ";

	
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