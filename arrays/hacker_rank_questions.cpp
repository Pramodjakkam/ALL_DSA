#include <iostream>
#include <vector>
using namespace std;
void insert(int a[], int b[], int n, int pos, int item, int count)
{
    count++;
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = item;
}
void Delete(int a[], int n, int pos, int c)
{
    c++;
    for (int i = pos; i < n; i++)
    {
        a[i] = a[i + 1];
    }
}
void print(int a[], int i, int n)
{
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    int n, i, j, count, c;
    cout << "Enter number of questions:" << ends;
    cin >> n;
    int a[n], b[n];
    if (n < 5 && n > 10)
    {
        cout << "Constrain didn't passed" << endl;
        exit(1);
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout<<"---"<<endl;
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != b[j])
        {
            Delete(a, n, i, c);
            insert(a, b, n, i, b[j], count);
            cout << c << count << endl;
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
    }

    return 0;
}