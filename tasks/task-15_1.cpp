#include <iostream>
#include <ctime>

using namespace std;


int** create_matrix(int rows, int cols) 
{
    int** mas = new int* [rows];
    for (int r = 0; r < rows; r++)
        mas[r] = new int[cols] {0};
    return mas;
}

void set_matrix(int** arr, int n, int m, int a = 10, int b = 99)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = a + rand() % (b - a + 1);
        }
    }
}
void print_matrix(int** arr, int n, int m) //
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
void sorting_matrix(int** arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int index = j;
            int minElement = arr[i][j];
            for (int p = j; p < m; p++)
            {
                if (minElement > arr[i][p])
                {
                    index = p;
                    minElement = arr[i][p];
                }
            }
            swap(arr[i][j], arr[i][index]);
        }
    }
}
int min_matrix(int** arr, int n)
{
    int min = arr[0][0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i][i]) min = arr[i][i];
    }
    return min;
}
int max_matrix(int** arr, int n)
{
    int max = arr[0][0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i][i]) max = arr[i][i];
    }
    return max;
}


int main()
{
    setlocale(LC_ALL, "ru");

    int n = 4, m = n;
    int** arr = create_matrix(n, m);
    srand(time(nullptr));
    set_matrix(arr, n, m);
    cout << "Инициализация квадратной матрицы:" << endl;
    print_matrix(arr, n, m);
    sorting_matrix(arr, n, m);
    cout << "Сортировка элементов по возрастанию:" << endl;
    print_matrix(arr, n, m);
    cout << "Минимальный элемент: " << min_matrix(arr, n) << endl;
    cout << "Максимальный элемент: " << max_matrix(arr, n) << endl;

}