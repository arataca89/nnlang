// nnlib.cpp
// arataca89@gmail.com 
// 20210330

// Last updated: 20210331

#include "nnlib.h"

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
