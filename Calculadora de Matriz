/*
    @author:R.Kenji
    Date: 03/02/2023
    Prog: Programa que calcula a multiplicação de duas matrizes. Verifica também se é possível a multiplicação
    entre as duas. Caso não seja, o programa reinicia.


*/

#include<iostream>
using namespace std;
int main(){
    inicio:
    int l1,c1,l2,c2,x,y,soma,k;

    cout << "Digite o número de linhas da primeira matriz: \n";
    cin  >> l1;
    cout << "Digite o número de colunas da primeira matriz: \n";
    cin  >> c1;

    int matriz[l1][c1];

    cout << "Digite os " << l1*c1 << " elementos da matriz: \n";
    //inserir os valores da matriz
    for(x=0; x<l1 ; x++)
    {
        for(y=0 ; y<c1 ; y++)
        {
            cin  >> matriz [x][y];
        }
    }

    //mostrando os valores da primeira matriz escrita
    cout << "A primeira matriz escrita é : \n";
    for(x=0; x<l1 ; x++)
    {
        for(y=0 ; y<c1 ; y++)
        {
            cout << matriz [x][y] << " ";
        }
        cout << "\n";
    }

    cout << "Digite o número de linhas da segunda matriz: \n";
    cin  >> l2;
    cout << "Digite o número de colunas da segunda matriz: \n";
    cin  >> c2;

    if (c1 != l2){
        cout <<  "Multiplicação não permitida !\n";
        cout <<  "Reiniciando programa !\n";
        cout << "\n";
        goto inicio;
    }

    int matriz_2[l2][c2];

    cout << "Digite os " << l2*c2 << " elementos da matriz: \n";
    //inserir os valores da matriz
    for(x=0; x<l2 ; x++)
    {
        for(y=0 ; y<c2 ; y++)
        {
            cin  >> matriz_2[x][y];
        }
    }

    //mostrando os valores da segunda matriz escrita
    cout << "A segunda matriz escrita é : \n";
    for(x=0; x<l2 ; x++)
    {
        for(y=0 ; y<c2 ; y++)
        {
            cout << matriz_2 [x][y] << " ";
        }
        cout << "\n";
    }
    int matriz_3 [x][y];
    //Multiplicação entre as duas matrizes

    for(x=0; x<l1; x++)
    {
        for(y=0; y<c1; y++)
        {
            soma = 0;
            for(k=0; k<c1; k++)
                soma = soma + (matriz[x][k] * matriz_2[k][y]);
            matriz_3[x][y] = soma;
        }
    }
    cout<<"\nResultado da multiplicação:\n";
    for(x=0; x<l1; x++)
    {
        for(y=0; y<c1; y++)
            cout<<matriz_3[x][y]<<"\t";
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
