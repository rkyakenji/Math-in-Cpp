#include <iostream>
using namespace std;
void fatorial(int n1);


int main(){
    int a;
    cout << "\n Digite um número para ser calculado o fatorial \n";
    cin  >> a;



    fatorial(a);


    return 0;
}

void fatorial(int n1){
    int res=1;
    for (int i=n1;i>0;i--){
        res = res*i;
    }
    cout << "\nO valor fatorial do número calculado é: " << res << endl;
}
