#include <iostream>
#include <vector>
using namespace std;
void insert()
{
    // cout<<"Insert is called"<<endl;
}
void Delete()
{
    // cout<<"Delete is called"
}

int main()
{
    int n, i, count=0;
    cout << "Enter number of questions:" << ends;
    cin >> n;
    int a[n], b[n];
    if (n < 5 || n > 10)
    {
        cout << "Invalid input" << endl;
        exit(1);
    }
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "---" << endl;
        for (i = 0; i < n;i++)
        {
            cin >> b[i];
        }
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout<<endl;
        for (i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                // cout<<"Correct is called"
            }
            else
            {
                Delete();
                insert();
                count++;
            }
        
        }
     cout << count << " " << count;

    return 0;
}
// #include <iostream>
// #include <vector>
// using namespace std;

// void Delete()
// {
//     // cout << "delete is called" << endl;
// }

// void insert()
// {
//     // cout << "insert is called" << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     if (n < 5 || n > 10)
//     {
//         cout << "Invalid Value" << endl;
//         exit(EXIT_SUCCESS);
//     }

//     int count = 0;
//     int ans[n];

//     // Answers attempted by rohan
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ans[i];
//     }

//     // Input of the correct answers
//     int correct[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> correct[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;

//     for (int i = 0; i < n; i++)
//     {
//         if (ans[i] == correct[i])
//         {
//             // cout << "Correct is called" << endl;
//         }
//         else
//         {
//             Delete();
//             insert();
//             count++;
//         }
//     }

//     cout << count << " " << count << endl;

//     return 0;
// }