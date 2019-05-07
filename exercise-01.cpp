/*
Author   : Shalvina Zahwa Aulia
NPM      : 140810180052
Deskripsi: Program reverse word dengan menggunakan stack array
Tahun    : 2019
*/
#include<iostream>
#include<windows.h>
using namespace std;

const int maxElmt = 100;

struct Stack {
    char isi[maxElmt];
    int top;
}s;
void createStack(Stack& s){
    s.top = -1;
}
void push(Stack& s, char newElmt){
    if(s.top == maxElmt-1){
        cout << "\nPENUH!\n";
    }
    else {
        s.top = s.top + 1;
        s.isi[s.top]=newElmt;
    }
}
void pop(Stack& s, char& elmtHsl){
    if(s.top<0){
        cout << "\nTUMPUKAN KOSONG\n";
    }
    else {
        elmtHsl = s.isi[s.top];
        s.top=s.top-1;
    }
}
void display(Stack& s){
    if (s.top>0){
        for(int i= s.top; i>=0;i--){
        cout << s.isi[i];
        }
    }
    else {
        cout << "\nKOSONG\n";
    }
}

main (){
    Stack s,S;
    int menu,n;
    char pilih, nE,eHsl;
do {
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Display\n";
    cout << "4. Reverse word\n";
    cout << "5. Exit program\n";
    cout << "Pilih menu (1/2/3/4/5) : "; cin >> menu;
    system("pause");
    system("cls");
    switch (menu){
    case 1 :
        cout << "Input jumlah stack = "; cin >> n;
        createStack(s);
        for (int i=0;i<n;i++){
            cout << "Masukkan huruf : "; cin >> nE;
            push(s,nE);
        }
        cout << endl;
        system("pause");
        system("cls");
        break;
    case 2 :
        pop(s,eHsl);
        break;
    case 3 :
        display(s);
        break;
    case 4 :
        createStack(S);
        for(int i=s.top; i>=0; i--){
            pop(s,nE);
            push(S,nE);
        }
        display(S);
    case 5 :
        exit(0);
    }
    cout << "\nApakah Anda ingin mengulang progam (y/n)? "; cin >> pilih;
    system("pause");
    system("cls");
}while(pilih == 'Y' || pilih == 'y');
}
