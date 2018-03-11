#include "functions.h"
#include <iostream>
#include <list>

bool balencedSymbols(std::string input){
	int i,a,b,c,x,y,z;
	for(i = 0;i < strlen(input);i++){
		char c = input[i];
		if(i == '('){
			a++;
		}
		else if(i == ')'){
			x++;
		}
		else if(i == '['){
			b++;
		}
		else if(i == '}'){
			y++;
		}
		else if(i == '['){
			c++;
		}
		else if(i == ']'){
			z++;
		}

		if(a != x){
			return false;
		}
		else if(b != y){
			return false;
		}
		else if(c != z){
			return false;
		}

		return true;

	}
}

std:string iToP(std::string input){
	int i;
	std::list<int> theList;
	std::string result = "";
	for(i=0;i<input.length();i++){
		if(input[i] == (int)input[i]){
			result = strcat(result,i); 
		}else if{
