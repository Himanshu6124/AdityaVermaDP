#include<iostream>
#include<vector>
using namespace std;


void insert(vector<int>& v, int temp)
{
    if(v.size()==0 || temp > v[v.size()-1] )     //ifvector is empty or temp is greater than all elements in vector v
    {
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);


}

vector<int> sort(vector<int>& v)
{
    if(v.size()==0)
    return v ;

    int temp = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,temp);
    return v;
    
}





int main()
{
    vector<int> r,v= {0,1,5,8,65,45,12,2};
    r=sort(v);

    for(int x :r)
    {
        cout<<x <<"  ";
    }

}



