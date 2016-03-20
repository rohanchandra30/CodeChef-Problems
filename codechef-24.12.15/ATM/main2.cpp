# include "iostream"
 
using namespace std;
 
int main()
{long long x;
double y;
double z;


cin >> x >> y;
z=y-x-0.5;
if (x%5==0 && (x>0 && x<=2000) && (y>=0 && y<=2000)&&(x<y-0.5)){
    cout << z
     << endl;
}
else{
    cout << y << endl;
}


 
    return 0;
}
 