int b[10]; /

/array declaration in

// define a pointer to mun int and set

// it to the zero element of the array in

int *p = &b[0];

for (int i = 0; i < 10; i++) // input array elements

{

cout << "b[" << i << "] = ";

// we place the entered value at the address of the pointer p and shift it

// pointer to the next element of the array

cin >> *p++;

}

// re-set the pointer to the zero element of the array in

p = &b[0];

for (int i=0; i < 10; i++)

// output array elements

// display the value stored at the address

// pointer p, and move the pointer to the next element

// array

cout << "b[" << i << "] = << *p++ << endl;
