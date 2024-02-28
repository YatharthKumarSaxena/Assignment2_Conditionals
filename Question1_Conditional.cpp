// Q1:- Find the output for this code .Let input :- 2 3 6
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number\n";
    cin>> x; //user will give 'x' a value.
    int y,m;
    cout<<"Enter second number and value for taking modulus\n";
    cin>> y >> m; // user will give 'y' a value.
    int Z = (x * y) % m;
    cout << "Output is: " << Z;

}
// Ans:- By dry run the output of the terminal of the code as given in question is given below:-
//       Enter first number
//       2  (Note :- Here I have pressed enter key)
//       Enter second number and value for taking modulus
//       3 6 (Note:- Here I have given space after the 3 and enter key is pressed after 6)
//       Output is 0

//       (Hence Output is 0)<-Final answer