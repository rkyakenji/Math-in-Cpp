#include <iostream>
using namespace std;
int fatorial(int n1);


int main(){
    int a;
    cout << "\n Digite um número para ser calculado o fatorial \n";
    cin  >> a;

    cout << "\nO valor fatorial do número calculado é: " << fatorial(a) << endl;




    return 0;
}
    
int fatorial(int n1){
    return n1*fatorial(n1-1);
}
