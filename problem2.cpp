#include<iostream>
using namespace std;

int main()
{   //testcase

    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n ;
        cin>>n;
        int a =0, b=1;
        unsigned long long int fib, sum =0;
        fib = a + b;
        while(fib<n)
        {
            if(fib % 2==0)
            {
                sum += fib;
            }
            fib = a + b;
            a = b;
            b = fib;
        }
        cout<<sum<<endl;
    }

    return 0;
}
