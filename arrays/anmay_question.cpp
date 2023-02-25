// Insert lower case characters just after only upper case characters of the same alphanumeric symbol.
// The size of aay(N) should be greater than 0 and less than equal to 20.
// If the size of aay is not in the mention range then program should display “Invalid size of aay”.
// And if no upper case character is present then display same aay.
#include <iostream>
using namespace std;
// int insert(char insert, int n, char a[])
// {
//     int p;
//     p = int(insert);
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]>65 || a[i]<90)
//         {
//             a[i+1]=insert;
//             return 0;
//         }
//     }
// }
void insert(char k, int n, char a[], int i)
{
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >='A' && a[i] <='Z')
        {
            pos = i + 1;
            break;
        }
    }
    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = k;
}
void display(int n, char a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{
    int n, i;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    char a[n], k;
    if (n < 0 || n > 20)
    {
        cout << "Invalid size of array" << endl;
        exit(1);
    }
    cout << "Enter the alphabets of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the character you want to insert : " << ends;
    cin >> k;
    insert(k, n, a, i);
    display(n+1, a);
}
