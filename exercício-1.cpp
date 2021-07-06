/*Exercício 1  - Receber através de digitação uma mensagem. 
Apresentar esta mensagem, centralizada, na linha 5 da tela.
À partir daí, cada letra desta mensagem deverá "cair", 
da linha 5 até a linha 20, simulando uma "cascata". 
Ao final, a mensagem deverá estar toda apresentada na linha 20.*/

/*OBS: ATIVIDADE NÃO ESTÁ TOTALMENTE DE ACORDO CONFORME O ENUNCIADO*/

#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <windows.h>
#define tam 100
using namespace std;

void gotoxy(short x, short y)
{
	COORD coord = {x, y};
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	string msg = "";
	string msgU = "";
	string mens = "";
	int col = 50;
	int y = 1;
	
	cout << "Digite uma mensagem: ";
	cin >> msg;
	msgU = msg;
	
	for (int i = 0; i < msgU.size(); i++)
	{
		for (int x = 5; x <= 20; x++)
		{
			gotoxy(50, 5);
			cout << msg;
			gotoxy(col, x);	
			cout << msgU.at(i);
			system("cls");			
			gotoxy(50, 20);			

			if(x > 19)
			{
				col += y;
			}
		}	
		mens.push_back(msg[i]);
		cout << mens << endl;
	}
		
	return 0;
}