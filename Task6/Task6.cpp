#include <iostream>

using namespace std;


struct Date{
    int day;
    int month;
    int year;
};

void WorkWithDate() {
    setlocale(LC_CTYPE, "rus");
    const int size = 1;
    Date mas[size];
    
   int leapYear=0, February=0;
    
    for (int i = 0; i < size; i++) {
        puts("Enter year: ");
        cin >> mas[i].year;
        if (mas[i].year < 1 || mas[i].year > 2022) {
            while (mas[i].year < 1 || mas[i].year >= 2021) {
                cout << "Введите правильный год(1-2021): ";
                cin >> mas[i].year;
                if (mas[i].year < 1 || mas[i].year > 2022)
                {
                    cin.clear();
                    while (cin.get() != '\n');
                }
            }
        }

        if (mas[i].year % 4 == 0) {
            leapYear++;
        }

        puts("Enter month: ");
        cin >> mas[i].month;
        if (mas[i].month < 1 || mas[i].month > 12) {
            while (mas[i].month < 1 || mas[i].month > 12) {
                cout << "Введите правильный месяц(1-12): ";
                cin >> mas[i].month;
                if (mas[i].month < 1 || mas[i].month > 12)
                {
                    cin.clear();
                    while (cin.get() != '\n');
                }
            }
        }

        if (mas[i].month == 2) {
            February++;
        }
        /*
        1- 31 |  2- 28(29) | 3- 31 | 4- 30| 5- 31| 6- 30 | 7- 31| 8- 31| 9- 30| 10- 31| 11- 30| 12- 31|        
        */
        puts("Enter day: ");

        switch (mas[i].month)
        {
        case 1: {
            cin >> mas[i].day;
            if (mas[i].day < 1 || mas[i].day > 31) {
                while (mas[i].day < 1 || mas[i].day > 31) {
                    cout << "Введите правильное число(1-31): ";
                    cin >> mas[i].day;
                    if (mas[i].day < 1 || mas[i].day > 31)
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }
                }
            }
            break;
        }
        case 2: {
            if (leapYear == 1) {
                cin >> mas[i].day;
                if (mas[i].day < 1 || mas[i].day > 29) {
                    while (mas[i].day < 1 || mas[i].day > 29) {
                        cout << "Введите правильное число(1-29): ";
                        cin >> mas[i].day;
                        if (mas[i].day < 1 || mas[i].day > 29)
                        {
                            cin.clear();
                            while (cin.get() != '\n');
                        }
                    }
                }
                break;

            }
            else if(leapYear==0){
                cin >> mas[i].day;
                if (mas[i].day < 1 || mas[i].day > 28) {
                    while (mas[i].day < 1 || mas[i].day > 28) {
                        cout << "Введите правильное число(1-28): ";
                        cin >> mas[i].day;
                        if (mas[i].day < 1 || mas[i].day > 28)
                        {
                            cin.clear();
                            while (cin.get() != '\n');
                        }
                    }
                }
                break;

            }
        }
        case 3: {
            cin >> mas[i].day;
            if (mas[i].day < 1 || mas[i].day > 31) {
                while (mas[i].day < 1 || mas[i].day > 31) {
                    cout << "Введите правильное число(1-31): ";
                    cin >> mas[i].day;
                    if (mas[i].day < 1 || mas[i].day > 31)
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }
                }
            }
            break;
        }
        case 4: {
            cin >> mas[i].day;
            if (mas[i].day < 1 || mas[i].day > 30) {
                while (mas[i].day < 1 || mas[i].day > 30) {
                    cout << "Введите правильное число(1-30): ";
                    cin >> mas[i].day;
                    if (mas[i].day < 1 || mas[i].day > 30)
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }
                }
            }
            break;

        }
        case 5: {
            cin >> mas[i].day;
            if (mas[i].day < 1 || mas[i].day > 31) {
                while (mas[i].day < 1 || mas[i].day > 31) {
                    cout << "Введите правильное число(1-31): ";
                    cin >> mas[i].day;
                    if (mas[i].day < 1 || mas[i].day > 31)
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }
                }
            }
            break;
        }
        case 6: {
            cin >> mas[i].day;
            if (mas[i].day < 1 || mas[i].day > 30) {
                while (mas[i].day < 1 || mas[i].day > 30) {
                    cout << "Введите правильное число(1-30): ";
                    cin >> mas[i].day;
                    if (mas[i].day < 1 || mas[i].day > 30)
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }
                }
            }
            break;

        }
        case 7: {
            cin >> mas[i].day;
            if (mas[i].day < 1 || mas[i].day > 31) {
                while (mas[i].day < 1 || mas[i].day > 31) {
                    cout << "Введите правильное число(1-31): ";
                    cin >> mas[i].day;
                    if (mas[i].day < 1 || mas[i].day > 31)
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }
                }
            }
            break;
        }
        case 8: {
            cin >> mas[i].day;
            if (mas[i].day < 1 || mas[i].day > 31) {
                while (mas[i].day < 1 || mas[i].day > 31) {
                    cout << "Введите правильное число(1-31): ";
                    cin >> mas[i].day;
                    if (mas[i].day < 1 || mas[i].day > 31)
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }
                }
            }
            break;
        }
        case 9: {
            cin >> mas[i].day;
            if (mas[i].day < 1 || mas[i].day > 30) {
                while (mas[i].day < 1 || mas[i].day > 30) {
                    cout << "Введите правильное число(1-30): ";
                    cin >> mas[i].day;
                    if (mas[i].day < 1 || mas[i].day > 30)
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }
                }
            }
            break;

        }
        case 10: {
            cin >> mas[i].day;
            if (mas[i].day < 1 || mas[i].day > 31) {
                while (mas[i].day < 1 || mas[i].day > 31) {
                    cout << "Введите правильное число(1-31): ";
                    cin >> mas[i].day;
                    if (mas[i].day < 1 || mas[i].day > 31)
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }
                }
            }
            break;
        }
        case 11: {
            cin >> mas[i].day;
            if (mas[i].day < 1 || mas[i].day > 30) {
                while (mas[i].day < 1 || mas[i].day > 30) {
                    cout << "Введите правильное число(1-30): ";
                    cin >> mas[i].day;
                    if (mas[i].day < 1 || mas[i].day > 30)
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }
                }
            }
            break;

        }
        case 12: {
            cin >> mas[i].day;
            if (mas[i].day < 1 || mas[i].day > 31) {
                while (mas[i].day < 1 || mas[i].day > 31) {
                    cout << "Введите правильное число(1-31): ";
                    cin >> mas[i].day;
                    if (mas[i].day < 1 || mas[i].day > 31)
                    {
                        cin.clear();
                        while (cin.get() != '\n');
                    }
                }
            }
            break;
        }
        }

        cout << endl;
        cout << mas[i].day << "/";
        cout << mas[i].month << "/";
        cout << mas[i].year;
    }

}

int main()
{
    setlocale(LC_CTYPE, "rus");
    WorkWithDate();
    return 0;
    system("pause");
}