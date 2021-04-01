// nnlib.cpp
// arataca89@gmail.com 
// 20210330

// Last updated: 20210401

#include "nnlib.h"


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
int isEndCommand(char c){
	
	switch(c){
	    case ';':
		    return 1;
		default:
		    return 0;
			
	}
	
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
int isAssigOperator(char c){
	
	switch(c){
	    case '=':
		    return 1;
		default:
		    return 0;
			
	}
	
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
