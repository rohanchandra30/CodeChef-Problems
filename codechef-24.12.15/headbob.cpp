#include <iterator>
#include "iostream"
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
int T,N;
int flag=0;
int flag2=0;
//char* x=new char[N];
vector<int> V;
cin>>T;
while(T--){

	cin>>N;
	char* x=new char[N];
	cin>>x;
	//cout<<x<<"\n";
for (char* it = x; *it; it++)
{
	if (*it=='I')
	{
		flag=1;
	}
	else if (*it=='Y')
	{
		flag2=1;
	}
}
if (flag2==0 && flag==0)
{
	cout<<"NOT SURE"<<"\n";
}
if (flag2==1 && flag==0)
{
	cout<<"NOT INDIAN"<<"\n";
}
if (flag==1)
{
	cout<<"INDIAN"<<"\n";
}
}
	return 0;
}
