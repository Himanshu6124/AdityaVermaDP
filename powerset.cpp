#include<iostream>
#include<vector>
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

    string op1 = op;
    string op2 = op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);

    solve(ip, op1, ans);
    solve(ip, op2, ans);
}

int main()
    {
        vector <string> s =powerSet("aab");

        for(string s : s)
        {
            cout<<s<<" ";
        }
    }


// #include <iostream>
// using namespace std;

// void solve(string ip, string op)
// {
//     if (ip.length() == 0)
//     {
//         cout << op << " ";
//         return;
//     }

//     string op1 = op;
//     string op2 = op;
//     op2.push_back(ip[0]);
//     ip.erase(ip.begin() + 0);
//     solve(ip, op1);
//     solve(ip, op2);
// }

// int main()

// {
//     string ip = "abcd";
//     string op = "";

//     solve(ip, op);
// }