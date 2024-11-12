#include <iostream>
using namespace std;

int main() {
    int n=5;

    int a[n]={42,35,26,29,11};

    cout << "before insertion sort: ";
    for (int i = 0; i < n; i++) {
        cout<< a[i]<<",";
    }

    for (int i = 1; i < n; i++) {
        int temp = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    cout<<endl;

    cout << "after incertion Sort: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << ",";
    }


}
