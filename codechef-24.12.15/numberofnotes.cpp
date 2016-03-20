#include <iostream>
using namespace std;

int A[]={100,50,10,5,2,1};
long long int T,N;

int numnotes(int a, int b,int c){

	if (a==0)
	{
		return c;
	}
	while(a-A[b]>=0){
		a=a-A[b];
		c++;
	}
	b++;
	numnotes(a,b,c);

}

int main(){
int notes,i =0;
cin>>T;
while(T--){
	int count =0;
	cin>>N;
	notes=numnotes(N,i,count);
	cout<<notes<<"\n";
}

	return 0;
}