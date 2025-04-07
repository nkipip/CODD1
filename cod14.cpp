#include <iostream>

using namespace std;

int main()

{

int *a new int(50);

cout << "adress \t *a\n";

cout << a << "\t" << *a << endl;

// 1 increases by 1 the value stored at the address of pointer a

(*a)++;

}

cout << a << "\t" << *a << endl;

// 2 the pointer value is changed by sizeof(int)

*(a++);

cout << a << "\t" << a << endl;

// 3 taking into account the priority of operations and ++ analog of line 2

*a++;

cout << a << "\t" << *a << endl;

return 0;
