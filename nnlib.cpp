// nnlib.cpp
// arataca89@gmail.com 
// 20210330

// �ltima atualiza��o: 20210330

#include "nnlib.h"

string removeSpaces(const string& text){
   string buffer = text;
   buffer.erase(remove(buffer.begin(), buffer.end(), ' '), buffer.end());
   return buffer;   
}


string removeTabs(const string& text){
   string buffer = text;
   buffer.erase(remove(buffer.begin(), buffer.end(), '\t'), buffer.end());
   return buffer;   
}