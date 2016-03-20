#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long int T,N,K;
	vector<int> V;
	cin>>T;

	while(T--){
cin>>N>>K;
for (int i = 1; i <= K; i++)
{
	V.push_back(N%i);
}
sort(V.begin(),V.end());
cout<<V.back()<<"\n";
V.clear();
	}
	return 0;
}