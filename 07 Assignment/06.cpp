#include <iostream>
using namespace std;

int shobchey_boro_gcd(int num1, int num2) {
    if (num2 == 0) return num1;
    return shobchey_boro_gcd(num2, num1 % num2);
}

int main() {
    int prothom_num = 48, ditio_num = 18;
    cout << "GCD(" << prothom_num << ", " << ditio_num << ") = " << shobchey_boro_gcd(prothom_num, ditio_num) << endl;
    return 0;
}