#include <stdio.h>
#include <iostream>
using namespace std;

int MyFun1(int a, int b);

int main(){
    cout << "Hello World 4 !" << endl;

    for (int i=0; i<10; i++){
        int c = MyFun1(i,i);
        printf("Count: %d: %d\n",i, c);
    }
    printf("Hello World 5\n");

    return 0;
}


int MyFun1(int a, int b){
    return a+b;
}
