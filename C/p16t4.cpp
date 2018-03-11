#include<iostream>
using namespace std ; 

int n = 20 ; 
int a[20] = {3,6,71,1,9,18,22,12,57,14,24,16,19,83,66,35,80,45,33,91} ; 

/*
    伪代码：
    1. 假设数组a长度为n，切数组a中至少有3个元素的值互不相等，设 minn = INT32_MAX, maxx = INT32_MIN。
    2  遍历数组a下标从0到n-1的数，设下标为i 
        a. 若 minn > a[i], 则令 minn = a[i] 
        b. 若 maxx < a[i], 则令 maxx = a[i] 
    3. 遍历数组a下标从0到n-1的数，设下标为i 
        a. 若 a[i] != minn 并且 a[i] != maxx，则当前 a[i] 就是一个既不是最大值，也不是最小值的数，输出 a[i]，退出循环 

    分析 （最坏情况）：
    1. 寻找最大值和最小值： 比较 （2*n） 次 
    2. 寻找不是最大也不是最小的元素，最坏情况是，前 (n-1) 都等于最大值或等于最小值，就需要比较 n 次
    所以： 最坏情况下比较 (3*n) 次 
*/

void find(int b[], int num) {
    int maxx = INT32_MIN, minn = INT32_MAX ; 
    for ( int i = 0 ; i < num ; i++ ) {
        if ( maxx < b[i] ) {
            maxx = b[i] ; 
        } 
        if ( minn > b[i] ) {
            minn  = b[i] ;   
        }
    } 
    cout << "最大值：" << maxx << "    最小值：" << minn << endl ;    
    for ( int i = 0 ; i < num ; i++ ) {
        if (  b[i] != minn && b[i] != maxx ) {
            cout << "一个既不是最大值也不是最小值的元素：" <<  b[i] << endl ; 
            break ; 
        }
    }
}

int main() {
    find(a,n) ; 
    return 0 ; 
}