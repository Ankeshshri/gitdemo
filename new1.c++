#include<iostream>
#include<new>
using namespace std;

int main()
{
    int *p;
    try
    {
        p=new int;
    }
    catch(bad_alloc xa)
    {
        cout<<"\nallocation failure\n";
        return 1;
    }
    *p=100;
    cout<<"value of p at address"<<p<<" is:"<<*p<<"\n";

    delete p;

    return 0;
}
