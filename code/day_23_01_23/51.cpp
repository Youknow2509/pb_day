#include <bits/stdc++.h>

using namespace std;

void swap(int *a1, int *a2){
    int temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

int partition(int* arr, int start, int end){
    int pivot = arr[end],
        temp = start;
    for (int i = start; i < end; i++){
        if (arr[i] < pivot){
            swap(&arr[i], &arr[temp]);
            temp++;
        }
    }
    swap(&arr[end], &arr[temp]);
    return temp;
}

void quick_sort(int* arr, int start, int end){
    if (start < end){
        int pi = partition(arr, start, end);
        quick_sort(arr, start, pi - 1);
        quick_sort(arr, pi + 1, end);
    }
}

void print(int arr[], int size_arr){
    for (int i = 0; i < size_arr; i++) cout << arr[i] << " ";
    cout << endl;
}
int main(){
    // input
    int size_arr;
    cin >> size_arr;
    int arr1[size_arr];
    for (int i = 0; i < size_arr; i++){
        cin >> arr1[i];
    }
    // tạo dãy mới ko có phần tử k và sắp xếp
    int arr2[size_arr], size_arr2 = 0;
    for (int i = 0; i < size_arr; i++){
        if (arr1[i] != 0){
            arr2[size_arr2] = arr1[i];
            size_arr2++;
        }
    }
    quick_sort(arr2, 0, size_arr2 - 1);
    // Chỉnh sửa thứ tự các phần tử theo yêu cầu đề bài.
    // Các số nguyên dương xuất hiện theo giá trị tăng dần.
    // Các số nguyên âm xuất hiện theo giá trị giảm dần.
    // Vị trí phần tử "0" không đổi.
    int temp1 = size_arr2 - 1;
    for (int i = size_arr - 1; i >= 0; i--){
        if (arr1[i] > 0){
            arr1[i] = arr2[temp1];
            temp1--;
        }
    }
    for (int i = 0; i < size_arr; i++){
        if (arr1[i] < 0){
            arr1[i] = arr2[temp1];
            temp1--;
        }
    }
    print(arr1, size_arr);
    return 0;
}