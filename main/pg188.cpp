#include<iostream>
#include<vector>

using namespace std;

vector<int> v = {1,2,3,4,5,6,7,8,9};

int main()
{
    for(auto beg = v.begin(), end = v.end(); beg != end; ++beg)
    {
        auto &r = *beg;
        r *= 2;
        cout<<r<<'\n';
    }
}