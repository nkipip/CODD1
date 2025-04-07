#include <iostream>

using namespace std;

int main()

{

int *a new int(50);

cout << "adress \t *a\n";

cout << a << "\t" << *a << endl;

// 1 увеличивает на 1 значение, хранящееся по адресу указателя a

(*a)++;

}

cout << a << "\t" << *a << endl;

// 2 значение указателя изменяется на sizeof(int)

*(a++);

cout << a << "\t" << a << endl;

// 3 с учетом приоритета операций и ++ аналог строки 2

*a++;

cout << a << "\t" << *a << endl;

return 0;
