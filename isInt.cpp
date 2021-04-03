// isInt.cpp
// arataca89@gmail.com
// 20210403

// verifica se uma string pode representar um número inteiro
// checks whether a string can represent an integer


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <clocale>
using std::setlocale;

#include "nnlib.h" // isInt()


int main(){
	
	setlocale(LC_ALL,"");
	
	string w;

	cout << "Entre com uma palavra ou 'quit' / Enter a word or 'quit': ";
	cin >> w;
	
	while(w != "quit"){
		
		if( isInt(w) )
		    cout << w << " pode representar um inteiro / can represent an integer" << endl;
        else
            cout << w << " não pode representar um inteiro / can't represent an integer" << endl;	

        cout << "Entre com uma palavra ou 'quit' / Enter a word or 'quit': ";
	    cin >> w;			
		
	}
	
	return 0;
}