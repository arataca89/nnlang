// nnlib.h 
// arataca89@gmail.com 
// 20210330

// Last updated: 20210331

#include <algorithm>

#include <string>
using std::string;


// return '1' if 'c' is comparison operator; otherwise return '0'
// comparison operators:
// grater than			>
// less then	   		<
char isCompOperator(char c);


// 20210331
// return '1' if 'c' is equal to '='; otherwise return '0'
char isAssigOperator(char c);


// 20210331
// return '1' if 'c' is arithmetic operator; otherwise return '0'
// arithmetic operators:
//     addition			+
//     subtraction 		-
//     multiplication 	*
//     division 		/
//     modulus 			%
char isAritOperator(char c); 


// 20210330
string removeSpaces(const string& text);
string removeTabs(const string& text);

// end of nnlib.h
