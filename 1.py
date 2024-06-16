include <iostream>
int main() {
    int n;
    std::cin >> n;

    // Allocate memory dynamically for the 2D array
    int** arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n];
    }

    // Read elements of the array
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }

    int aboveDiagonalSum = 0, diagonalSum = 0;

    // Calculate the sum of elements above the side diagonal and on the side diagonal
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            aboveDiagonalSum += arr[i][j];
        }
        diagonalSum += arr[i][i];
    }

    // Calculate the result
    int result = aboveDiagonalSum - diagonalSum;

    // Find the maximum element in the array
    int maximum = arr[0][0];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] > maximum) {
                maximum = arr[i][j];
            }
        }
    }

    // Output the result
    std::cout << result << " " << maximum << std::endl;

    // Free dynamically allocated memory
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
