#include <iostream>
#include <stack>
#include <queue>

using namespace std;
void swap(int& a , int& b){
int temp;
temp=a;
a=b;
b=temp;
cout<<a<<b<<"\n";

 	}
 int main(int argc, char const *argv[])
 {int x=2;
 	int y=3;
 	swap(x,y);
 	cout<<x<<y<<"\n";

return 0;
 	
 }