#include <iostream>

using namespace std;
int main() {
    int a[6] = {5,2,4,6,1,3};
    int key, i=1, j=0;
    while (i<6) {
        j=i-1;
        key = a[i];
        while (j>=0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        } 
        a[j+1] = key;
        i++;
    }
    for(i=0; i<6; i++) {
        cout << a[i] << endl;
    }
    return 0;
}