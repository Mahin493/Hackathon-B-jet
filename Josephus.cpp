#include <iostream>
using namespace std;

int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k-1) % n + 1;
}

int main()
{
    int a;
    cin>>a;

    for(int i=0;i<a;i++){
    int n, k;
    //cout << "Enter the number of people: ";
    cin >> n >>k;
    //cout << "Enter the value of k: ";
    //cin >> k;
    cout << "Case " <<i+1 <<": "<< josephus(n, k)<<endl;

    }

    return 0;
}



