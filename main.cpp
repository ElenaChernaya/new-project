#include <iostream>

class Traincar
        {
            int passengers = 0;
            int passengersMax = 0;

            Traincar()
            {
                
            }

            ~Traincar() {}
        };

int main() 

{ 
  int a = 4;
  int b = 4;

  //Что будет выведено в консоль?
  std::cout << a << "+" << b << std::endl;

  return 0;
}
