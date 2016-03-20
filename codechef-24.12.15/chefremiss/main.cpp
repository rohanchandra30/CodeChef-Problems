# include "iostream"
# include "cmath"
using namespace std;

int main(){

int T;
long int x,y;
cin>>T;
for (int i = 0; i < T; i++)
{
	cin>>x>>y;


if (x>y)
{
	cout<<x<<" "<<x+y<<"\n";
}
else if (x<y)
{
	cout<<y<<" "<<x+y<<"\n";
}
else{

	cout<<y<<" "<<x+y<<"\n";
}
}
	return 0;
}