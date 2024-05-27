#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& array, int search_num) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == search_num) {
            return i;
        }
    }
    return -1;
}

int main() {
#ifdef _WIN32
    system("chcp 1251");
#endif

    int number;
    cout << "Шестизначне число:  ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        return 1;
    }

    vector<int> divisors;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            divisors.push_back(i);
        }
    }

    int search_num;
    cout << "Дільник для пошуку: ";
    cin >> search_num;

    int result = linearSearch(divisors, search_num);

    if (result != -1) {
        cout << "Дільник " << search_num << " знайдено " << result << "." << endl;
    }
    else {
        cout << "Дільника " << search_num << " немає." << endl;
    }

    return 0;
}
