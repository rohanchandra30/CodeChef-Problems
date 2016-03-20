# include "iostream"
using namespace std;
# include "stdlib.h"



long long int fact(long long int a){
if (a==0)
{
	return 1;
}
	else{return fact(a-1)*a;}
}

int main(){

int T;
long long int n;
long long int x=0;
long long int *arr=new long long int[T];
cin>>T;
if (T<1 || T>100)
{
	exit(0);
}
while(T--){
cin>>arr[x];
if (arr[x]<1 || arr[x]>100)
{
	exit(0);
}

n=fact(arr[x]);
x++;
cout<<n<<"\n";



}




	return 0;
}