#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float peso, altura, imc;
	cout <<"Digite o peso: ";
	cin >>peso;
	cout <<"Digite a altura: ";
	cin >>altura;

	//c�lculo imc


	imc = peso / (altura*altura);
	
	cout<<"Seu imc �: " << imc<<endl; 
	if (imc<20){
		cout<<"Abaixo do peso.";
	}
	else if(imc>20 && imc<25) {
		cout<<"Peso ideal.";
	}
	else if(imc>25) {
		cout<<"Voc� esta acima do peso.";
	}
	return 0;
}