#include <iostream>
#include <Windows.h> 
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5; 
    int arr[size];      

    cout << "������ " << size << " �������� ������:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "������� " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "����� � ���������� �������:" << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
	return 0;
}