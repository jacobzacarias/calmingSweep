mkdir <calmingSweep>
#include <iostream>

using namespace std;

void quicksort(vector<int>& arr, int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
 
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
 
    if (left < j)
        quicksort(arr, left, j);
    if (i < right)
        quicksort(arr, i, right);
}

int main() {
    vector<int> arr = { 5, 2, 9, 1, 5, 6, 3 };
    
    quicksort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    
    return 0;
}
