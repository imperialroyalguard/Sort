//
//  Selection_Sort.c
//  選択ソート
//
//  Created by Raven on 2014/01/04.
//
//

#include <stdio.h>

/**
 * Selection sort
 * @param[in, out] array ソートする対象の配列
 * @param[in] n 配列の要素数
 */
void Selection_Sort(int array[], int n){
    int i, j, min, tmp;
    for (i = 0;i < n;i++) {
        min = i;
        for (j = i;j < n;j++) {
            if (array[min] > array[j]) min = j;
        }
        tmp = array[min];
        array[min] = array[i];
        array[i] = tmp;
    }
    return;
}

int main(){
    int n, array[1000], i;
    scanf("%d", &n);
    for (i = 0;i < n;i++) scanf("%d", array + i);
    
    Selection_Sort(array, n);
    
    for (i = 0;i < n;i++) printf("%d ", array[i]);
    printf("\b\n");
    
    return 0;
}