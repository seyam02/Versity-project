#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int* a = new int[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int pos, x;
    cin >> pos >> x;

    if(pos >= 0 && pos <= n){
        int* temp = new int[n+1];
        for(int i=0;i<pos;i++) temp[i] = a[i];
        temp[pos] = x;
        for(int i=pos;i<n;i++) temp[i+1] = a[i];
        delete[] a;
        a = temp;
        n++;
    }

    for(int i=0;i<n;i++) cout << a[i] << " ";
}
