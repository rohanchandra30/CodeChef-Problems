#include "iostream"
#include <algorithm>
#include <vector>

using namespace std;

int main(){
 
 long long int T,N,x;
 vector<int> myvector;
 cin>>T;

 while(T--){

 	cin>>N;

while(N--)
{
	cin>>x;
	myvector.push_back(x);
}

sort(myvector.begin(), myvector.end());
cout<<myvector[0]+myvector[1]<<"\n";
 }

	return 0;
}