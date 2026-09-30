#include <iostream>

using namespace std;

int main()
{
    /* Task 1 

    int all, num1, num2, num3, num4, num5, num6, num7;

    int all = num1;

    cout << "Enter 7 different numbers: \n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;


    if (num2 > all) all = num2;
    if (num3 > all) all = num3;
     if (num4 > all) all = num4;
     if (num5 > all) all = num5;
     if (num6 > all) all = num6;
     if (num7 > all) all = num7;

    cout << "Max number is: " << all;

    */

    /* Task 2

    float A, B, C, weight, distanceA_B, distanceB_C, max_fuel, fuel;

    max_fuel = 300;

    cout << "Enter distance from A to B(km): \n";
    cin >> distanceA_B;

    cout << "Enter distance from B to C(km): \n";
    cin >> distanceB_C;

    cout << "Enter weight of goods(kg): \n";
    cin >> weight;

    if (weight <= 500 && distanceA_B <= 300) {
        fuel = distanceA_B * 1;
        distanceA_B = 300 - fuel;
        cout << distanceA_B << " " << "liters of fuel you need to filled at point B.\n";

        distanceA_B = max_fuel - fuel;
        cout << distanceA_B << " " << "liters of fuel stayed at point B.\n";

        fuel = distanceB_C * 1;
        cout << fuel << " " << "liters of fuel needed for B to C.\n";

        if (fuel <= distanceA_B) { // fuel - liters of fuel needed for B to C.  distanceA_B - liters of fuel stayed at point B.
            cout << "Enough fuel.\n";
        }
        else {
            cout << "You need more fuel to achive from B to C.\n";
        }
        
    }

    else if (weight <= 1000 && distanceA_B <= 75) {
        fuel = distanceA_B * 4;
        cout << fuel << " " << "liters of fuel you need to filled at point B.\n";

        distanceA_B = max_fuel - fuel;
        cout << distanceA_B << " " << "liters of fuel stayed at point B.\n";

        fuel = distanceB_C * 4;
        cout << fuel << " " << "liters of fuel needed for B to C.\n";
        
        if (fuel <= distanceA_B) { // fuel - liters of fuel needed for B to C.  distanceA_B - liters of fuel stayed at point B.
            cout << "Enough fuel.\n";
        }
        else {
            cout << "You need more fuel to achive from B to C.\n";
        }
    }

    else if (weight <= 1500 && distanceA_B <= 42) {
        fuel = distanceA_B * 7;
        cout << fuel << " " << "liters of fuel you need to filled at point B.\n";

        distanceA_B = max_fuel - fuel;
        cout << distanceA_B << " " << "liters of fuel stayed at point B.\n";

        fuel = distanceB_C * 7;
        cout << fuel << " " << "liters of fuel needed for B to C.\n";

        if (fuel <= distanceA_B) { // fuel - liters of fuel needed for B to C.  distanceA_B - liters of fuel stayed at point B.
            cout << "Enough fuel.\n";
        }
        else {
            cout << "You need more fuel to achive from B to C.\n";
        }

    }

    else if (weight <= 2000 && distanceA_B <= 33) {
        fuel = distanceA_B * 9;
        cout << fuel << " " << "liters of fuel you need to filled at point B.\n";

        distanceA_B = max_fuel - fuel;
        cout << distanceA_B << " " << "liters of fuel stayed at point B.\n";

        fuel = distanceB_C * 9;
        cout << fuel << " " << "liters of fuel needed for B to C.\n";

        if (fuel <= distanceA_B) { // fuel - liters of fuel needed for B to C.  distanceA_B - liters of fuel stayed at point B.
            cout << "Enough fuel.\n";
        }
        else {
            cout << "You need more fuel to achive from B to C.\n";
        }
    }

    else if (weight >= 2000) {
        cout << "The plane doesn't lift a load exceeding 2.000 kg.\n";

    }

    else if (distanceA_B >= 300) {
        cout << "Not enough fuel to cover this distance.\n";
    }
    else {
        cout << "Incorrect number.\n";
    }

    */

    /* Task 3 

    float salary, sells, manager1, manager2, manager3;

    cout << "Enter sum of sells for the first manager: \n ";
    cin >> manager1;

    cout << "Enter sum of sells for the second manager: \n ";
    cin >> manager2;

    cout << "Enter sum of sells for the third manager: \n ";
    cin >> manager3;

    if (manager1 <= 500) {
        salary = 200 + manager1 * 0.03;
    }
    else if (manager1 <= 1000) {
        salary = 200 + manager1 * 0.05;
    }
    else {
        salary = 200 + manager1 * 0.08;
    }
    cout << salary << "\n";

    if (manager2 <= 500) {
        salary = 200 + manager2 * 0.03;
    }
    else if (manager2 <= 1000) {
        salary = 200 + manager2 * 0.05;
    }
    else {
        salary = 200 + manager2 * 0.08;
    }

    cout << salary << "\n";

    if (manager3 <= 500) {
        salary = 200 + manager3 * 0.03;
    }
    else if (manager3 <= 1000) {
        salary = 200 + manager3 * 0.05;
    }
    else {
        salary = 200 + manager3 * 0.08;
    }

    cout << salary << "\n";

    */ 

    




    /* Task 4 */ 

    int fine, times_late, desired_income, lines, all_lines, prefer_salary, all_salary;

    times_late = 0;
    all_lines = 0;

    fine = (times_late / 3) * 20; 

    cout << "Enter Vasya's desired income and the number of times he was late: \n";
    cin >> desired_income >> times_late;

    lines = desired_income / 50 * 100; 

    cout <<  lines << " " << "lines of code Vasya need to write.\n";


    cout << "Enter number of lines, which Vasya wrote and desired income: \n";
    cin >> prefer_salary >> desired_income; 

    all_lines = all_lines * 50 / 100; 

    all_lines = all_lines - prefer_salary;

    prefer_salary = prefer_salary / 20; 

    prefer_salary = 2 * prefer_salary;

    cout << "Vasya can be late for" << ' ' << prefer_salary << " " << "times. \n";

    cout << "Enter sum of lines and times being late: \n";

    cin >> all_lines >> times_late; 

    if (all_lines != 0) {
        all_salary = all_lines / 100 * 50;

        if (times_late / 3 == 0) {
            times_late = times_late / 2;
            times_late = times_late * 20; 
            all_salary = all_salary - times_late;

        }
        cout << all_salary << " " << "$ get Vasya. \n";
    }




    
}

