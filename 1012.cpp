#include <iostream>
#include <iomanip>
using namespace std;
int main () {
  double A,B,C,n=3.14159,Triangulo,Circulo,Trapezio,Quadrado,Retangulo;
  cin >> A >> B >> C;
  Triangulo=A*C/2;
  Circulo=n*C*C;
  Trapezio=(A+B)*C/2;
  Quadrado=B*B;
  Retangulo=A*B;
  cout << fixed << setprecision(3) << "TRIANGULO: " << Triangulo << endl;
  cout << "CIRCULO: " << Circulo << endl;
  cout << "TRAPEZIO: " << Trapezio << endl;
  cout << "QUADRADO: " << Quadrado << endl;
  cout << "RETANGULO: " << Retangulo << endl; 
}
