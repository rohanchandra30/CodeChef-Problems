#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
using namespace std;

 int main(int argc, char *argv[])
{
	if (argc>2)
	{
		return 1;
	}
	string plaintext;
		int j=0;
		char* keyword=argv[1];
getline(cin,plaintext);

for (int i=0; i< plaintext.size(); i++)
{
	if (!isalpha(plaintext[i]))
	{
		cout<<(char)(int)plaintext[i];
		j--;
		
	}
	
	if (isupper(plaintext[i]))
	{  
		if (isupper(keyword[j%strlen(keyword)]))
		{
			int p=((int)plaintext[i]-'A'+(int)keyword[j%strlen(keyword)]-'A')%26;
			cout<<(char)(p+'A');
		}
		if (islower(keyword[j%strlen(keyword)]))
		{
			int p=((int)plaintext[i]-'A'+(int)keyword[j%strlen(keyword)]-'a')%26;
			cout<<(char)(p+'A');
		}
	}
	
	if (islower(plaintext[i]))
	{
		
		
		if(islower(keyword[j%strlen(keyword)]))
		{
			int p=((int)plaintext[i]-'a'+(int)keyword[j%strlen(keyword)]-'a')%26;
			cout<<(char)(p+'a');}

		if (isupper(keyword[j%strlen(keyword)]))
		{
			int p=((int)plaintext[i]-'a'+(int)keyword[j%strlen(keyword)]-'A')%26;
			cout<<(char)(p+'a');
		}

	}

	j++;
}

cout<<"\n";
	return 0;
}