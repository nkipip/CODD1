#include <iostream>

using namespace std;

int main()

{

float x;

metka: cout << "x = "; // label

cin >> x;

if (x)

cout << "y = " << 1/x << endl;

else

{

cout << "function not defined\n";

goto metka; // transfer control to the mark

}

return 0;

}
