#include <iostream>

using namespace std;

class Time {
public:
    Time() : hr(12), min(0), sec(0) {}

    Time(int seconds) {
        hr = seconds / 3600;
        seconds %= 3600;
        min = seconds / 60;
        sec = seconds % 60;
    }

    Time(const Time& other) {
        hr = other.hr;
        min = other.min;
        sec = other.sec;
    }

    void display() const {
        cout << "Time: " << hr << " hr " << min << " min " << sec << " sec" << endl;
    }

private:
    int hr;
    int min;
    int sec;
};

int main() {
    using namespace std;

    Time defaultTime;
    Time paramTime(100);
    Time copyTime = paramTime;

    cout << "Default Time:" << endl;
    defaultTime.display();

    cout << "Parameterized Time (100 seconds):" << endl;
    paramTime.display();

    cout << "Copy Time:" << endl;
    copyTime.display();

    return 0;
}