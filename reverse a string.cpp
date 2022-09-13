#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    string str;
    cout<<"enter string=";
    cin>>str;
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}
