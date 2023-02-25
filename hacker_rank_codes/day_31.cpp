// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//   int n;
//     cin>>n;
//     if(n<1){
//         cout<<"Empty Box";
//         return 0;
//     }
//     if(n>6){
//         cout<<"Full Box";
//         return 0;
//     }
//     string arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     int x=0;
//     for(int i=n-1;i>=0;i--){
//         if(x==1)
//             cout<<"->";
//         cout<<arr[i];
//         x=1;
//     }
//     return 0;
// }
//  question 2 from hacker day31
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string a;
    getline(cin,a);
    int l=a.length();
   if(l>24 || l<1)
        return 0;
    int b=0;
    for(int i=0;i<l;i++)
    {
        if(b==1)
            cout<<a[i];
        if(a[i]==',')
            b=1;
    }
    return 0;
}