/* Q6:- Find the output of the below code */
#include <iostream>
using namespace std;
int main()
{
 int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
 cout<<i;
}
//Ans:- By the concept of dry run
//      i will be calulated by the heiarchy of the operators
//      In terms of heiarchy, first / is calculated followed by multiplication
//      and then by addition.Since parenthesis has the highest heiarchy hence
//      it is first calculated and then modulus operator will work
//      ( 4 + 7 / 5 * 6 * 6+9 )% 100
//      ( 4 + 1 * 6 * 6+9 )% 100 [Here 7/5 is computed , int(7/5)=1]
//      ( 4 + 36 + 9 )% 100  [Here 1*6*6 is computed, int(1*6*6)=36]
//      49 % 100 
//      Final Ans :- 49