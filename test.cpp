#include <iostream>
#include <string>

using namespace std;

int convertBase17To10(string number) {
  int decimal = 0;
  int power = 1;

  // Iterate through the digits of the number (reverse order)
  for (int i = number.length() - 1; i >= 0; i--) {
    char digit = number[i];

    // Convert digit to its corresponding value (0-9, A-G)
    int digitValue;
    if (isdigit(digit)) {
      digitValue = digit - '0';
    } else if (digit >= 'A' && digit <= 'G') {
      digitValue = digit - 'A' + 10;
    } else {
      // Handle invalid characters (optional)
      cout << "Invalid digit encountered: " << digit << endl;
      return -1; // Or throw an exception
    }

    // Check if digit value is valid for base 17
    if (digitValue >= 17) {
      cout << "Invalid digit for base 17: " << digit << endl;
      return -1; // Or throw an exception
    }

    // Add the digit's contribution to the decimal value
    decimal += digitValue * power;
    power *= 17; // Update power of base 17
  }

  return decimal;
}

int main() {
  string base17Number ="23GF";
  int decimalEquivalent = convertBase17To10(base17Number);

  if (decimalEquivalent != -1) {
    cout << base17Number << " (base 17) = " << decimalEquivalent << " (base 10)" << endl;
  }

  return 0;
}
