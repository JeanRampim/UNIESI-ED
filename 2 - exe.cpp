#include <iostream>
using namespace std;


int main()
{
int nadador;

cout <<"Digite a idade do nadador: "<<endl;
cin >>nadador;


if ((nadador>5) && (nadador<7)) {
	cout<<"infantil A"<<endl;
}
	
if((nadador >8) && (nadador<10)) {
	cout<<"infantil B"<<endl;
}

if((nadador >11) && (nadador<13)) {
	cout<<"juvenil A"<<endl;
}

if((nadador >14) && (nadador<17)) {
	cout<<"juvenil B"<<endl;
}

else (nadador >17); {
	cout<<"Senior"<<endl;
}	
	return 0;
}