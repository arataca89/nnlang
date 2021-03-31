// isAritOperator.cpp
// arataca89@gmail.com 
// 20210331

// testing isAritOperator(), isAssigOperator() and isCompOperator() functions


#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "nnlib.h"


int main(){
	
	// test isAritOperator()
	
	//              0101010101 
	string linha = "a+#-c*6/B%";
	string buffer;
	string gabarito = "0101010101";
	
	for(int i=0;i<linha.size();i++){
         
		 buffer.push_back( isAritOperator( linha[i]) );
		
	}

	if(!buffer.compare(gabarito)){
		
		cout << "buffer  : " << buffer << endl;
        cout << "gabarito: " << gabarito << endl;
 		
	}	    
	
	
    // test isAssigOperator  and isCompOperator()
	

	
	// Assig                01000000
    // Comp                 00000101	
	linha = "s=a+b<3>";
	string gabaritoAssig = "01000000";
	string gabaritoComp  = "00000101";
	
 	buffer.clear();
	for(int i=0;i<linha.size();i++){
         
		 buffer.push_back( isAssigOperator( linha[i]) );
		
	}

	if(!buffer.compare(gabaritoAssig)){
		
		cout << "buffer  : " << buffer << endl;
        cout << "gabarito: " << gabaritoAssig << endl;
 		
	}	


 	buffer.clear();	
	for(int i=0;i<linha.size();i++){
         
		 buffer.push_back( isCompOperator( linha[i]) );
		
	}

	if(!buffer.compare(gabaritoComp)){
		
		cout << "buffer  : " << buffer << endl;
        cout << "gabarito: " << gabaritoComp << endl;
 		
	}
	
	return 0;
}

// end of test_isOperators.cpp
