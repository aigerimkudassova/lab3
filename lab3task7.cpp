#include <iostream>
using namespace std;
int main()
{
double x,y,x1,y1;
cout<<"Enter two different numbers"<<endl;
cin>>x>>y;

if (x!=y) {
    if (x<y) {
        x1=(x+y)/2;
        y1=2*x*y;
    
    } else {
        x1=2*x*y;
        y1=(x+y)/2;
    }
    cout<<"x= "<<x1<<" "<<"y= "<<y1<<endl;
} 
else {
    cout<<"Numbers must be different";
}

system("pause>nul");
return 0;
}
