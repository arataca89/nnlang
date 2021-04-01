// isKeyWord.cpp
// arataca89@gmail.com
// 20210401

// verifica se uma string é uma palavra-chave
// checks if a string is a keyword

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <clocale>
using std::setlocale;

#include "nnlib.h" // isKeyWord()


int main(){
	
	setlocale(LC_ALL,"");
	
	string w;
	
	cout << "Keywords: in, out , op, var, if, do, repeat, nl, return, function" << endl;
	
	cout << "Entre com uma palavra ou 'quit' / Enter a word or 'quit': ";
	cin >> w;
	
	while(w != "quit"){
		
		if( isKeyWord(w) )
		    cout << w << " é uma palavra-chave / is a keyword" << endl;
        else
            cout << w << " não é uma palavra-chave / not a keyword" << endl;	

        cout << "Entre com uma palavra ou 'quit' / Enter a word or 'quit': ";
	    cin >> w;			
		
	}
	
	return 0;
}

// fim de isKeyWord.cpp
