#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int x;
    
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    cout << "Element " << x << " occurs " << count << " times";

    delete[] arr;

    return 0;
}
