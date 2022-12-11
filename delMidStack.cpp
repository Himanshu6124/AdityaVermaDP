#include<iostream>
#include<vector>
#include<stack>
using namespace std;


void solve(stack<int>& s, int k)
{
    if(k==1)     //base case          //if only one element is present in stack
    {
        s.pop();
        return;
    }
    int val = s.top();
    s.pop();

    solve(s,k-1);   //hypothtesis
    s.push(val);   //induction

}

void midDel(stack<int>& s)
{
    if(s.empty())       // stack is empty
    return  ;
    int k;
    k = (s.size()/2) +1 ;          // to find mid element of stack
    solve(s,k);
}





int main()
{
    stack<int> s ,p ;

    s.push(7);
    s.push(5);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(4);



    midDel(s);

    
    while (!s.empty()) {
        cout << ' ' << s.top();
        s.pop();
}





}



