#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "nhap so n="; cin >> n;
    if (n<2){
        cout << "n khong phai la so nguyen to"<< endl;
    }
    int i = 2;
    bool a = true;
    while (i<n){
        if (n%i==0){
            a=false;
            break;
        }
        i++;
    }
    if (a){
        cout << "n la so nguyen to";
    }
    else {
        cout << "n khong phai la so nguyen to";
    }
    return 0;
}
