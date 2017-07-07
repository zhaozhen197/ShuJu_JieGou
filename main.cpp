#include <iostream>
#include <cstdlib>
#include <ctime>

#define MaxSize 50
typedef struct List {
    int data[MaxSize];
    int length;
}seqList;
using namespace std;
//方法定义
void initList(seqList& L);
void printList(seqList& L);

int main() {
    seqList L;
    initList(L);
    printList(L);

    return 0;
}

//初始化线性表
void initList(seqList& L){
    srand((unsigned)time(NULL));//为rand()函数生成不同的随机种子
    L.length=10;
    for (int i = 0; i < L.length; ++i) {
        L.data[i]=rand()%100;
    }
}

void printList(seqList& L){
    for (int i = 0; i < L.length; ++i) {
        cout<<L.data[i]<<",";
    }
}