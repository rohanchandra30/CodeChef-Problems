#include "iostream"
#include <cmath>
using namespace std;

double ComputeDist(int a, int b, int c, int d){

double dist;

dist=sqrt(pow(a-c,2)+pow(b-d,2));

return dist;

}

int main(){

int T;
int R, x1,y1,x2,y2,x3,y3;
double d1,d2,d3;
cin>>T;
while(T--){
if (T>100 || T<=0) 
{
	break;
}
else{
cin>>R;
cin>>x1>>y1;
cin>>x2>>y2;
cin>>x3>>y3;
if (R<=0 || R>1000 || x1,x2,x3,y1,y2,y3>10000)
{
	break;
}
else{
	d1=ComputeDist(x1,y1,x2,y2);
d2=ComputeDist(x1,y1,x3,y3);
d3=ComputeDist(x2,y2,x3,y3);




if ((d1<=R && d3<=R) || (d3<=R && d2<=R) || (d2<=R && d1<=R))
//cout<<d1<<d2<<d3<<"\n";
{
	cout<<"yes"<<"\n";

}
else{

	cout<<"no"<<"\n";
}
}

}
}
return 0;

}