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

    cout << "������ �������� ����� �� ����� � 6 ������:" << endl;
    for (int i = 0; i < months; i++) {
        cout << "�������� �� ����� " << (i + 1) << ": ";
        cin >> profit[i];
        totalProfit += profit[i];
    }

    cout << "��������� �������� ����� �� 6 ������: " << totalProfit << endl;

    return 0;
}