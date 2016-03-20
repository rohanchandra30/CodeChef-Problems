#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//intialises the board..
vector<int> draw(int a,int count){
	vector <int> V_draw;
	std::vector<int>::iterator it=V_draw.begin();
	for (int i=a*a-1; i >0; i--)
	{
		V_draw.push_back(i);
	}
	if ((a*a-1)%2!=0)
	{
			iter_swap(V_draw.begin()+13,V_draw.begin()+14);

	}
	for (int i=1; i <a*a; i++)
	{
		cout<<V_draw[i-1];
		if (V_draw[i-1]>=10)
		{
			cout<<' ';
		}
		else if (V_draw[i-1]<10)
		{
			cout<<' '<<' ';
		}
		count++;
		if (count%a==0)
		{
			cout<<"\n";
		}
	}

		V_draw.push_back(95);
		cout<<(char)V_draw.back()<<"\n";
		return V_draw;
}

//redraws the grid after receiving input from user.
vector<int> redraw(int a, vector<int>& V_redraw){
int count1=0;
	for (int i=0; i <a*a; i++)
	{
		
		if (V_redraw[i]>=10&&V_redraw[i]!=95)
		{cout<<V_redraw[i];
				

			cout<<' ';
		}
		else if (V_redraw[i]==95)
						{
							cout<<(char)V_redraw[i]<<' ';
						}
		else if (V_redraw[i]<10)
		{
			cout<<V_redraw[i];
			cout<<' '<<' ';
		}
		
		count1++;
		if (count1%a==0)
		{
			cout<<"\n";
		}
	}
return V_redraw;
}

// function to determine if you have arranged the grid as required..
bool won(vector<int>& V_won){
	int flag=0;
for (int i = 0; i < V_won.size(); ++i)
{
	 if(V_won[i]<V_won[i+1]){flag==1;}
}
return (flag==1);
}


//Upon input from user, grid tiles will re-arrange positions. The rearranged grid will then call the redraw() function
//to draw the grid
vector<int> move(int b, string c, vector<int>& V_move){
std::vector<int>::iterator it=find(V_move.begin(),V_move.end(),95);
int uscorePos=distance(V_move.begin(),it);
	
	if (c=="s")
	{
		if (*(it-b))
			{
				iter_swap(it,it-b);
				V_move=redraw(b,V_move);
				// cout<<*it;
			}	
		return V_move;
	}

		if (c=="w")
	{
		if (*(it+b))
			{
				iter_swap(it,it+b);
				V_move=redraw(b,V_move);
				// cout<<*it;
			}	
			return V_move;
		
	}

		if (c=="a")
	{
		if ((uscorePos+1)%b!=0)
			{
				iter_swap(it,it+1);
				V_move=redraw(b,V_move);
				// cout<<*it;
			}	
			return V_move;
		
	}

		if (c=="d")
	{
		if (uscorePos%b!=0)
			{
				iter_swap(it,it-1);
				V_move=redraw(b,V_move);
				// cout<<*it;
			}	
		return V_move;
	}
	else 
		{
		cout<<"Illegal Move ! Move again!"<<"\n";
		return V_move;
	}
} 

int main()
{
	//Initialising....
	int x;
	string y;
	vector<int> V;
	int z=0;
	cout<<"Welcome to the game of 15 ! Please enter the board size!"<<"\n";
	cout<<"Board Size:";
	cin>>x;

	//drawing the board..
	V=draw(x,z);

	//playing the game..
	cout<<"Press W A S D keys to move tiles"<<"\n";

	while(!won(V)){
	cin>>y;
	
	V=move(x,y,V);
}

//break out of loop once you have won
cout<<"Congrats! You won !"<<"\n";
	return 0;
}