#include <iostream>

using namespace std;

int numeroMayor(int num1, int num2){
    
    if(num1 > num2){
        return num1;
    }else if (num2 > num1){
        return num2;
    }
    cout << "Ambos numeros son iguales " << endl;
    return 0;
}