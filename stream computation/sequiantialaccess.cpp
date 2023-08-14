#include <iostream>
#include <fstream>  // Required for file stream operations
#include <string>   // Required for using strings

using namespace std;

int main() {
    ifstream inputFile("input.txt");  // Open the file for reading
    
    if (!inputFile.is_open()) {
        cout << "Unable to open the file." << endl;
        return 1;
    }
    
    string line;
    while (getline(inputFile, line)) {  // Read lines from the file
        cout << line << endl;  // Display each line on the console
    }
    
    inputFile.close();  // Close the file
    
    return 0;
}
