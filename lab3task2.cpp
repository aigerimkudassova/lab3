#include <iostream>
using namespace std;
int main()
{
cout<<"Enter three numbers"<<endl;
int x,y,z;
cin>>x>>y>>z;

if (x<=y && x<=z) {
cout<<"The minimum value is x="<<x<<endl;}

else if (y<=z)
{
    cout<<"The minimum value is y="<<y<<endl;
}
else {
cout<<"The minimum value is z="<<z<<endl;}


system("pause>nul");
return 0;
}
