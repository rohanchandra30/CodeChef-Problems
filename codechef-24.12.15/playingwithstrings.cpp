#include <iostream>
#include <string>
#include <vector>
#include "initials.h"

 using namespace std;

 int main(){

string name;
	

getline(cin,name);

makeinitials(name);

// if (name[0]!=' ')
//   {
//   	cout<<(char)toupper(name[0]);
//   }  
// 	for (int i = 0; i < name.size(); ++i)
// 	{
// 		if (name[i]==' ')
// 		{
// 			cout<<(char)toupper(name[i+1]);
// 		}
		
// 	}

// cout<<"\n";


 	return 0;
 }