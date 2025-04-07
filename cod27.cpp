int main()

{

float a[100];

int n;

cout << "n = ";

cin >> n;

float s 0;

for (int i=0; i<n; ++i)

{

cout << "a[" << i << "] = ";

cin >> a[i];

s += a[i]; // adding the value of the array element to the sum

}

cout << "s = " << s << endl;

return 0;

}
