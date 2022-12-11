#include <iostream> // input streing is in lowercase
#include <vector>
using namespace std;

void solve(string ip, string op, vector<string> &ans);

vector<string> powerSet(string ip)
{
    string op = "";
    vector<string> ans;
    solve(ip, op, ans);
    return ans;
}

void solve(string ip, string op, vector<string> &ans)
{
    //bc
    if (ip.length() == 0)
    {
        ans.push_back(op);
        return;
    }

    if (isalpha(ip[0]))
    {
        string op1 = op;
        string op2 = op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin() + 0);

        solve(ip, op1, ans);
        solve(ip, op2, ans);
    }
    else
    {
        string op1 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        solve(ip, op1, ans);
    }
}

int main()
{
    vector<string> s = powerSet("a1B2");

    for (string s : s)
    {
        cout << s << " ";
    }
}
