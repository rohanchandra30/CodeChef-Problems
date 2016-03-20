#include <iostream>
#include <algorithm>

using namespace std;

int main(){

long long int T,N,M,K,a[100];
cin>>T;
while(T--){

cin>>N>>M>>K;
for (int i = 0; i <=K; ++i)
{
	if (N>M)
	{
		a[i]=N-M-i;
	}
	else if (M>N){
		a[i]=M-N-i;
	}
}
if (*min_element(a,a+K+1)>0)
{
	cout<<*min_element(a,a+K+1)<<"\n";
}
else{
	cout<<0<<"\n";
}
}

	return 0;
}