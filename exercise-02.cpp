/*
Author   : Shalvina Zahwa Aulia
NPM      : 140810180052
Deskripsi: Program reverse word dengan menggunakan stack linked list
Tahun    : 2019
*/
#include<iostream>
#include<windows.h>
using namespace std;

struct elemtStack {
    char info;
    elemtStack* next;
};

typedef elemtStack* pointer;
typedef pointer Stack;

void createStack(Stack& top){
    top = NULL;
}
void createElemt (pointer& newP){
    newP = new elemtStack;
    cout << "Masukkan huruf : "; cin >> newP->info;
    newP->next=NULL;
}
void push(Stack& top, pointer& newP){
    if (top == NULL){
        top = newP;
    }
    else {
        newP->next = top;
        top = newP;
    }
}
void pop(Stack& top, pointer& pDel){
    if (top==NULL){
        cout << "\nKOSONG\n";
        pDel = NULL;
    }
    else if (top->next == NULL){
        pDel = top;
        top = NULL;
    }
    else {
        pDel = top;
        top = top->next;
        pDel->next = NULL;
    }
}
void display(Stack top){
    pointer pBantu;
    pBantu = top;
    while (pBantu!=NULL){
        cout << pBantu->info;
        pBantu = pBantu->next;
    }
}
main (){
    Stack top,top2;
    int menu,n,jumlah;
    char pilih, nE,eHsl;
    pointer p,pB,pD;
do {
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Display\n";
    cout << "4. Exit program\n";
    cout << "Pilih menu (1/2/3/4) : "; cin >> menu;
    system("pause");
    system("cls");
    switch (menu){
    case 1 :
        cout << "Input jumlah stack = "; cin >> n;
        createStack(top);
        for (int i=0;i<n;i++){
            createElemt(p);
            push(top,p);
        }
        cout << endl;
        system("pause");
        system("cls");
        break;
    case 2 :
        pop(top,p);
        break;
    case 3 :
        display(top);
        break;
    case 4 :
        exit(0);
    }
    cout << "\nApakah Anda ingin mengulang progam (y/n)? "; cin >> pilih;
    system("pause");
    system("cls");
}while(pilih == 'Y' || pilih == 'y');
}
