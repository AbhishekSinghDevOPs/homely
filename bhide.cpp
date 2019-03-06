#include<iostream>
using namespace std;
int area (int side)
{
	return side*side;
}
int area (int length, int breadth)
{
	return length*breadth;
}
float area (int radius)
{
	return 3.14*radius*radius;
}
int main()
{
	cout<<area (5);
	 cout<<(4,5);
	 cout<<area (7.6f);
}

