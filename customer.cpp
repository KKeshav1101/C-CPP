#include <iostream>
#include <string>
using namespace std;
class Customer {
private:
    static int nextID; // to generate unique IDs for each customer
    int customerid;
    string name;
    int age;
    string phone;
public:
      Customer() {
        customerid = 0;
        name = "";
        age = 0;
        phone = "";
    }
    Customer(string name, int age, string phone) :
        customerid(++nextID), name(name), age(age), phone(phone) {}

    int getID() const { return customerid; }
    string getName() const { return name; }
    int getAge() const { return age; }
    string getPhone() const { return phone; }

    // display customer details
    void display() const {
        cout << "Customer ID: " << customerid << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
    }
};

int Customer::nextID = 0; 

int main() {
    int n;
    cout << "Enter the number of customers: ";
    cin >> n;

    Customer customers[n];

    for (int i = 0; i < n; i++) {
        string name, phone;
        int age;
        cout << "Enter customer details -\n";
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Phone: ";
        cin >> phone;
        customers[i] = Customer(name, age, phone);
    }

    cout << "Customer details -\n";
    for (int i = 0; i < n; i++) {
        customers[i].display();
        cout << endl;
    }

    return 0;
}