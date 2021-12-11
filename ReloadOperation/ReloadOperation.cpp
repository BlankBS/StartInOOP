#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////
class time24
{
private:
    int hours;                     // 0 to 23
    int minutes;                   // 0 to 59
    int seconds;                   // 0 to 59
public:                           // конструктор без аргументов
    time24() : hours(0), minutes(0), seconds(0)
    {  }
    time24(int h, int m, int s) :  // конструктор с тремя аргументами
        hours(h), minutes(m), seconds(s)
    {  }
    void display() const           // формат 23:15:01
    {
        if (hours < 10)    cout << '0';
        cout << hours << ':';
        if (minutes < 10)  cout << '0';
        cout << minutes << ':';
        if (seconds < 10)  cout << '0';
        cout << seconds;
    }
    int getHrs() const { return hours; }
    int getMins() const { return minutes; }
    int getSecs() const { return seconds; }
};
////////////////////////////////////////////////////////////////
class time12
{
private:
    bool pm;                       // true = pm, false = am
    int hrs;                       // 1 - 12
    int mins;                      // 0 - 59
public:                           // конструктор без аргументов
    time12() : pm(true), hrs(0), mins(0)
    {  }
    time12(time24);                // конструктор с 1 аргументом
                                   // конструктор с тремя аргументами
    time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m)
    {  }
    void display() const
    {
        cout << hrs << ':';
        if (mins < 10)  cout << '0';  // дополнительный нуль для "01"
        cout << mins << ' ';
        string am_pm = pm ? "p.m." : "a.m.";
        cout << am_pm;
    }
};
//--------------------------------------------------------------
time12::time12(time24 t24)           // конструктор с 1 аргументом
{                                 // преобразовать time24 в time12
    int hrs24 = t24.getHrs();         // получить часы
                                      // определение am/pm
    pm = t24.getHrs() < 12 ? false : true;

    mins = (t24.getSecs() < 30) ?     // округление секунд
        t24.getMins() : t24.getMins() + 1;
    if (mins == 60)                    // переносим минуты?
    {
        mins = 0;
        ++hrs24;
        if (hrs24 == 12 || hrs24 == 24)        // переносим часы?
            pm = (pm == true) ? false : true;  // переключатель am/pm
    }
    hrs = (hrs24 < 13) ? hrs24 : hrs24 - 12; // преобразуем часы
    if (hrs == 0)                             // 00 это 12 a.m.
    {
        hrs = 12; pm = false;
    }
}
////////////////////////////////////////////////////////////////
int main()
{
    int h, m, s;

    while (true)
    {         // получение времени в 24-ом формате от пользователя
        cout << "Введите время в 24-часовом формате: \n";
        cout << "  Часы (от 0 до 23): "; cin >> h;
        if (h > 23)                // выход, если часов > 23
            return (1);
        cout << "  Минуты: "; cin >> m;
        cout << "  Секунды: "; cin >> s;

        time24 t24(h, m, s);
        cout << "\nВ 12-часовом формате: ";
        t12.display();         // вывести на экран время в 12-часовом формате
        cout << "\n\n";
    }
    return 0;
}
