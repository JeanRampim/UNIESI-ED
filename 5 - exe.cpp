#include <iostream>
using namespace std;

int main()

{
float Valor, Pag, Desc, D2, D3;
int op;

cout <<"Digite o valor do produto"<<endl;
cin>>Valor;
cout<<"Forma de pagamento"<<endl;	
cin>>Pag;
cout<<"1 - Pagamento a vista em dinhero: "<<endl;
cout<<"2 - Pagamento a vista no cartao: "<<endl;
cout<<"3 - 2 vezes sem juros: "<<endl;
cout<<"4 - 3 vezes com 10% de juros: "<<endl;
cin>>op;

switch(op)
{
	
case 1:
	Desc = (10/100)*Valor;
	Pag = Valor - Desc;
	cout<<"O valor da compra com 10% de desconto sai: "<<Pag<<endl;
	break;
case 2:
	Desc = (5/100)*Valor;
	Pag = Valor - Desc;
	cout<<"O valor da compra com 5% de deconsto: "<<Pag<<endl;
    break;
case 3:
	D2 = Valor/2;
	Pag = Valor;
	cout<<"O valor da compra em duas vezes: "<<Pag<<endl;
	break;
case 4:
	D3 = (10/100)*Valor;
	Pag = Valor + D3/3;
	cout<<"O valor compra em 3 vezes com o adicional de 10% de juros: "<<Pag<<endl;
    break;
}


	
return 0;
}
