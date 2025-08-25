#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5; // 5 products
    string products[n] = {"Pen", "Notebook", "Eraser", "Marker", "Ruler"};
    int stock[n];
    double price[n];

    // Input stock and price
    cout << "Enter stock and price for each product:\n";
    for(int i = 0; i < n; i++) {
        cout << products[i] << " stock: ";
        cin >> stock[i];
        cout << products[i] << " price: ";
        cin >> price[i];
    }

    // Calculate total inventory value
    double totalValue = 0;
    for(int i = 0; i < n; i++) {
        totalValue += stock[i] * price[i];
    }
    cout << "\nTotal Inventory Value: " << totalValue << endl;

    // Check stock of a product
    string checkProduct;
    cout << "\nEnter product name to check stock: ";
    cin >> checkProduct;
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(products[i] == checkProduct) {
            cout << checkProduct << " stock: " << stock[i] << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Product not found!\n";

    return 0;
}

