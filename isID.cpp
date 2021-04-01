// isId.cpp
// arataca89@gmail.com
// 20210401

// verifica se uma string � uma ID valida
// checks if a string is a valid ID

// ID: inicia com letra; pode ter apenas letras, n�meros e sublinhado

// ID starts with a letter; can only have letters, numbers and underscore

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <clocale>
using std::setlocale;

#include "nnlib.h" // isID()


int main(){
	
	setlocale(LC_ALL,"");
	
	string w;

	cout << "Entre com uma palavra ou 'quit' / Enter a word or 'quit': ";
	cin >> w;
	
	while(w != "quit"){
		
		if( isID(w) )
		    cout << w << " � um ID v�lido / is a valid ID" << endl;
        else
            cout << w << " n�o � um ID v�lido / is not a valid ID" << endl;	

        cout << "Entre com uma palavra ou 'quit' / Enter a word or 'quit': ";
	    cin >> w;			
		
	}
	
	return 0;
}