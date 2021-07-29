#include <iostream>
#include <string>

using namespace std;

int main() {
  string day;
  int initialDay, finalDay, initialHour, finalHour, initialMinute, finalMinute, initialSecond, finalSecond;
  char doubleDot;

  cin>>day>>initialDay>>initialHour>>doubleDot>>initialMinute>>doubleDot>>initialSecond;
  cin>>day>>finalDay>>finalHour>>doubleDot>>finalMinute>>doubleDot>>finalSecond;

  int tempoSegundos = finalSecond - initialSecond;

  if (tempoSegundos < 0) {
    tempoSegundos += 60;
    finalMinute -= 1;
  }

  int tempoMinuto = finalMinute - initialMinute;

  if (tempoMinuto < 0) {
    tempoMinuto += 60;
    finalHour -= 1;
  }

  int tempoHora = finalHour - initialHour;

  if (tempoHora < 0) {
    tempoHora += 24;
    finalDay -= 1;
  }

  int tempoDia = finalDay - initialDay;

  cout<<tempoDia<<" dia(s)"<<endl;
  cout<<tempoHora<<" hora(s)"<<endl;
  cout<<tempoMinuto<<" minuto(s)"<<endl;
  cout<<tempoSegundos<<" segundo(s)"<<endl;
}