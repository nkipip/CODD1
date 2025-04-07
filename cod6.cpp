#include <iostream>

using namespace std;

int main()

{

int n, i=1;

cout << "n = ";

cin >>n;

do // отобразить i на зкране и затем увеличить

cout<< i++<< "\t"; // его значение на единицу

while (i<= n); // пока i меньше или равно n

return 0;

}
