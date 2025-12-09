#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int* a = new int[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int pos;
    cin >> pos;

    if(pos >= 0 && pos < n){
        int* temp = new int[n-1];
        for(int i=0,j=0;i<n;i++){
            if(i != pos) temp[j++] = a[i];
        }
        delete[] a;
        a = temp;
        n--;
    }

    for(int i=0;i<n;i++) cout << a[i] << " ";
}
