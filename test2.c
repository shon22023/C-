#include <stdio.h>

int main() {
    // 配列array1の宣言と初期化
    int array1[5] = {10, 20, 30, 50, 50};

    // 比較する数字の変数
    int num1;
    
    // 同じ数字の個数を数える変数
    int count = 0;
    
    // 数字の入力を促す
    printf("数字を入力してください: ");
    scanf("%d", &num1);  // &を追加し、フォーマット指定子を修正
    
    // array1の要素をチェックして同じ数字の個数を数える
    for (int i = 0; i < 5; i++) {
        if (num1 == array1[i]) {  // array2ではなくarray1と比較
            count++;  // 同じ数字が見つかったらカウントを増やす
        }
    }
    
    // 結果を表示
    printf("同じ数字の個数は、%d個あります\n", count);

    return 0;
}