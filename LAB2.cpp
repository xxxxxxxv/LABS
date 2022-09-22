#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 setlocale(LC_ALL, "");
 int g;
 
 cout << "Выберите задачу ";
 cin >> g;
 
 if (g == 1)
 {
  cout << "Выбрана первая задача" << endl;

  double x1, p, y, a, b;

  cout << "Введите a = ";
  cin >> a;

  x1 = 1.4;
  p = 1.6;

  if ((b >= 0) && (p > 0))
  {
   y = pow(sin(a * x1), 3) + sqrt(b) * cos(pow(x1, 2));
   a = log(abs(x1));
   b = pow(x1, 4) + log10(pow(p, 3));

   cout << "Ответ y = ";
   cout << y << endl;
   cout << "Ответ a = ";
   cout << a << endl;
   cout << "Ответ b = ";
   cout << b << endl;
  }
  else
   cout << "Не соблюдено ОДЗ";
 }
 
 if (g == 2)
 {
  cout << "Выбрана вторая задача" << endl;

  double y, x;

  cout << "Введите x = ";
  cin >> x;
  cout << "Введите y = ";
  cin >> y;

  if ((x <= 2) && (y <= 2) && (x >= (-2)) && (y >= 0) && ((x + y) >= 2) && ((y - x) >= 2))
   cout << "Точка принадлежит области";

  else
   cout << "Точка не принадлежит области";
 }
 
 if ((g!=1) && (g!=2))
  cout << "Такой задачи не существует";
}
