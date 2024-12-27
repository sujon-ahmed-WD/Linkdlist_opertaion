#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    //  cout<<"in fun : " <<*p<<endl;
    // p = 100;
    *p = 20;  // akna main p location Same Same ...
}
int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "In Main : " << *p << endl;
    // cout<<"In Main : " <<*p<<endl;
    // cout << x << endl;

    return 0;
}