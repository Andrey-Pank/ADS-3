// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int j = size - 1;
    int mid = j/2;
    int cnt = 0;
    if (value == arr[mid]) {
        if (arr[mid] == arr[mid-1]) {
            for (int i = mid; i > 0; i--) {
                if (arr[i] == value) {
                    cnt += 1;
                } else {
                    break;
                }
            }
        }
        if (arr[mid] == arr[mid+1]) {
            int i = mid;
            if (0 != cnt) {
                i += 1;
            }
            for (; i < j; i++) {
                if (arr[i] == value) {
                    cnt += 1;
                } else {
                    break;
                }
            }
        }
    } else if (value < arr[mid]) {
        for (int i = mid; i > 0; i--) {
            if (arr[i] == value) {
                cnt += 1;
            }
            if (arr[i] == value && arr[i-1] != value) {
                break;
            }
        }
    } else if (value > arr[mid]) {
        for (int i = mid; i < j; i++) {
            if (arr[i] == value) {
                cnt += 1;
            }
            if (arr[i] == value && arr[i+1] != value) {
                break;
            }
        }
    }
    return cnt;
}
