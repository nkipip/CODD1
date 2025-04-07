#include <iostream>

using namespace std;

int main()

{

for (int i = 1; i < 100; ++i) // iterate over all numbers from 1 to 99

{

if (i % 2) // if the number is odd,

// then we move on to the next iteration

continue;

cout << i << "\t"; // display the number on the screen

} return 0;

}
