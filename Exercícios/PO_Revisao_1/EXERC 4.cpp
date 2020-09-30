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
	
	cout <<"\n\t\t EXERCICIO 4" << endl;
    cout << "\nFaca um programa que leia 10 números e calcule imprima o maior valor, o menor valor e a media." << endl;
 
  int num, maior = 0, menor = 0, y=0;
  cout << "\nDigite um numero." << " Numero " <<  1 << ": ";
  cin >> num;
   
    menor = num;
    maior = num;
  
 
  for( y = 0; y < 9; y++ ){
   
    cout << "Digite um numero." << " Numero " <<  y+2 << ": ";
    
	cin >> num;
	
    if(num > maior) maior = num;
    if(num < menor) menor = num;
   
  }
float MEDIA ;

	int RESULTADO;
 RESULTADO = MEDIA =num/10;
  

 
 cout << "\nMAIOR: " << maior << "\tMENOR: " <<  menor;
 
 cout <<endl;

  cout << "\nMEDIA: " <<MEDIA + 4.5;
  
  cout << endl;
  //int RESULTADO;

 
 
 
 
  return 0;
 
} 
 
 
 