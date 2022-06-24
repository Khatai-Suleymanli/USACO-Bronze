#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	int left, right, top, bottom;


	left = min(x1, x3);
	right = max(x2, x4);
	bottom = min(y1, y3);
	top = max(y2, y4);


	int side = max(right - left, top - bottom);
	cout << side * side << endl;
	return 0;
}
