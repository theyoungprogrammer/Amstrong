// A program to find weather the number is amstrong or not 

#include <iostream>
#include <math.h> // proprocessor statements 

using namespace std; // using std namespace 

// logical func 
void amstrongNUMChecker() 
{
    int inNum, huN, teN, uNT, amgCk; // declaring nesscessary values or reserving spaces in mem 
    
    cout<<"please enter the three digit number ->  "<<endl; // output hint 
    cin>>inNum; // input number 

    huN = inNum / 100; // hundereds 
    teN = (inNum / 10) % 10; // tens 
    uNT = inNum % 10; // unit 
    // taking the 3 digit number provided by user into as single numbers -> 
    // ie -> 153 (input) = 1  5  3 

    amgCk = pow(huN, 3) + pow(teN, 3) + pow(uNT, 3); // using math.h lib

    if(amgCk == inNum) 
    {
        cout<<"the given number is amstrong "<<endl;
    } // if for true action -> if input = amstrong num then this would execute 

    else
    {
        cout<<"the given number is not amstrong"<<endl;
    } // else statement for false action ->  if input = non-amstrong number then else-block 
      // will execute 
    
}
// end of logical func

// --------------------------------------------------------------//

// calling driver func
int main() 
{
    amstrongNUMChecker(); // calling func
    while (true) // true == infinite loop
    {
        amstrongNUMChecker(); // looping the func so user can exit with ctrl+c or continue testing 
    }
    
    return 0; // proper termination 

}
// End of program