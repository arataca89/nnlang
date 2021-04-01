// tokens#1.cpp
// arataca89@gmail.com 
// 20210331

// The first token identification test

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "nnlib.h"


int main(){
	
	string linha = "op(soma1=nr1+2.5);";
	string buffer;

	cout << linha << endl;
	
	for(int i=0;i<linha.size();i++){
         
		 if(isDelimiter(linha[i])){
			cout << buffer << endl;
            cout << linha[i] << endl;
            buffer.clear();	
            continue;			
		 }
         
		 if(isAssigOperator(linha[i])){
			cout << buffer << endl;
            cout << linha[i] << endl;
            buffer.clear();	
            continue;			
		 }	
		 

		 if(isAritOperator(linha[i])){
			cout << buffer << endl;
            cout << linha[i] << endl;
            buffer.clear();	
            continue;			
		 }		 	

		 if(isEndCommand(linha[i])){
			cout << buffer << endl;
            cout << linha[i] << endl;
            buffer.clear();	
            continue;			
		 } 
		 
		 buffer.push_back( linha[i] );
		
	}
	
	return 0;
}

// end of de tokens#1.cpp
