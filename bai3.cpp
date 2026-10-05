#include <iostream> 

using namespace std;

int main(){
    int n;
    cout<< "nhap so n cho tong s = 1+2+...n, n="; cin >> n;
    int i=1, s=0;
    while (i<=n){
        s+=i;
        i++;
    }
    cout << "tong s la " << s << endl;
    return 0;
}