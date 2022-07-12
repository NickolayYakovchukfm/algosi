#include <iostream>
#include <algorithm>

/* ReadArr
   Read array with current size
    arr    - array
    size   - size of array
    return - filled array
*/
void ReadArr(int* arr, int size);

/* BubbleSort
   Sorts elements of array in ascending order
    arr        - array
    size       - size of array
    return     - array in ascending order
    complexity = o(n^2)
*/
void BubbleSort(int* arr, int size);

int main() {
    int n = 0;

    std::cin >> n;

    int* arr = new int[n]();

    ReadArr(arr, n);
    BubbleSort(arr, n);

    int playerSum   = 0,
        opponentSum = 0;

    for (int i = 0; i < n/2; ++i)
        playerSum += arr[i];

    for (int i = n/2; i < n; ++i)
        opponentSum += arr[i];

    int totalWin = 0;

    totalWin = opponentSum - playerSum;

    std::cout << totalWin << std::endl;

    delete[] arr;
    return 0;
}

void ReadArr(int* arr, int size) {
    for (int i = 0; i < size; ++i)
        std::cin >> arr[i];
}

void BubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1; ++j){
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j+1]);
        }
    }
}