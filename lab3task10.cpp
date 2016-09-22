#include <iostream>
#include <cmath>

using namespace std;
int main()
{

double x,y,r;
cout<<"Enter the coordinates"<<endl;
cin>>x>>y;

cout<<"Enter the radius of circle"<<endl;
cin>>r;

if (x*x+y*y < r*r) {
cout<<"The point is inside of circle"<<endl;
}else {
cout<<"The point is not inside of circle"<<endl;
}



system("pause>nul");
return 0;
}
