// Nancy Gomez
// Nicholas Roasas
// Noe Lomeli
// Michael Sanchez

#include <iostream>
#include <string>
using namespace std;

char menu();
double climbing(int people);
double scuba(int people);
double skyDive(int people);
double spelunk(int people);

int main(){
  
  return 0;
}
char menu(){
  
}
double climbing(int people){
  
}
double scuba(int people){
  const double BASE_CHARGE = 1000.0; // per person
  const double SCUBA_INSTRUCT = 100.0; // per person
  const double DISCOUNT = 0.10;
  int numInstruct;
  double result = 0;
  
  cout << "How many people need or want instructions?: ";
  cin >> numInstruct;
  
  while( (numInstruct < 0) || (numInstruct > people) )
  {
    cout << "Invalid input!!!\n";
    cout << "Please input number of people needing instructions between [0 - " << people << "] : ";
    cin >> numInstruct;
  }
  
  result = (people * BASE_CHARGE) + (numInstruct * SCUBA_INSTRUCT);
  
  if(people >= 5)
  {
    result -= people * BASE_CHARGE * DISCOUNT;
  }
  
  return result;
  
}
double skyDive(int people){
  
}
double spelunk(int people){
  
}
