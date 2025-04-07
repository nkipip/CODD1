#include <iostream>

using namespace std;

int main()

{

int a = 50; // integer variable a

int &b= a; // reference to an alternative name for variable a

cout << "a\t b\n";

cout << a << "\t" << b << endl;

a++; // 1

cout << a << "\t" << b << endl;

b++; // 2

cout << a << "\t" << b << endl;

return 0;

}
