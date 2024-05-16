#include <iostream>
using namespace std;
int main () {
    char a='u';
    short b=1;
    int c=4;
    long d=5;
    long long e=6;
    float f=5;
    double g=7;
    long double h=8;
    bool i=1;
    cout<<"The size of (char) : "<<sizeof(a)<<" bytes"<<endl;
    cout<<"The size of (short) : "<<sizeof(b)<<" bytes"<<endl;
    cout<<"The size of (int) : "<<sizeof(c)<<" bytes"<<endl;
    cout<<"The size of (long) : "<<sizeof(d)<<" bytes"<<endl;
    cout<<"The size of (long long) : "<<sizeof(e)<<" bytes"<<endl;
    cout<<"The size of (float) : "<<sizeof(f)<<" bytes"<<endl;
    cout<<"The size of (double) : "<<sizeof(g)<<" bytes"<<endl;
    cout<<"The size of (long double) : "<<sizeof(h)<<" bytes"<<endl;
    cout<<"The size of (bool) : "<<sizeof(i)<<" bytes"<<endl;
    return 0;

}