#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

using namespace std;
int main()

{ 		
	int escolha;
	char cliente[100], fornecedor[100];
	string remedio[]={"dorflex", "dipirona", "neusadina", "paracetamol"};

    cout <<"Bem vindo a Farmacia" <<endl;
    cout <<"Coloque seu nome para ser adicionado ao sitema..:" <<endl;
    cin.getline(cliente,100);
    system ("cls");
    cout <<"Bom dia Senhor(a) " << cliente <<endl;
    
    cout <<"Liste aqui os remedios desejados..: "<<endl<<endl;  
	
	for (int i = 0; i < sizeof(remedio) / sizeof(remedio[0]);i++)
	{
		cout << i << " --> " << remedio[i] <<endl;
	}
	
	cout <<"Escolha o numero do remedio desejado..: "<<endl;
	cin >> escolha;
	
	if (escolha > sizeof(remedio) / sizeof(remedio[0]))
	
	{
		cout <<"Tas es doido, nao tem esse numero! " <<endl;
	} 
	else	
	{
		cout <<" Voce escolheu " << remedio[escolha] <<endl;
		cout<<"obrigado pela compra volte sempre! "<<endl;
	}
	
		
    
    
    return(0);
}


