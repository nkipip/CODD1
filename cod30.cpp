include <iostream>

using namespace std;

int main()

{

int a[30];

int n; cout << "n = ";

cin >> n;

for (int i 0; i < n; ++i)

{

}

cout << "a[" << i << "] = ";

cin >> a[i];

// we assume that the zeroth element of the array is the smallest value

int min a[0];

// accordingly its ordinal number is equal to o

int nmin = 0;

/ we iterate over all elements of the array from the first to the last

/

for (int i=1; i < n; ++1)

// if the next element is less than the type value, then

if (a[i] < min)

{

// we store as the new smallest value

// value of the current array element and,

// accordingly, we remember its number

min a[i];

nmin = i;

}

cout << "min" << min << "\t nmin = << nmin << endl;

return 0;

}
