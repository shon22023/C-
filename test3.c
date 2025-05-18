#include <stdio.h>

int main() {
    // 配列の宣言と初期化
    int arrayA[3] = {10, 20, 30};
    int arrayB[4] = {40, 50, 60, 70};
    
    // 結合後の配列（要素数は3+4=7）
    int combinedArray[7];
    
    // arrayAの要素をcombinedArrayにコピー
    for (int i = 0; i < 3; i++) {
        combinedArray[i] = arrayA[i];
    }
    
    // arrayBの要素をcombinedArrayにコピー
    for (int i = 0; i < 4; i++) {
        combinedArray[i + 3] = arrayB[i];  // arrayAの後ろに追加
    }
    
    // 結合後の配列の要素を表示
    printf("結合後の配列の要素:\n");
    for (int i = 0; i < 7; i++) {
        printf("combinedArray[%d] = %d\n", i, combinedArray[i]);
    }
    
    return 0;
}
#include <stdio.h>

int main() {
    int array[5] = {30, 10, 50, 20, 40};
    int n = 5;

   

    // 結果を表示
    printf("昇順に並べた結果：");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
