#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int* a = new int[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int x;
    cin >> x;

    int* temp = new int[n+1];
    for(int i=0;i<n;i++) temp[i] = a[i];
    temp[n] = x;

    delete[] a;
    a = temp;
    n++;

    for(int i=0;i<n;i++) cout << a[i] << " ";
}

