#include<iostream>
#include<cmath>
using namespace std ;

int n = 20 ; 
int a[20] = {3,6,71,1,9,18,22,12,57,14,24,16,19,83,66,35,80,45,33,91} ; 


/*
朴素算法 ：
时间复杂度：O(N^2)
    伪代码：
    1. 假设数组a长度为n( n >= 3) ，设 res = INT32_MAX ; 
    2. 遍历数组a中下标从0到n-2的数，设下标为i 
        a. 遍历数组a中下标从i+1到n-1，设下标为j 
            -> 求 a[i] 和 a[j] 差的绝对值 tmp = abs(a[i]-a[j]) 
            -> 比较tmp和res，如果 res > tmp ，则设 res = tmp 
    3. res就是数组a中相差最小的两个元素的的差 

*/

void search1(int b[], int num) {
    int res = INT32_MAX ; 
    int t1 = 0, t2 = 0, tmp = 0 ; 
    for ( int i = 0 ; i < num - 1 ; i++ ) {
        for ( int j = i + 1 ; j < num ; j++ ) {
            tmp = abs(b[i]-b[j]) ; 
            if ( tmp < res ) {
                t1 = b[i] ; 
                t2 = b[j] ; 
                res = tmp ; 
            } 
        }
    }
    cout << "In search1：" << endl ; 
    cout << "在数组中，" << t1 << " 和 " << t2 <<  " 之间的差最小为: " << res << endl ; 
}

/*
快速算法：
时间复杂度： O(N*logN) 
    伪代码：
    1. 假设数组a长度为n( n >= 3)  
    2. 对数组a进行快速排序，获得升序的数组的a 
    3. 令  t1 = a[0], t2 = a[1], tmp = a[1] - a[0] 
    4. 遍历数组a，设 i, j 为 数组下标，初始化 i = 1, j = 2 
        a. 若 a[j] - a[i] < tmp, 令 t1 = a[i], t2 = a[j], tmp = a[j] - a[i] 
    5. tmp就是数组a中相差最小的两个元素的的差  
*/ 

void quicksort(int b[], int left, int right) {
    if ( left >= right ) 
        return ; 
    int l = left, r = right, tmp = b[left] ; 
    while ( l < r ) {
        while ( l < r && tmp <= b[r] ) 
            r-- ; 
        b[l] = b[r] ; 
        while ( l < r && tmp >= b[l] )
            l++ ; 
        b[r] = b[l] ; 
    }
    b[l] = tmp ; 
    quicksort(b,left,l-1) ; 
    quicksort(b,l+1,right) ; 
}

void search2(int b[], int num) {
    quicksort(b,0,num-1) ; 
    int t1 = b[0], t2 = b[1], tmp = b[1] - b[0] ; 
    for ( int i = 1, j = 2 ; i < num && j < num ; i++, j++ ) {
        if ( b[j] - b[i] < tmp ) {
            tmp = b[j] - b[i] ; 
            t1 = b[i] ;
            t2 = b[j] ; 
        }
    }
    cout << "In search2：" << endl ;  
    cout << "在数组中，" << t1 << " 和 " << t2 <<  " 之间的差最小为: " << tmp << endl ; 
}

int main() {
    search1(a,n) ; 
    search2(a,n) ; 
    return 0 ; 
}