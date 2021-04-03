// isFloat.cpp
// arataca89@gmail.com
// 20210403

// verifica se uma string pode representar um número decimal
// checks whether a string can represent an decimal number

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <clocale>
using std::setlocale;

#include "nnlib.h" // isFloat()


int main(){
	
	setlocale(LC_ALL,"");
	
	string w;

	cout << "Entre com uma palavra ou 'quit' / Enter a word or 'quit': ";
	cin >> w;
	
	while(w != "quit"){
		
		if( isFloat(w) )
		    cout << w << " pode representar um número decimal / can represent an decimal number" << endl;
        else
            cout << w << " não pode representar um número decimal / can't represent an decimal number" << endl;	

        cout << "Entre com uma palavra ou 'quit' / Enter a word or 'quit': ";
	    cin >> w;			
		
	}
	
	return 0;
}