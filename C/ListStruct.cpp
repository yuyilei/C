#include<cstdio>
#include<iostream>
using namespace std ;

const int LIST_INIT_SIZE=100 ;
const int LISTINCREMENT=10 ;

typedef struct {
    int *elem , length , listsize , incrementsize ;
} LIST ;


// 初始化线性表
void InitList(LIST &L , int size=LIST_INIT_SIZE, int increase=LISTINCREMENT) {
    L.elem = new int [size] ;  //  初始化指针
    L.length = 0 ;
    L.listsize = size ;
    L.incrementsize = increase ;
}

// 销毁线性表
void DestroyList(LIST &L) {
    delete [] L.elem ;
    L.length = 0 ;
    L.listsize = 0 ;
}

// 重置为空表
void ClearList(LIST &L) {
    DestroyList(L) ;
    InitList(L) ;
}

// 判断线性表是否为空
bool ListEmpty(LIST L) {
    if ( L.length == 0 )
        return false ;
    return true ;
}

// 计算线性表的长度
int ListLength(LIST L) {
    return L.length ;
}

// 获取某个元素（通过下标）
void GetElem(LIST L ,int i , int &e ) {
    e = L.elem[i] ;
}

// 查找元素
int LocateElem(LIST L, int e){
    for ( int i = 0 ; i < L.length ; i++ )
        if ( L.elem[i] == e )
            return i ;
    return 0 ;
}

// 查找前驱
void PriorElem(LIST L, int cur_e , int &pre_e) {
    for ( int i = 1 ; i < L.length ; i++ ) {
        if ( L.elem[i] == cur_e ) {
            pre_e = L.elem[i-1] ;
            return ;
        }
    }
}

// 查找后继
void NextElem(LIST L, int cur_e , int &next_e) {
    for ( int i = 0 ; i < L.length - 1 ; i++ ){
        if ( L.elem[i] == cur_e ) {
            next_e = L.elem[i+1] ;
            return  ;
        }
    }
}

// 插入元素
void InsertElem(LIST &L ,int index , int e ) {
    for ( int i = 0 ; i != index - 1 ; i-- ){
        L.elem[i+1] = L.elem[i] ;
     //   cout << L.elem[i+1] << endl ;
    }
    L.elem[index-1] = e ;
    L.length += 1 ;
}

// 删除元素
void DeleteElem(LIST &L ,int index , int &e ) {
    e = L.elem[index-1] ;
    for ( int i = index - 1 ; i < L.length - 1 ; i++ ) {
        L.elem[i] = L.elem[i+1] ;
    }
    L.length -= 1 ;
}

// 依次输出每个元素的值
void ListTraverse(LIST L) {
    for ( int i = 0 ; i < L.length ; i++ )
        cout << L.elem[i] << " " ;
    cout << endl ;
}

// 主函数
int main() {
    LIST L ;
    InitList(L) ;
    cout << ListEmpty(L) << endl ;
    for ( int i = 0 ; i < 10 ; i++ ) {
        InsertElem(L,i+1,i) ;
    }
    for ( int i = 0 ; i < 10 ; i++ ) {
        cout << L.elem[i] << endl ;
    }
}
