#include <iostream>
using namespace std;
int main()
{
    int i=2,n1=0,n2=1,n3,a;
    cout<<"Fibonacci Series: ";
    cout<<n1<<" "<<n2;
    for(i;i<10;i++)
    {
        n3=n1+n2;
        cout<<" "<<n3;
        n1=n2;
        n2=n3;

    }
    return 0;
}
