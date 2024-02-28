/* Q4:- WAP for finding the volume of the cylinder by taking radius and 
        height as input.*/
// Ans :- The code for this question is given below:-
#include <iostream>
using namespace std;
int main(){
    float r,h;  //r is the radius and h is the height of the cylinder
    cout<<"Please enter the radius of the cylinder = ";
    cin>>r;
    cout<<"Please enter the height of the cylinder = ";
    cin>>h;
    float pi = 3.14159,V; // V is the volume of the cylinder
    V = pi*r*r*h;
    cout<<"The volume of the cylinder with height "<<h<<" and radius "<<r<<" = "<<V;
}