#include <iostream>

using namespace std;
float abs1(float x){
if(x<0)
    return x*(-1);
else
    return x;

}

int main()
{
    float m,h;
    cin>>h>>m;
    float x;
    x=float((11*m-60*h)/2);
    x=abs1(x);

    if(x>180){
        cout<<(360-x);
    }
    else{
        cout<<x;
    }
    return 0;
}
