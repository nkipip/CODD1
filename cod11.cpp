#include <iostream>

using namespace std;

int main()

{

for (int i = 1; i < 100; ++i) // пееребеваем все числа от 1 до 99

{

if (i % 2) // если чесло нечетное,

// затем переходим к следушей итерации

continue;

cout << i << "\t"; // выводим число на экран

} return 0;

}
