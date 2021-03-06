// nnlib.cpp
// arataca89@gmail.com 
// 20210330

// Last updated: 20210403

#include "nnlib.h"


// 20210403
// if word can represent an decimal number, return 1; otherwise, return 0
int isFloat(const string& word){
	
	int ponto = 0;
	
	for(int i=1; i < word.size(); i++){
		
		if(word[i] == '.')
			ponto++;
		
		if( !isdigit(word[i]) && word[i] != '.')
		    return 0;
		
	}
	
	if(ponto != 1)
		return 0;
	
	return 1;
	
}


// 20210403
// if word can represent an integer, return 1; otherwise, return 0
int isInt(const string& word){
	
	for(int i=1; i < word.size(); i++){
		
		if( !isdigit(word[i]))
		    return 0;
		
	}
	
	return 1;	
	
}


// 20210401
// if word is an ID return 1; otherwise return 0
int isID(const string& word){
	
	char first;
	
	if( !isalpha(word[0]) )
	    return 0;
		
	for(int i=1; i < word.size(); i++){
		
		if( !isalnum(word[i]) && word[i] != '_' )
		    return 0;
		
	}
	
	return 1;	
	
}


// 20210401
// if word is in keywords[] return 1; otherwise return 0
int isKeyWord(const string& word){

	string keywords[10] = {"in", "out", "op", "var", "if", "do",
	                     "repeat", "nl", "return", "function" };	
	
	for(int i=0; i < 10; i++){
		
		if( !word.compare(keywords[i] ) )
		    return 1;
	}
	
	return 0;
	
}


// 20210331
// Last updated: 20210402
int isEndCommand(char c){	
	
	return( c == ';' ? 1 : 0 );
	
	/*
	switch(c){
	    case ';':
		    return 1;
		default:
		    return 0;
			
	}
	*/
	
}


// 20210331
int isDelimiter(char c){
	
	switch(c){
	    case '(':
		case ')':
		case '{':
		case '}':
		case '[':
		case ']':		
		    return 1;
		default:
		    return 0;
			
	}
	
}


// 20210331
int isCompOperator(char c){
	
	switch(c){
	    case '>':
		case '<':
		    return 1;
		default:
		    return 0;
			
	}
	
}


// 20210331
// Last updated: 20210402
int isAssigOperator(char c){

	return( c == '=' ? 1 : 0 );
	
	/*
	switch(c){
	    case '=':
		    return 1;
		default:
		    return 0;
			
	}
	*/
}


// 20210331
int isAritOperator(char c){
	
	switch(c){
	    case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		    return 1;
		default:
		    return 0;
			
	}
	
}


// 20210330
string removeSpaces(const string& text){
	
   string buffer = text;
   
   buffer.erase(remove(buffer.begin(), buffer.end(), ' '), buffer.end());
   
   return buffer;     
   
}


// 20210330
string removeTabs(const string& text){	

   string buffer = text;
   
   buffer.erase(remove(buffer.begin(), buffer.end(), '\t'), buffer.end());
   
   return buffer;      
   
}

// end of nnlib.cpp
