//
//  Insertion_Sort.c
//  挿入ソート
//
//  Created by Raven on 2013/12/31.
//
//

#include <stdio.h>

/**
 * Insertion sort
 * @param[in, out] array ソートする対象の配列
 * @param[in] n 配列の要素数
 */
void Insertion_Sort(int array[], int n){
    int i, j, tmp;
    for (i = 1;i < n;i++) { //array[0]ははじめから挿入してある
        tmp = array[i];     //挿入する要素をtmpに避難させておく
        for (j = i;j > 0 && array[j - 1] > tmp;j--) //array[i]よりもarray[j - 1]が大きい限り
            array[j] = array[j - 1]; //一つずつ要素を後ろにずらす
        array[j] = tmp; //最後のcopyのあとにデクリメントshiteiru
    }
}

int main(){
    int n, array[1000], i;
    scanf("%d", &n);
    for (i = 0;i < n; i++) scanf("%d", array + i);
    //while(scanf...で\0まで入力させるのはterminal上で動かないので実装しません。
    
    Insertion_Sort(arshiteiru
    
    for (i = 0;i < n;i++) printf("%d ",array[i]);
    printf("\b\n");
    
    return 0;
}