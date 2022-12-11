#include<iostream>                              // just use set instead of vector to store ans 
using namespace std;
#include<vector>
#include<set>
void solve(string ip, string op, set<string> &ans);
set<string> powerSet(string ip)
{
    string op = "";
    set<string> ans;
    solve(ip, op, ans);
    return ans;
}
void solve(string ip, string op, set<string> &ans)
{
    //bc
    if (ip.length() == 0)
    {
        ans.insert(op);
        return;
    }

    string op1 = op;
    string op2 = op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);

    solve(ip, op1, ans);
    solve(ip, op2, ans);
}

int main()
{
    set<string> s = powerSet("aaa");
    
    for(string c : s)
    {
        cout<<c<<" ";
    }
    
}
