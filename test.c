#include <stdio.h>

int main() {
    // 配列array1の宣言と初期化
    int array1[5] = {10, 20, 30, 40, 50};
    
    // 配列array2の宣言
    int array2[5];
    
    // array1の要素をarray2にコピー
    for (int i = 0; i < 5; i++) {
        array2[i] = array1[i];
    }
    
    // array2の要素を表示
    printf("array2の要素:\n");
    for (int i = 0; i < 5; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }
    
    return 0;
}