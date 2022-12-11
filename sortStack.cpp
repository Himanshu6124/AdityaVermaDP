#include<iostream>
#include<vector>
#include<stack>
using namespace std;


void insert(stack<int>& s, int temp)
{
    if(s.size()==0 || temp > s.top() )
    {
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();

    insert(s,temp);
    s.push(val);


}

void sort(stack<int>& s)
{
    if(s.size()==1)
    return ;

    int temp = s.top();
    s.pop();
    sort(s);
    insert(s,temp);
}





int main()
{
    stack<int> s ;

    s.push(7);
    s.push(5);
    s.push(2);
    s.push(3);
    s.push(4);



    sort(s);

    
    // while (!s.empty()) {
    //     cout << ' ' << s.top();
    //     s.pop();
// }





}



