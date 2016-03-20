# include "iostream"
using namespace std;

int main(){

int T;
cin>>T;
long long int val;
while(T--){

cin>>val;

    int count=0;
    while(val){

if (val%10==4)
{
	count++;
}
val=val/10;

    }
    cout<<count<<"\n";
}
	return 0;
}