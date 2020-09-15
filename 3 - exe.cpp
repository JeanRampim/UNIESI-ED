#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
#define SAL 1.045	
	float sal, hr, imp;
	cout<<"Digite o numero de horas trabalhadas: ";
	cin>>hr;
	
	//Cálculo Sálario
	sal = hr * (SAL/2) *0.3;
	cout<<"Seu salario e: " <<sal;
	
	return 0;
}