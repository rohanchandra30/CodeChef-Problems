#include <iostream>
#include "hashtable.h"
#include <string>
#include <cstdlib>

using namespace std;

int hash::Hash(string key){

	int hash=0;
	int index;
	

	for (int i = 0; i < key.length(); ++i)
	{
		hash=hash+(int)key[i];
	}
	index=hash%tableSize;
	return index;
}

hash::hash(){

	for (int i = 0; i < tableSize; ++i)
	{
		HashTable[i]=new item;
		HashTable[i]->name="empty";
		HashTable[i]->drink="empty";
		HashTable[i]->next=NULL;
	}
}

void hash::AddItem(string name, string drink){
	int index=Hash(name);
	if(HashTable[index]->name=="empty"){

		HashTable[index]->name=name;
		HashTable[index]->drink=drink;
	}

else{

	item* ptr=HashTable[index];
	item* n=new item;
	n->name=name;
	n->drink=drink;
	n->next=NULL;

	while(ptr->next!=NULL){ptr=ptr->next;}
	ptr->next=n;
}

}

int hash::NumberofItems(int index){

	int count=0;
	if (HashTable[index]->name=="empty")
	{
		return count;
	}
	else{
		count++;
		item* ptr=HashTable[index];
		while(ptr->next!=NULL){
			count++;
			ptr=ptr->next;
		}
	}
	return count;
}

void hash::PrintFunction(){
	int number;
	for (int i = 0; i < tableSize; ++i)
	{
		number=NumberofItems(i);
		cout<<"----------------"<<"\n";
		cout<<"index"<<i<<"\n";
		cout<<HashTable[i]->name<<"\n";
		cout<<HashTable[i]->drink<<"\n";
		cout<<"number of items:"<<number<<"\n";
		cout<<"----------------"<<"\n";
	}


}

void hash::PrintItemsinIndex(int index){

	item* ptr=HashTable[index];
	if (HashTable[index]->name=="empty")
	{
		cout<<"nothing in index"<<"\n";
	}
	else{
		while(ptr!=NULL){
			cout<<"-----------"<<"\n";
			cout<<ptr->name<<"\n";
			cout<<ptr->drink<<"\n";
			cout<<"-----------"<<"\n";
			ptr=ptr->next;
		}
	}
}

void hash::RemoveItem(string name){

	int index=Hash(name);
	item* delptr;
	item* p1;
	item* p2;

	if (HashTable[index]->name=="empty" && HashTable[index]->drink=="empty")
	{
		cout<<"no match"<<"\n";
	}
	else if (HashTable[index]->name==name && HashTable[index]->next==NULL)
	{
		HashTable[index]->name="empty";
		HashTable[index]->drink="empty";
		cout<<name<<"was removed"<<"\n";

	}
	else if (HashTable[index]->name==name)
	{
		delptr=HashTable[index];
		HashTable[index]=HashTable[index]->next;
		delete delptr;
		cout<<name<<"was removed"<<"\n";
	}	
	else 	{
		p1=HashTable[index]->next;
		p2=HashTable[index];
		while(p1!=NULL&&p1->name!=name){

			p2=p1;
			p1=p1->next;
		}
		if (p1==NULL)
		{
			cout<<"no match"<<"\n";
		}
		else{
			delptr=p1;
			p1=p1->next;
			p2->next=p1;
			delete delptr;
			cout<<name<<"was removed"<<"\n";
		}
	}
}