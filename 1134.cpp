
#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
 int a,b;

    cin >> a;
    cin >> b;

    int aux;

    if(b < a){
         aux = a;
         a = b;
         b = aux;
    }

    for(int i = a+1; i < b; i++){
            if(i%5 == 2 || i%5 == 3){
                   cout << i << endl;
                   }
                   }
    return 0;
}
