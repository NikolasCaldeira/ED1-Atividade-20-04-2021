/*Exercício 3 - À partir de uma lista de nomes disponível em um arquivo TXT,
transforma-los em nomes no formato agenda telefônica. 
Exemplo:
José Antonio Santos Silva
Silva, José Antonio Santos */

#include <iostream>
#include <locale.h>
#include <fstream>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");

	ifstream  arq("nomes.txt");

	if(arq.is_open())
	{
		string linha;
		while( getline(arq, linha) )
		{
			cout << linha ;
			cout << endl;
			linha.erase(20, 30);
			linha.insert(0, "Silva, ");
			cout << linha << endl;
		}
		arq.close();
	}
	else
	{
		cout << "Arquivo não localizado ou não foi possível abrir.";
	}
	return 0;
}