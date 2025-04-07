#include <iostream>

using namespace std;

int main()

{

float a [20];

int n, k = 0;

cout << "n = ";

cin >> n;

for (int i=0; i < n; ++i)

{

cout << "a[" << i << "] = ";

cin >> a[i];

} for (int i=0; i<n-1; ++i)

if (a[i] == a[i + 1]) // if adjacent elements are equal, ++k; // then the number of required pairs is increased by 1

cout << "k = << < << endl;

return 0;

}
