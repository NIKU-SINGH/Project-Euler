#include<iostream>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;

    for(int i=0;i<testcase;i++)
    {
          int number;
          cin>>number;
          int max =0;

          for(int div = 2; div * div <=number; div++)
          {
              while( number % div ==0)
              {
                  max = div;
                  number = number/div;
              }
          }
          if(number != 0)
          {
              if(number>max)
              {
                  max =  number;
              }
          }
          cout<<max<<endl;
    }
    return 0;
}