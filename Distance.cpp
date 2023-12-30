#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inch;

public:
    Distance(int f=0, int i=0) {
        feet = f;
        inch = i;
    }

    void printDistance() {
        cout << feet << " feet, " << inch << " inches" << endl;
    }

    static Distance avgDistance(Distance distances[], int n) {
        int total_feet = 0, total_inches = 0;
        for (int i = 0; i < n; i++) {
            total_feet += distances[i].feet;
            total_inches += distances[i].inch;
        }

        total_inches += total_feet * 12;
        int avg_inches = total_inches / n;
        int avg_feet = avg_inches / 12;
        avg_inches %= 12;

        return Distance(avg_feet, avg_inches);
    }
};
int main() {
    int n;
    cout << "Enter the number of distances: ";
    cin >> n;

    Distance distances[n];
    for (int i = 0; i < n; i++) {
        int feet, inch;
        cout << "Enter the feet for distance " << i+1 << ": ";
        cin >> feet;
        cout << "Enter the inches for distance " << i+1 << ": ";
        cin >> inch;
        distances[i] = Distance(feet, inch);
    }

    Distance avg_distance = Distance::avgDistance(distances, n);
    cout << "The average distance is: ";
    avg_distance.printDistance();

    return 0;
}
