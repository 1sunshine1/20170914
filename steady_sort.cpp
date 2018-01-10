void merge_sort(int *data, int l, int r) {
    if (l == r) {
        return;
    }
    int mid = (l + r) / 2;
    merge_sort(data, l, mid);
    merge_sort(data, mid + 1, r);
    int temp[r - l + 1];
    int x = l, y = mid + 1, loc = 0;
    while (x <= mid || y <= r) {
        if (x <= mid && (y > r || data[x] <= data[y])) {
            temp[loc] = data[x++];
        } else {
            temp[loc] = data[y++];
        }
        loc++;
    }
    for(int i = l; i <= r; i++) {
        data[i] = temp[i - l];
    }
}
void bubble_sort(int *data, int length) {
    int swapped = 0;
    for (int i = 0; i < length - 1; i++) {
        swapped = 0;
        for (int j = 0; j < length - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                swap(&data[j], &data[j + 1]);
                printf("%d %d\n", j, j + 1);
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}
void insert_sort(int *data, int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i - 1; j >= 0; --j) {
            if (data[j] > data[j + 1]) {
                swap(&data[j], &data[j + 1]);
                printf("%d %d\n", j, j + 1);
                } else {
                    break;
            }
        }
    }
}
