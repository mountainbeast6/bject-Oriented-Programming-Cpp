/***
 * CSE 2010 Fall 2023
 * Lab #{1}
 * {Peter Miller} {008320644}
 * {September 18. 2023}
 * 
 * {Students will learn the basics of completing their labs and writing reports that details
what they have learned. Additionally, grading expectations are outlined below. This lab
requires students to 1) compile and execute C++ programs, 2) execute input and output
(I/O) commands, 3) apply basic if and else statements (control flow) to select arithmetic
operations, and 4) write descriptions and/or graphs to describe their programs.}
 * 
 * The most challenging aspect was setting up the compiler. Im quite used to java and using Intellij which makes set up on a new machine easy, so this was a new challenge
 * 
***/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Select a number from 1-6.\n \
            1) sqrt(x)\n \
            2) pow(x,y)\n \
            3) ceil(x/y)\n \
            4) floor(x/y)\n \
            5) x/y\n \
            6) x%y\n";
    double x = 0;
    double y = 0;
    int select = 0;

    cin >> select;

    if (cin.fail()) {
        cerr << "Invalid\n";
        return -1;
    } 
    else if (select<1 || select>6)
    {
        cout<<"Invalid Selection";
        terminate;
    }
    
    else {
        string out;
        cout << "You selected " << select << endl;
        cout << "Requesting x\n";
        cin >> x;
        if (select==1)
            cout<<"sqrt("<< x <<") is "<< sqrt(x);
        else{
            cout << "Requesting y\n";
            cin >> y;
            if (select==2)
                cout<<x<<"^"<<y<<" is "<<pow(x,y)<<"\n";
            else if (select==3)
                cout<<x<<"/"<<y<<" rounded up is "<<ceil(x/y);
            else if (select==4)
                cout<<x<<"/"<<y<<" rounded down is "<<floor(x/y);
            else if (select==5)
                cout<<x<<"/"<<y<<" is "<<floor(x/y);
            else if (select==6)
                cout<<x<<"%"<<y<<" is "<<((int)x%(int)y);
        }
    } 
    return 0;
}