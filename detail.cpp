#include <iostream>
#include <cstring>
using namespace std;
class Detail {
private:
    char Name[50];
    char Area[10];
    char Phone_no[20];
public:
    Detail(const char* name, const char* area, const char* phone_no) {
        strcpy(Name, name);
        strcpy(Area, area);
        char phone[20];
        strcpy(phone, area);
        strcat(phone, "-");
        strcat(phone, phone_no);
        strcpy(Phone_no, phone);
    }
    void display() {
        cout << "Name: " << Name << endl;
        cout << "Area: " << Area << endl;
        cout << "Phone Number: " << Phone_no << endl;
    }
};
int main() {
    int n;
    cout << "Enter the number of objects: ";
    cin >> n;

    Detail details[n];

    for (int i = 0; i < n; i++) {
        char name[50], area[10], phone_no[20];

        cout << "Enter object details -\n";
        cout << "Name: ";
        cin >> name;
        cout << "Area: ";
        cin >> area;
        cout << "Phone Number: ";
        cin >> phone_no;

        details[i] = Detail(name, area, phone_no);
    }

    cout << "\nDetails of objects -\n";
    for (int i = 0; i < n; i++) {
        details[i].display();
        cout << endl;
    }

    return 0;
}