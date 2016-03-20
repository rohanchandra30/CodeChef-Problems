#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <string>
#include <cstdlib>

class hash{
private:
	static const int tableSize=10;

	struct item
	{
		std::string name;
		std::string drink;
		item* next;
	};

	item* HashTable[tableSize];

public:
	hash();
	int Hash(std::string key);
	void AddItem(std::string name, std::string drink);
	int NumberofItems(int index); 
	void PrintFunction();
	void PrintItemsinIndex(int index);
	void RemoveItem(std::string name);
};



#endif