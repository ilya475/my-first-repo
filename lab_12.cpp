

#include <iostream>
using namespace std;
int main()

{
 setlocale(LC_ALL, "RU");
 int n;
 int pr =1;
 int sum = 0;
 cout << "Введите число n\n";
 cin >> n;
 for (int i = 1; i <= n; i++)
 {

	 if (i % 2 == 0) {
		 sum += i;
	 }
	 if (i % 2 != 0) {
		 pr *= i;
	 }
 }
 cout << "Сумма четных чисел промежутка: " << sum<<endl;
 cout << "Произведение нечётных чисел промежутка: " << pr;


	 return 0;
}
