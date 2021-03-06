// nnlib.h 
// arataca89@gmail.com 
// 20210330

// Last updated: 20210403

#include <algorithm>

#include <string>
using std::string;


// if word can represent an decimal number, return 1; otherwise, return 0
int isFloat(const string& word);

// if word can represent an integer, return 1; otherwise, return 0
int isInt(const string& word);

// if word is an ID return 1; otherwise return 0
int isID(const string& word);


// return 1 if 'word' is a keyword; otherwise return 0
int isKeyWord(const string& word);


// return 1 if 'c' is equal to ';', otherwise return 0
int isEndCommand(char c);


// return 1 if 'c' is a delimiter; otherwise return 0
// delimiters: (	)	{	}	[	]
int isDelimiter(char c);


// return 1 if c is comparison operator; otherwise return 0
// comparison operators:
// grater than			>
// less then	   		<
int isCompOperator(char c);


// 20210331
// return 1 if 'c' is equal to '='; otherwise return 0
int isAssigOperator(char c);


// 20210331
// return 1 if 'c' is arithmetic operator; otherwise return 0
// arithmetic operators:
//     addition			+
//     subtraction 		-
//     multiplication 	*
//     division 		/
//     modulus 			%
int isAritOperator(char c); 


// 20210330
string removeSpaces(const string& text);
string removeTabs(const string& text);

// end of nnlib.h
