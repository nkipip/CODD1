#include <iostream>

using namespace std;

int main()

{

int b = 50;

&b; // 6 pointer a wrote the address of the variable in

int *a

cout << "adress \t *a\t b\n";

cout << a << "\t" << *a << "\t" << b << endl;

b += 10; // 1

cout << a << "\t" << *a << "\t" << b << endl;

*a 100; // 2

cout << a << "\t" << *a << "\t" << b << endl;

return 0;

}
