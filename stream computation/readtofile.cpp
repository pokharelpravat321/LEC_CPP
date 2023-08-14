#include <iostream>
#include <fstream> // Required for file stream operations

using namespace std;

int main() {
    ifstream inputFile; // Declare an input file stream object
    string fileName = "sample.txt"; // Replace with your file name

    // Open the file in input mode
    inputFile.open(fileName);

    // Check if the file is opened successfully
    if (!inputFile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1; // Exit with an error code
    }

    string line;

    // Read data from the file line by line
    while (getline(inputFile, line)) {
        cout << line << endl; // Display the read data
    }

    // Close the file
    inputFile.close();

    return 0; // Exit normally
}
