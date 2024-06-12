#include <iostream>
using namespace std;

int main() {
    int flipkartPrice, flipkartDiscount, flipkartShipping;
    int snapdealPrice, snapdealDiscount, snapdealShipping;
    int amazonPrice, amazonDiscount, amazonShipping;

    
    cin >> flipkartPrice >> flipkartDiscount >> flipkartShipping;

  
    cin >> snapdealPrice >> snapdealDiscount >> snapdealShipping;

   
    cin >> amazonPrice >> amazonDiscount >> amazonShipping;

   
    int finalFlipkartPrice = (flipkartPrice * (100 - flipkartDiscount) / 100) + flipkartShipping;
    int finalSnapdealPrice = (snapdealPrice * (100 - snapdealDiscount) / 100) + snapdealShipping;
    int finalAmazonPrice = (amazonPrice * (100 - amazonDiscount) / 100) + amazonShipping;

  
    cout << "In Flipkart: Rs." << finalFlipkartPrice << endl;
    cout << "In Snapdeal: Rs." << finalSnapdealPrice << endl;
    cout << "In Amazon: Rs." << finalAmazonPrice << endl;

    
    if (finalFlipkartPrice <= finalSnapdealPrice && finalFlipkartPrice <= finalAmazonPrice) {
        cout << "Choose Flipkart" << endl;
    } else if (finalSnapdealPrice < finalFlipkartPrice && finalSnapdealPrice <= finalAmazonPrice) {
        cout << "Choose Snapdeal" << endl;
    } else {
        cout << "Choose Amazon" << endl;
    }

    return 0;
}
