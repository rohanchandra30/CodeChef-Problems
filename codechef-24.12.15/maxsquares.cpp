#include <iostream>

using namespace std;

int main(){
long long int T,B;
cin>>T;
while(T--){
int square_count=0;
cin>>B;
for (int i = 2; i <= B; i=i+2)
{
	for (int j = 2; j <= B-i; j=j+2)
	{
		square_count++;
	}
}

cout<<square_count<<"\n";
}
return 0;

}