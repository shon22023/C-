
#include <stdio.h>

int main() {
    int array[5] = {30, 10, 50, 20, 40};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
    // i回目の並び替え
    for (int j = 0; j < n - 1 - i; j++) {
        // j番目とj+1番目を比べる
        if (array[j] > array[j + 1]) {
            // 順番が逆なら入れ替え
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
    }
}
    // 結果を表示
    printf("昇順に並べた結果：");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
