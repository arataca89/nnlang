// nnlib.cpp
// arataca89@gmail.com 
// 20210330

// Última atualização: 20210330

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