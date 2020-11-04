#include <stdio.h>
#include<iostream>

using namespace std;
int main()  
{
	/*____________________________________________________________________________*/	
	cout << "===============================================" << endl;
	cout << "  \n\t UFVJM - Sistemas de Informacao \n\t\tPO - Luciana Assis";
	cout <<" \n\t\t     Exercicios \n " << endl;
	cout <<" \n     \t\t   2020-05   \n " ;
	cout << "===============================================" << endl;
	
	cout <<"\n\t\t EXERCICIO 11" << endl;
    cout << "\nO valor aproximado de uma série com n termos é calculado pelo somatório:";
cout << "onde i é o número de parcelas do somatório. Faça um programa que solicite ao ";
cout <<"usuário o valor de n e calcule o valor do somatório." << endl;
   
  cout << "\n\n";
        int n, i, soma, val;
        scanf("%d", &n);
        soma = 0;
        i = 0;
        while (i < n)
      {
      	
         scanf("%d", &val);
           i = i + 1;
           soma = soma + val;
       }
       printf("%d", soma);
       return 0;
  }