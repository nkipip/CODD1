int **b new int *[4]; //

declared a two-dimensional dynamic array

for (int i=0; i < 2; ++i) b[i] = new int [5];

// entering array elements

for (int i=0; i < 4; ++1)

for (int j=0; j < 5; ++j)

{

cout << "b[" << i << "][" << j << "] = ";

cin >> *(*(b+i)+j); // write the entered value to b[i][j]

}

for (int i=0; i < 4; ++i, cout << endl) // output array elements

for (int j = 0; j < 5; ++j)

// display the value of b[i][j]

cout << "b[" << i << "][" << j << "] = " << *(*(b+i)+j) << "\t";
