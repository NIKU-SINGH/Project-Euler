/* *************************************QUESTION 1 *********************************************

If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
************************************************************************************************* */

//header files
#include<iostream>
using namespace std;

//main function
int main(){
    int testcase;
    cin>>testcase;


    //loop to run for different test case
    for(int i=0;i<testcase;i++)
    {
        //Input of nunber upto which multiple needs to be calculated
        int n;
        cin>>n;

    //long long int because number gets large so it can store large number
   long long int MultiOfThree, MultiOfFive , MultiOfFifteen, SumOfMultiple=0;

  /* one of the approach can be that we though all numbers and check whether its is a multiple of 
    five or three and then add.
    But that approach is time consuming .
    so in order to reduce time a new approach is required.
    
    that is we add multiples of three and five and subtract multiples of fifteen.
    by this we avoid checking each number.
    */

  //To calculate how many mutiples are there of Three below n
   MultiOfThree = (n-1)/3;

   //To calculate how many mutiples are five of Three below n
   MultiOfFive = (n-1)/5;

   //To calculate how many mutiples are there of fifteen below n
   MultiOfFifteen = (n-1)/15;

   //together adding the sum of all multiple of 3,5 and subtracting 15

   /*We Know sum of
    3+6+9+12+....99 can be re written as ----> 3*(1 + 2 + 3 + 4 + ....33)
    
    5 + 10 + 15 + 20 .... 95  -----> 5 * ( 1 + 2 + 3 + 4 +....19)

    15 + 30 + 45 + ......90  ------> 15 * ( 1 + 2 +3 ...6)

    and we know sum of n Natural  numbers is ---->[n*(n+1)/2]
    so applying that
    */
   SumOfMultiple = (3*(MultiOfThree*(MultiOfThree+1)/2)) + (5*(MultiOfFive*(MultiOfFive+1)/2)) - (15*(MultiOfFifteen*(MultiOfFifteen+1)/2));
   
   
   cout<<SumOfMultiple<<endl;
   
    }
    return 0;
}