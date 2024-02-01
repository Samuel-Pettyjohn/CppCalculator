#include <iostream>
#include <string>
#include <Windows.h> 

using namespace std;

int num1;
int num2;
char sign;
int ans;

int main()
{
up_here:

    cout << "Enter your 1st number: " << endl;
    cin >> num1;
    cout << "Enter +, -, /, *: " << endl;
    cin >> sign;
    cout << "Enter your 2nd number: " << endl;
    cin >> num2;

    switch (sign) {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
    case '/':
        ans = num1 / num2;
    case '*':
        ans = num1 * num2;
        
    }
    
    cout << "The answer is = " << ans << endl;
    goto up_here;
}