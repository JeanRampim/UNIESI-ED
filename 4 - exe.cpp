#include <iostream>
#include<string>
#include <cmath>
using namespace std;
int main()
{
#define SAL 1045
float sal, hr, nsal;
	cout<<"Digite o numero de horas trabalhadas: ";
	cin>>hr;
	//Cálculo Sálario
	sal = hr * (SAL/2) *0.3;
	cout<<"Seu salario e: " <<sal;
	
    //Novo sálario
    
	if (sal <1000) {
	nsal = sal *0.15;
	cout<<"Novo salario /15%: " <<nsal;
	}
	else if(sal >1000) {
		nsal = sal *0.10;
		cout<<"Novo salario /10%: " <<nsal;
	}
	else if (sal >1500) {
		nsal = sal *0.5;
    cout<<"Novo salario: ";
	}

	return 0;
}