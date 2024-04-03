#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введите число: ";
    cin >> n;

    int arr[3][3]; 

    for (int i = 0; i < 3; i++)
    {
        arr[0][i] = n * (1 << i); 
    }

    for (int i = 1; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = arr[i - 1][j] * 2; 
        }
    }

    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}




#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введите число: ";
    cin >> n;

    int arr[3]; 

    for (int i = 0; i < 3; i++)
    {
        arr[i] = n + i; 
    }

    
    for (int i = 0; i < 3; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
