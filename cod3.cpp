#include <iostream>

using namespace std;

int main()

{

int x;

cin >> x;

switch (x)

{

case 1:

case 2: case 3:

case 4:

case 5:

cout << "working day";

break;

case 6: case 7: cout << "output"; break

default:

cout << "you are mistaken";

}

return 0;

}