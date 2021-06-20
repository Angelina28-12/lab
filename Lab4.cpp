#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale (LC_ALL, "ru");
    int n, i, j, t, p;
    string num;
    
    cout << ("Введите количество чисел в строке: ");
    cin >> p;
    int count [p] = {0};
    cout << ("Введите последовательность чисел:\n");
        for (i = 0; i < p; i++)
        {
            cin >> num[i];
        }
    cout << ("Выберите способ сортировки: \n1.По возрастанию \n2.По убыванию\n");
    cin >> n;
    
    if (n == 1)
    {
        for (i = 0; i < p - 1; i++)
            for (j = i + 1; j < p; j++)
                if (num[i] > num[j])
                {
                    t = num[i];
                    num[i] = num[j];
                    num[j] = t;
                }
    for (i = 0; i < p; i++)
        {
            cout << num[i];
        }
                
    }
    
    else if (n == 2)
    {
        for (i = 0; i < p - 1; i++)
            for (j = i + 1; j < p; j++)
                if (num[i] < num[j])
                {
                    t = num[j];
                    num[j] = num[i];
                    num[i] = t;
                }
        for (i = 0; i < p; i++)
        {
            cout << num[i];
        }
    }
    return 0;
}
