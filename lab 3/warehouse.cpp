#include <iostream>
using namespace std;

int main() {
    const int REORDER_LEVEL = 50;

    int current_stock;
    cout << "Enter initial stock (100-500): ";
    cin >> current_stock;

    
    if (current_stock >= 100) {
        if (current_stock <= 500) {
        
        } else {
            cout << "Invalid initial stock! Must be between 100 and 500.\n";
            return 0;
        }
    } else {
        cout << "Invalid initial stock! Must be between 100 and 500.\n";
        return 0;
    }

    int count = 0;
    int total_quantity_processed = 0;

    while (count < 3) {
        char item_type;
        int quantity;

        cout << "\nEnter item type (A=Electronics, B=Clothing, C=Groceries): ";
        cin >> item_type;
        cout << "Enter quantity (1-100, positive=incoming, negative=outgoing): ";
        cin >> quantity;
        if (quantity < -100 || quantity > 100 || quantity == 0) {
            cout << "Invalid quantity! Must be between -100 and 100 (not zero).\n";
            continue; 
        }

    
        switch (item_type) {
            case 'A':
            case 'a':
                cout << "Processing Electronics transaction...\n";
                break;
            case 'B':
            case 'b':
                cout << "Processing Clothing transaction...\n";
                break;
            case 'C':
            case 'c':
                cout << "Processing Groceries transaction...\n";
                break;
            default:
                cout << "Invalid item type!\n";
                continue; 
        }

        
        current_stock += quantity;
        total_quantity_processed += quantity;

        count++;
    }

    
    bool low_stock;
    if (current_stock < REORDER_LEVEL) {
        low_stock = true;
    } else {
        low_stock = false;
    }


    cout << "\n----- Warehouse Report -----\n";
    cout << "Final Stock Level: " << current_stock << endl;
    cout << "Low Stock Alert: " << (low_stock ? "true" : "false") << endl;
    cout << "Total Quantity Processed: " << total_quantity_processed << endl;

    return 0;
}