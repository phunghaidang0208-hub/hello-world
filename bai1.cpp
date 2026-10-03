#include <iostream>
using namespace std;

int main (){
    float a,b;
    float x;
    cout << "nhap lam luot a, b cua phuong trinh ax+b=0: ";  cin >> a >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "phuong trinh co vo so nghiem" << endl;
        }
        else {
            cout << "phuong trinh vo nghiem" << endl;
        }
    }
    else {
        cout << "phuong trinh co nghiem duy nhat x=" << -b/a << endl;
        
    }

}