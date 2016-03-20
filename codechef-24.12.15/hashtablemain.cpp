#include <iostream>
#include <string>
#include <cstdlib>
#include "hashtable.h"

using namespace std;

int main(int argc, char const *argv[])
{
	hash hashobj;
	cout<<hashobj.Hash("Rohan")<<"\n";
	hashobj.AddItem("Paul","Locha");
	hashobj.AddItem("Kim","Iced Mocha");
	hashobj.AddItem("Annie","Hot Chocolate");
	hashobj.AddItem("Emma","Smoothie");
	hashobj.AddItem("Sarah","Passion Tea");
	hashobj.AddItem("Pepper","Caramel");
	hashobj.AddItem("Dave","coke");
	hashobj.AddItem("Jon","milk");
	hashobj.AddItem("Paula","juice");
	hashobj.AddItem("Jim","alcohol");
	hashobj.PrintItemsinIndex(5);
	hashobj.PrintFunction();
	hashobj.RemoveItem("Sarah");
	hashobj.PrintFunction();

	return 0;
}