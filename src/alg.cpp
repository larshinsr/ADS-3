// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left = 0;
    int right = size - 1;
    int middle = 0;
    int count = 1;
    while (left < right) {
        middle = (left + right) / 2;
        if (arr[middle] < value) {
            left = middle + 1;
        }
        if (arr[middle] > value) {
            right = middle;
        }
        if (arr[middle] == value) {
            int rightside = middle + 1;
            while ((rightside <= right) && (arr[rightside] == value)) {
                rightside += 1;
                count += 1;
            }

            int leftside = middle - 1;
            while ((leftside >= 0) && (arr[leftside] == value)) {
                leftside += 1;
                count +=1;
            }
            return count;
        }
    }
  return 0; // если ничего не найдено
}
