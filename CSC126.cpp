#include<iostream>
using namespace std;

// Conversion rates (array)
double rates[10][10] = {
    {1, 0.33, 3515.14, 7.53, 11.90, 5198.89, 4373.44, 444.65, 863.49, 0.28}, // MYR to [MYR, SGD, IDR, THB, PHP, VND, LAK, MMK, KHR, BND]
    {3.03, 1, 10636.36, 26.57, 0.029, 18338.19, 15429.01, 1569.97, 3048.25, 1}, // SGD to [MYR, SGD, IDR, THB, PHP, VND, LAK, MMK, KHR, BND]
    {0.00028, 0.000094, 1, 0.0023, 279.39, 1.57, 1.32, 0.13, 0.26, 0.000085,}, // IDR to [MYR, SGD, IDR, THB, PHP, VND, LAK, MMK, KHR, BND]
    {0.13, 0.038, 439.91, 1, 0.64, 688.25, 579.03, 58.84, 114.29, 0.038}, // THB to [MYR, SGD, IDR, THB, PHP, VND, LAK, MMK, KHR, BND]
    {0.084, 0.024, 279.39, 0.64, 1, 437.09, 367.69, 37.31, 72.37, 0.024}, // PHP to [MYR, SGD, IDR, THB, PHP, VND, LAK, MMK, KHR, BND]
    {0.00019, 0.000055, 0.64, 0.0015, 0.0023, 1, 0.85, 0.085, 0.017, 0.000054,}, // VND to [MYR, SGD, IDR, THB, PHP, VND, LAK, MMK, KHR, BND]
    {0.00023, 0.000065, 0.76, 0.0017, 0.0027, 1.19, 1, 0.10, 0.20, 0.000065}, // LAK to [MYR, SGD, IDR, THB, PHP, VND, LAK, MMK, KHR, BND]
    {0.0022, 0.00064, 7.53, 0.017, 0.027, 11.70, 9.86, 1, 1.94, 0.0064}, // MMK to [MYR, SGD, IDR, THB, PHP, VND, LAK, MMK, KHR, BND]
    {0.0012, 0.00033, 3.88, 0.0088, 0.014, 6.03, 5.08, 0.52, 1, 0.00033}, // KHR to [MYR, SGD, IDR, THB, PHP, VND, LAK, MMK, KHR, BND]
    {3.53, 1, 11810.62, 26.67, 42.14, 18365.21, 15473.44, 1569.65, 3048.19, 1} // BND to [MYR, SGD, IDR, THB, PHP, VND, LAK, MMK, KHR, BND]
};

// Currency names for labelling (array)
string currencyNames[10] = {
    "MYR", "SGD", "IDR", "THB", "PHP", "VND", "LAK", "MMK", "KHR", "BND"
};

// 2% Service charge
double service_charge_rate = 0.02;

// Function for all the calculation (function)
pair<double, double> convert(double amount, double rate) {
    double service_charge = amount * service_charge_rate;
    double converted_amount = (amount - service_charge) * rate;
    return make_pair(converted_amount, service_charge);
}

int main() {
    char answer;
    string name, phoneNum, agreement;

    agreement = "We take 2% the exchange as service fee,""\ndo you agree?";
    cout<<"Welcome to d'ASEAN Exchange!\n";
    cout<<"Before we start we need some of your detail.\n"<<"Your name: ";
    getline(cin,name);
    cout<<"\nYour phone number: ";
    getline(cin, phoneNum);

// Ask the user whether they agree with the service charge using message box (function & selection)
// Ask the user whether they agree with the service charge using console input
    char agreeInput;
    cout << agreement << " (y/n): ";
    cin >> agreeInput;
    cin.ignore(); // Clear newline from input buffer
    if(agreeInput == 'y' || agreeInput == 'Y')
{

    do {
        int from, to;
        double amount;
        string toUnit, fromUnit;

        cout << "Select the currency you want to convert from:\n";
        cout << "1. Malaysian Ringgit (MYR)\n";
        cout << "2. Singapore Dollar (SGD)\n";
        cout << "3. Indonesian Rupiah (IDR)\n";
        cout << "4. Thailand Baht (THB)\n";
        cout << "5. Philiphine Peso (PHP)\n";
        cout << "6. Vietnamese Dong (VND)\n";
        cout << "7. Lao Kip (LAK)\n";
        cout << "8. Myanmar Kyat (MMK)\n";
        cout << "9. Cambodian Riel (KHR)\n";
        cout << "10. Brunei Dollar (BND)\n";
        cout<<"Please insert the available code only. (1-10)\n"<<"From: ";
        cin >> from;

        if(from >= 1 && from <= 10){
    fromUnit = currencyNames[from - 1];
}
        cout << "Select the currency you want to convert to:\n";
        cout << "1. Malaysian Ringgit (MYR)\n";
        cout << "2. Singapore Dollar (SGD)\n";
        cout << "3. Indonesian Rupiah (IDR)\n";
        cout << "4. Thailand Baht (THB)\n";
        cout << "5. Philiphine Peso (PHP)\n";
        cout << "6. Vietnamese Dong (VND)\n";
        cout << "7. Lao Kip (LAK)\n";
        cout << "8. Myanmar Kyat (MMK)\n";
        cout << "9. Cambodian Riel (KHR)\n";
        cout << "10. Brunei Dollar (BND)\n";
        cout<<"Please insert the available code only. (1-10)\n"<<"To: ";
        cin >> to;

        if(to >= 1 && to <= 10){
    toUnit = currencyNames[to - 1];
}

        if(from >= 1 && from <= 10 && to >= 1 && to <= 10){
            cout<<"Conversion initialized: "<<fromUnit<<" to "<<toUnit<<endl;
            cout<< "Enter the amount you want to convert:\n"<<"Amount: ";
            cin >> amount;
        }

        if(from >= 1 && from <= 10 && to >= 1 && to <= 10) {
            pair<double, double> result = convert(amount, rates[from-1][to-1]);
            cout << "Currency " << fromUnit << " " << amount << " = Currency " << toUnit << " " << result.first << "\n";
            cout << "Service charge: " << result.second <<" "<< fromUnit<<"\n";
        } else {
            cout << "Invalid choice.\n";
        }
        cout<< "Do you want to exchange more? (y/n)\n"<<"answer: ";
        cin>>answer;
    } while(answer == 'y' || answer == 'Y');
}   
    cout<< "Thank you for exchanging with us!\n"<<"\nSee you later "<< name<<"!";

    return 0;

}