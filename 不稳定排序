void quick_sort(int *data, int left, int right) {
    if(left > right) return ;
    int low = left, high = right, prvit = data[left];
        while(low < high) {
            while (low < high && prvit <= data[high]) --high;
            if (low < high) data[low++] = data[high];
            while (low < high && prvit >= data[low]) ++low;
            if (low < high) data[high--] = data[low];
        }
    data[low] = prvit;
    quick_sort(data, left, low - 1);
    quick_sort(data, low + 1, right);
    return;
}

void select_sort(int *data, int length) {
    int index;
    for (int i = 0; i < length - 1; i++) {
        index = i;
        for (int j = i + 1; j < length; j++) {
            if(data[j] < data[index]) {
                index = j;
            }
        }
        if(index != i) {
            swap(&data[index], &data[i]);
            printf("%d %d\n", i, index);
        }
    }
    return;
}
