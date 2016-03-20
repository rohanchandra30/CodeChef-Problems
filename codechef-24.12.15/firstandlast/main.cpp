#include <iterator>
#include "iostream"
#include <algorithm>
#include <vector>
using namespace std;


int main(){
long long int T,N;
vector <int> V;
cin>>T;

while(T--){

  cin>>N;

  while(N!=0){
  	V.push_back(N%10);
  	N/=10;
  }
cout<<V.front()+V.back();
//copy(V.begin(), V.end(), std::ostream_iterator<int>(std::cout, " "));
cout<<"\n";

V.clear();

}
  return 0;
}