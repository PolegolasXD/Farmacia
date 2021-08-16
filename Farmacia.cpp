#include <iostream>


#include <stdio.h>

using namespace std;

class farmacia
{	
	public: 
		int escolha;
		char cliente[100], fornecedor[100];
		string remedio[];
		
		
};








int main()

{ 
	farmacia carvalho;
	string remedio[]={"dorflex", "dipirona", "neusadina", "paracetamol"};
    cout <<"Bem vindo a Farmacia" <<endl;
    cout <<"Coloque seu nome para ser adicionado ao sitema..:" <<endl;
    cin.getline(carvalho.cliente,100);
    system ("cls");
    cout <<"Bom dia Senhor(a) " << carvalho.cliente <<endl;
    
    cout <<"Liste aqui os remedios desejados..: "<<endl<<endl;  
	
	for (int i = 0; i < sizeof(remedio) / sizeof(remedio[0]);i++)
	{
		cout << i << " --> " << remedio[i] <<endl;
	}
	
	cout <<"Escolha o numero do remedio desejado..: "<<endl;
	cin >> carvalho.escolha;
	
	if (carvalho.escolha > sizeof(remedio) / sizeof(remedio[0]))
	
	{
		cout <<"Tas es doido, nao tem esse numero! " <<endl;
	} 
	else	
	{
		cout <<" Voce escolheu " << remedio[carvalho.escolha] <<endl;
		cout<<"obrigado pela compra volte sempre! "<<endl;
	}
	
		
    
    
    return(0);
}