

#include <iostream>
using namespace std;

int n1,n2; // Variáveis Globais

int main(){

// Operadores matemáticos: + - / * % ()

int n3, n4, n5; // Variáveis Locais

int res1, res2, res3, res4;
double res5;

n1 = 2 , n2 = 3, n3 = 5, n4 = 7, n5 = 11;
double n6 = 11, n7 = 7;

 cout << n1 << "\n" << n2 << "\n" << n3 << "\n" << n4 << "\n" << n5 << "\n\n";

 res1 = n1 * n2 + n3;
 res2 = n5 / n4; // O resultado dá 1 pq tudo está em int=inteiro
 res3 = n5 % n4; // Pega o que sobrou nesse caso sobrou 4 na divisão de 11 por 7 
 res4 = n1 * (n2 + n3);
 res5 = n6 / n7;

 cout << res1 << "\n" << res2 << "\n" << res3 << "\n" << res4 << "\n" << res5 << "\n\n";

   return 0;
}
