#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
    
    int number1, square;
    
    cout << "Please entered number 1 = ";
    cin >> number1;
    
    square = number1 * number1;
    
    cout << "Number of squares = " << square;
    
	return 0;
}
