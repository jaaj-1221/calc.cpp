#include <iostream>



using namespace std;



int main() {

  double num1, num2, Result;

  int Choice;



  cout << "Enter the first number: ";

  cin >> num1;

   

  cout << "Enter the second number: ";

  cin >> num2;

   

  cout << "\nMenu Options:\n";

  cout << "1: Add\n";

  cout << "2: Subtract\n";

  cout << "3: Multiply\n";

  cout << "4: Divide\n";

  cout << "5: Average\n";

  cout << "Enter your choice (1-5): ";

  cin >> Choice;



  switch (Choice) {

    case 1:

      Result = num1 + num2;

      break;

    case 2:

      Result = num1 - num2;

      break;

    case 3:

      Result = num1 * num2;

      break;

    case 4:

      if (num2 != 0) {

        Result = num1 / num2;

      } else {

        cout << "Error: Division by zero" << endl;

        return 1;

      }

      break;

    case 5:

      Result = (num1 + num2) / 2.0;

      break;

    default:

      cout << "Invalid Choice" << endl;

      return 0;

  }



  cout << "\nResult: " << Result << endl;



  return 0;

}

