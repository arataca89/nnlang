// removeSpacesAndTabs.cpp
// arataca89@gmail.com
// 20210330

// Remove espaços (' ') e tabulações ('\t') de uma string

# include "nnlib.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <iomanip>
using std::setw;

#include <ios>
using std::left;

#include <clocale>
using std::setlocale;

#define CAMPO 20

int main(){
    setlocale(LC_ALL,"");
	
	string linha = "op(soma1		 = nr1 + 2.5);";
    string buffer;
	
	cout << setw(CAMPO) << left << "linha" << ": " << linha << endl;

    cout << setw(CAMPO) << left << "Removendo espaços" << ": " << removeSpaces(linha) << endl;	
	
    cout << setw(CAMPO) << left << "Removendo tabs" << ": " << removeTabs(removeSpaces(linha)) << endl;

    linha = removeTabs(removeSpaces(linha));
	
    // neste ponto linha estará assim: op(soma1=nr1+2.5);	
	cout << setw(CAMPO) << left << "linha" << ": " << linha << endl;	
	
	return 0;
}
// fim de removeSpacesAndTabs.cpp
