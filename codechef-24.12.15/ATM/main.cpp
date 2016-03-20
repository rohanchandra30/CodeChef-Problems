# include "iostream"

using namespace std;

int main()
{
int x;
double y;
double diff;

cin >>x >> y;
if(x%5==0 && (x>0 && x<=2000) && (y>=0 && y<=2000)&&(x<y-0.5))

	{
		diff=y-x-0.5;
cout<<diff<<endl;
		
		
}
else{
cout<<y<<endl;
}



}