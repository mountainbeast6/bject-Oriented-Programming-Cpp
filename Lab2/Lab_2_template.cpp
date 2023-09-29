/***
 * CSE 2010 Fall 2023
 * Lab #{2}
 * {Peter Miller} {008320644}
 * {Sept. 22, 2023}
 * 
 * {I didnt find the actual lab, however based on the code notes im going to assume this is introducing sub-functions}
 * 
 * { the functions having to be declared at the begining of the file certainly tripped me up as im used to stashing them at the end of a file for cleanliness, however the error message clued me into what I had to do.
 * 
***/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int power(int base, int exponent){
    if((base>0)&&(exponent>0)){
        return pow(base,exponent);
    }
    else{
        throw std::out_of_range("Only positive integers allowed for power()");
    }
}

int floorDivision(int dividend, int divisor){
    if((divisor>0)&&(dividend>0)){
        int i;
        for(i=0;dividend-divisor>0;i++){
            dividend-=divisor;
        }
        return i;
    }
    throw std::out_of_range("Only positive integers allowed for floorDivision()");
}

int modDivision(int dividend, int divisor){
    if(divisor>0){
        return dividend%divisor;
    }
    throw std::out_of_range("Only positive integers allowed for divisor in modDivision()");
}
string operation(int selection){
    if(selection==1)
        return("power");
    if(selection==2)
        return("floorDivision");    
    if(selection==3)
        return("modDivision");    
    throw std::out_of_range("only integers 1-3 acceptable for operation()");
}
void print(int choice, int x, int y){
    cout << "Output of " << operation(choice) << " between " << x << " and " << y <<  " is : ";
    if(choice==1)
        cout << power(x,y) << endl;
    if(choice==2)
        cout << floorDivision(x,y) << endl;
    if(choice==3)
        cout << modDivision(x,y) << endl;
}
int main()
{   
    int x;
    int y;
    for(int i=0; i<5;i++){
        y=5-i;
        x=power(3,i+1);
        print(1,x,y);
        print(2,x,y);
        print(3,x,y);
        cout<<"-------------"<<endl;
    }
}