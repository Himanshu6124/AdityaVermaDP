#include<iostream>

using namespace std;
void TOH (int s,int d,int h,int n)
{
    if(n==1)
    {
        cout<<"move disc 1 from "<<s<<" to "<<d<<endl;
        return;
    }

        TOH(s,h,d,n-1);
        cout<<"move disc"<<n<<" from "<<s<<" to "<<d<<endl;
        TOH(h,d,s,n-1);
}

int main()
{
    int s,d,h;
    TOH(1,2,3,4);
}

