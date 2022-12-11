#include <iostream> // input streing is in lowercase
#include <vector>
using namespace std;

void solve(int open, int close,string op, vector<string> &ans);

vector<string> balancedParenthesis(int n)
{
    int open = n;
    int close = n;
    string op = "";
    vector<string> ans;
    solve(open, close, op,ans);
    return ans;
}

void solve(int open, int close,string op, vector<string> &ans)
{
    //bc
    if (open == 0 && close == 0)
    {
        ans.push_back(op);
        return;
    }

    if (open !=0)
    {
        string op1 = op;
        op1.push_back('(');

        solve(open-1, close, op1,ans);
    }
    if(close>open)
    {
        string op2 = op;                     // close must be greater than open to insert ')'
        op2.push_back(')');
    
        solve(open, close-1, op2,ans);
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
