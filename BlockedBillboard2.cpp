// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1,x2,x3,x4;
	int y1,y2,y3,y4;

	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;

	//long side of tarp
	int b = y2 - y1;

	//area of bad board

	int area_bad = (x2-x1)*(y2-y1);

	// area of intersection

	int area_intersect = (x2-x3) * (y4-y1);

	//min required area for tarp

	int min_tarp_area = area_bad - area_intersect;

	//area required for tarp

	int tarp_area = max(min_tarp_area, ((x2-x1)*b));

	cout<<tarp_area<<"\n";




}
