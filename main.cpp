// THE FIZZ STRING PROBLEM
// Given an input string str, if the string starts with "f" (either upper or lowercase), print "Fizz".
// If the string ends with "b" (either upper or lowercase), print "Buzz".
// If both the "f" and "b" conditions are true, print "FizzBuzz".
// In all other cases, print the string unchanged.
// When you run the program the quotes will be placed around the output as shown below in the example.

// I will do that in the problem.
// • input of "fig" → "Fizz"
// • input of "dib" → "Buzz"
// • input of "fib" → "FizzBuzz"

#include <iostream>
#include <string>
using namespace std;
std::string str;
using std::cout;

void fizzBuzz(const string &str)
{
    string result = str;
    if ((str.substr(0, 1) == "f" || str.substr(0, 1) == "F") && (str.substr(str.size() - 1) == "b" || str.substr(str.size() - 1) == "B"))
        cout << "FizzBuzz";

    else if (str.substr(0, 1) == "f" || str.substr(0, 1) == "F")
        cout << "Fizz";
    else if (str.substr(str.size() - 1) == "b" || str.substr(str.size() - 1) == "B")
        cout << "Buzz";
    else
        cout << str;
}

int main()
{

    fizzBuzz("fig");
    cout << endl;
    fizzBuzz("dib");
    cout << endl;
    fizzBuzz("fib");
    cout << endl;

    return 0;
}