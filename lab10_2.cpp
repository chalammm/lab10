#include<iostream>
using namespace std;

int printO (int M,int N){
if(M<=0){
    cout << "Invalid input" << "\n";}
for (int i = 1; i <= M; i++){

    for (int i = 1; i <= N; i++){
        cout << "O";
    }
    if(N<=0){
        cout << "Invalid input";break;}
        cout << "\n";
    }return 0;
}




int main(){

    printO(2,2);
    cout << "\n";

    printO(3,5);
    cout << "\n";

    printO(5,3);
    cout << "\n";

    printO(0,3);
    cout << "\n";

    printO(7,-1);
    cout << "\n";

    return 0;
}
