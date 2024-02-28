/* Q5:- WAP to find the difference between ASCII of two characters
        ,take them as input .*/
// Ans:- The code for this question is given below:-
#include <iostream>
using namespace std;
int main(){
    char C1,C2;//C1 and C2 are the two characters
    cout<<"Please enter the first character = ";
    cin>>C1;
    cout<<"Please enter the second character = ";
    cin>>C2;
    cout<<"The difference between ASCII of two characters = "<<(int)C1-(int)C2;
}
