#include <iostream>

using namespace std;

int main()
{
    int cc = -29; int ff =  30;
    VetorFlex v(cc, ff);
    for(int i==cc ;  i<=ff;i++)
    {
        float val = i - cc + 1;
        v.set(i, val);
    }
    for(int i=cc;i<=ff;i++)
    {
        float val = v.get(i);
        cout<<val<<endl;
    }
    return 0;
}
