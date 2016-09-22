#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    cout<<"Enter 3 numbers"<<endl;
    int x,y,z;
    cin>>x>>y>>z;
    if (x>=y && y>=z){
        cout<<"x="<<x*2<<" y="<<y*2<<" z="<<z*2<<" "<<endl; 
    }
    else {
        cout<<"absolute value is x = "<<abs(x)<<" y="<<abs(y)<<" z="<<abs(z)<<endl; 
    }
    system("pause>nul");
    return 0;
}
