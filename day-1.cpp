// Given a number check if it is divisiable by either 7 or 11
// Print("Perfect")
// Else("Not Perfect")

#include <iostream>
using namespace std;

int main(){
    int number=91;
    if(number%7==0 || number%11==0)
    {
        cout<<"Perfect ";
    }
    else{
        cout<<"Not Perfect";
    }
    return 0;
}