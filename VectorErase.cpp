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
    int n,x,p,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>p;
    cin>>a>>b;
    v.erase(v.begin()+p-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);

    display(v);
    return 0;
}
