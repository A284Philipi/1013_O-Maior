#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a>b){
        if (a>c){
            cout << a << " eh o maior"<<endl;
        }else{
        cout << c << " eh o maior"<<endl;
        }
    }else{
    if (b>c){
        cout << b << " eh o maior" <<endl;
    }else{
    cout << c << " eh o maior" <<endl;
    }
    }
    return 0;
}
