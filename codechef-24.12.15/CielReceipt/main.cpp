# include "iostream"
using namespace std;

int main()
{
	
int T;
long long int x;
cin>>T;
while(T>=1 && T<=5){

for (int i = 0; i < T; i++)
{
	int count=0;
cin>>x;
while(x>=2048){

x=x-2048;
count=count+1;
}
while(x>=1024){

x=x-1024;
count=count+1;
}
while(x>=512){

x=x-512;
count=count+1;
}
while(x>=256){

x=x-256;
count=count+1;
}
while(x>=128){

x=x-128;
count=count+1;
}
while(x>=64){

x=x-64;
count=count+1;
}
while(x>=32){

x=x-32;
count=count+1;
}
while(x>=16){

x=x-16;
count=count+1;
}
while(x>=8){

x=x-8;
count=count+1;
}
while(x>=4){

x=x-4;
count=count+1;
}
while(x>=2){

x=x-2;
count=count+1;
}
while(x>=1){

x=x-1;
count=count+1;
}
cout<<count<<"\n";

}
break;
}


	return 0;
}