#include <iostream>
#include <Windows.h> 


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int months = 6;
    double profit[months];
    double totalProfit = 0;

    cout << "¬вед≥ть прибуток ф≥рми за кожен з 6 м≥с€ц≥в:" << endl;
    for (int i = 0; i < months; i++) {
        cout << "ѕрибуток за м≥с€ць " << (i + 1) << ": ";
        cin >> profit[i];
        totalProfit += profit[i];
    }

    cout << "«агальний прибуток ф≥рми за 6 м≥с€ц≥в: " << totalProfit << endl;

    return 0;
}