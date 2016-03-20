#include <iostream>
#include <string>
#include "initials.h"
using namespace std;

void makeinitials(string name){

	if (name[0]!=' ')
  {
  	cout<<(char)toupper(name[0]);
  }  
	for (int i = 0; i < name.size(); ++i)
	{
		if (name[i]==' ')
		{
			cout<<(char)toupper(name[i+1]);
		}
		
	}

cout<<"\n";
}