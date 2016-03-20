
#include <iterator>
#include "iostream"
#include <algorithm>
#include <vector>
using namespace std;


long long int reverse(long long int a){
long long int d;
long long rev =0;
while(a!=0){
 d= a%10;
rev=rev*10 + d;
a=a/10;
}
return rev;
}

int main(){
long long int T,N,c;
vector <int> V;
cin>>T;

while(T--){

  cin>>N;
c=reverse(N);
V.push_back(c);
copy(V.begin(), V.end(), std::ostream_iterator<int>(std::cout, " "));
cout<<"\n";

V.clear();
}
  return 0;
}
  