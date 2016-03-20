#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

long long int T,x,y,z;
cin>>T;
vector<int> V;
while(T--){

cin>>x>>y>>z;
V.push_back(x);
V.push_back(y);
V.push_back(z);
sort(V.begin(),V.end());
cout<<V[1]<<"\n";
V.clear();
}


}