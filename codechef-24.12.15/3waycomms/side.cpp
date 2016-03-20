#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		double r;
		cin >> r;
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		cin >> x3 >> y3;
		double d1, d2, d3;
		d1 = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
		d2 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
		d3 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
		//cout << d1 << " " << d2 << " "<<d3<<endl;
		if (d1 <= r && d2 <= r )
			cout << "yes" << endl;
		else
		if (d3 <= r && d2 <= r)
			cout << "yes" << endl;
		else
		if (d1 <= r && d3 <= r)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
} 