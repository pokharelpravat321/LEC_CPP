//assginment operator overloading
#include <iostream>
using namespace std;

class MyString {
private:
    char* str;

public:
    MyString(const char* s = nullptr) {
        if (s) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = nullptr;
        }
    }

    // Copy constructor
    MyString(const MyString& other) {
        if (other.str) {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        } else {
            str = nullptr;
        }
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Assignment operator overloading
    MyString& operator=(const MyString& other) {
        if (this == &other) {
            return *this;
        }

        delete[] str;

        if (other.str) {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        } else {
            str = nullptr;
        }

        return *this;
    }

    void display() {
        if (str) {
            cout << str << endl;
        } else {
            cout << "Empty" << endl;
        }
    }
};

int main() {
    MyString str1("Hello");
    MyString str2("World");

    cout << "Before assignment:" << endl;
    cout << "str1: ";
    str1.display();
    cout << "str2: ";
    str2.display();

    str1 = str2;

    cout << "After assignment:" << endl;
    cout << "str1: ";
    str1.display();
    cout << "str2: ";
    str2.display();

    return 0;
}
