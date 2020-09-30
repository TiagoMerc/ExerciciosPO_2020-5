#include<iostream>

using namespace std;
int main()  
{
	/*____________________________________________________________________________*/	
	cout << "===============================================" << endl;
	cout << "  \n\t UFVJM - Sistemas de Informacao \n\t\tPO - Luciana Assis";
	cout <<" \n\t     Exercicios  \n " << endl;
	cout <<" \n     \t\t   2020-05   \n " ;
	cout << "===============================================" << endl;
	cout <<"\n\t\t EXERCICIO 2" << endl;
    cout << "\nFaça um programa que leia 10 numeros e os armazene em um vetor. Imprima o vetor. " << endl;
  double ARMv[10]{1,2,3,4,5,6,7,8,9,10};
  cout<< "\nDigite dez numeros: " << endl;
   for(int a=0; a<10; a++){  //faltou a inicialização "=0"
		  //cin>> ARMv[a];
	       ARMv[a];		
   }
	cout << "\nImprimindo os valores armazenados no vetor!\n\n" << endl;
	cout << "\tValores: ";
	for (int b=0; b<10; ++b) {
		cout << ARMv[b] << " ";
	}
		cout << "\t" << endl;
	return 0;
}