#include <iostream>
#include<string>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a1, b1, c1, d1 ;
    int x1;
    //string t1;
    /*
    cout << "Введите а1\n";
    cin >> a1;
    cout << "Введите b1\n";
    cin >> b1;
    cout << "Введите c1\n";
    cin >> c1;
    */
    
    //d1 = a1 > b1 ? a1 : b1;
    //d1 = d1 > c1 ? d1 : c1;
    //t1 = x1 >= 18 ? "Совешеннолетный(ая)" : "Несовешеннолетный(ая)";
    //cout <<  t1 << endl;
    cout << "Выберте \n1 - для квадрата"<<endl<< 
"2  -для треугольника\n3 - для ромба "<<endl<<
"4 - для прямоугольника \n";

    cin >> x1;
    
    switch (x1)
    {
    case 1:
        L: cout << "Введите длину и ширину сторон \n"; cin>>a1>> b1;
        if (a1 ==b1)
        {
        cout << "Квадрат == " << a1 * b1<< endl;

        }
        else
        {
            goto L;
        }
        break;
    

    case 4:
            cout << "Введите длину сторон а1\n";
            cin >> a1;
            cout << "Введите ширину сторон b1\n";
            cin >> b1;
        if (a1 != b1)
        {
        cout << " Прямоугольник = " << a1 * b1 << endl;

        }
        else
        {
            cout << "У вас квадрат " << endl;
        }
        break;
    default:
        cout << "Eror\n";
        break;
    }


}
