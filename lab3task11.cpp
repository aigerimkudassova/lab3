#include <iostream>
#include <cmath>

using namespace std;
int main()
{
int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>=b && b>=c && c>=d){
        b = a;
        c = a;
        d = a;
    }
    else if(a>b && b>c && c>d){
    }
    else{
        a = a*a;
        b = b*b;
        c = c*c;
        d = d*d;
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<d;
    

system("pause>nul");
return 0;
}
