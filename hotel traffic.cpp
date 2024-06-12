#include <iostream>
using namespace std;

int main() {
    int month, roomRent, daysStayed;
    
    // Read input values
    cin >> month >> roomRent >> daysStayed;
    
    // Check if the month value is valid
    if (month < 1 || month > 12) {
        cout << "Invalid Input" << endl;
    } else {
        // Calculate the final room rent considering peak seasons
        if ((month >= 4 && month <= 6) || (month == 11 || month == 12)) {
            roomRent = roomRent + (roomRent * 20 / 100);
        }
        
        // Calculate the total tariff
        int totalTariff = roomRent * daysStayed;
        
        // Print the total tariff
        cout << totalTariff << endl;
    }
    
    return 0;
}
