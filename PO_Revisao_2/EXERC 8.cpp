#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int somar(int vetor[], int atual, int final) {
    if(atual == final) {
        return vetor[atual];
    } else {
        return vetor[atual] + somar(vetor, ++atual, final);
    }
}

int main(){
  
    	/*____________________________________________________________________________*/	
	cout << "===============================================" << endl;
	cout << "  \n\t UFVJM - Sistemas de Informacao \n\t\tPO - Luciana Assis";
	cout <<" \n\t     Exercicios\n " << endl;
	cout <<" \n     \t\t   2020-05   \n " ;
	cout << "===============================================" << endl;
	
	cout <<"\n\t\t EXERCICIO 8" << endl;
    
	cout <<"\n Usando recursividade, faca um programa que calcule\n ";
	cout <<"a soma dos valores de um vetor. \n";

   int tamanho = 0;

    cout << "\n\nQuantidade de elementos: \n";
    cin >> tamanho;

    int vetor[tamanho];

    cout << "\n--- Entrada de Dados --- \n";
    for (int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    cout << "\n------------- \n";
    cout << "Soma:  \n" << somar(vetor, 0, tamanho - 1);
    
    cout << "\n\n-----------------FIM-----------------\n";
	return 0;


}




  

	



  

	
