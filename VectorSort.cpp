#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";

    }

}


int main()
{
    vector<int> v;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    std::sort(v.begin(),v.end());

    display(v);
    return 0;
}
