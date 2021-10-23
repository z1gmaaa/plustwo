#include <iostream>

using namespace std;

//function declaration
void print(string name){
    string greet = "hello " + name;
    cout <<greet<<endl;
}

void printNumbers(int n1, int n2){
    cout<<n1<<endl;
    cout<<n2<<endl;
}

int sum(int n1, int n2) {
    int s = n1+n2;
    return s;
}

int main() {
    string name;
    cout<<"Enter name:";
    cin>>name;
    print(name); //function invocation/call
    printNumbers(1,4);
    int res = sum(1,5);
    cout<<"sum = "<<res;
    return 0;
}
