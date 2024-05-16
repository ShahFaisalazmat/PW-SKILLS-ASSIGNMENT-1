#include <iostream>
using namespace std;
int main () {
    int x,y;
    cout<<"BEFORE SWAP "<<endl;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    cout<<"AFTER SWAP "<<endl;
    int temp=x;
    x=y;
    y=temp;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;    
    return 0;
}