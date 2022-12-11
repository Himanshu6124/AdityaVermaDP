#include <iostream> // input streing is in lowercase
#include <vector>
using namespace std;

void solve(int open, int close,int n, string op, vector<string> &ans);

vector<string> balancedParenthesis(int n)
{
    int one = n;
    int zero = n;
    string op = "";
    vector<string> ans;
    solve(one, zero, n,op,ans);
    return ans;
}

void solve(int one, int zero,int n, string op,vector<string> &ans)
{
    //bc
    if (n==0)
    {
        ans.push_back(op);
        return;
    }

        string op1 = op;                        // no restriction on chosing 1
        op1.push_back('1');

        solve(one+1, zero, n-1,op1,ans);
    
    if(one >zero)                              // we can choose zero only when number of 1s are greater than 0
    {
        string op2 = op;
        op2.push_back('0');
    
        solve(one, zero+1, n-1,op2,ans);
    }
}

int main()
{
    vector<string> s = balancedParenthesis(3);

    for (string s : s)
    {
        cout << s << " ";
    }
}
