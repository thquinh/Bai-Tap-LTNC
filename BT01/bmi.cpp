#include <iostream>
 using namespace std;
 int main()
 {
     double weight, height;
     cout << "Give me your weight (kg): "; cin >> weight;
     cout << "Give me your height (m): "; cin >> height;
     double bmi = weight / (height * height);
     if (bmi < 18.5) cout << "Gay qua ban oi!";
     else if (bmi >= 18.5 && bmi <= 22.9) cout << "Oi! Body mlemm";
     else if (bmi >= 25) cout << "Thua can roi :( An it lai de !";
     else if (bmi >= 30 && bmi <= 34.9) cout << "Beo phi do 1 do nha :)";
     else if (bmi < 40) cout << "Beo do 2 giam can di con an tet ma oi!";
     else cout << "Song lam gi nua ban oi :)";
     cout << endl << "Chi so BMI cua ban la: " << bmi;
     return 0;
 }
