//Display the sum of all positive numbers of an array using a copy constructor

#include<iostream>
using namespace std;

class ArraySum {
    int *arr, size, sum;
public:
    ArraySum(int a[], int s) {
        size = s;
        arr = new int[size];
        sum = 0;
        for (int i = 0; i < size; i++) {
            arr[i] = a[i];
            if (arr[i] > 0)
                sum += arr[i];
        }
    }

    ArraySum(const ArraySum &obj) { 
        size = obj.size;
        arr = new int[size];
        sum = obj.sum;
    }

    void displaySum() {
        cout << "Sum of all positive numbers: " << sum << endl;
    }

    ~ArraySum() { delete[] arr; }
};

int main() {
    int arr[] = {1, -2, 3, 4, -5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    ArraySum obj(arr, size);
    ArraySum objCopy = obj; 
    objCopy.displaySum();
    return 0;
}
