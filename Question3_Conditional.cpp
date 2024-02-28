//Q3:- Find the output for this code . Let input :- 2 3
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    x+=y;
    x-=y;
    x%=y;
    cout<<x;
}
//Ans3:- By dry run
//       2 3 
//(Note:- 2 is entered . Then space is entered . And then 3 is entered)
//Here when 2 is entered then x=2 and then x=3
//x+=y mean x=x+y i.e x=2+3 -> x=5
//x-=y mean x=x-y i.e x=5-3 -> x=2
//x%=y mean x=x%y i.e x=2%3 -> x=2
//cout<<x finally print 0