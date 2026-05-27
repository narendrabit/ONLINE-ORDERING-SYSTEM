#include <stdio.h>
#include <string.h>

void showMainMenu() {
    printf("\n========== ONLINE ORDERING SYSTEM ==========\n");
    printf("1. Food Items\n");
    printf("2. Electronics\n");
    printf("3. Makeup\n");
    printf("4. Toiletries\n");
    printf("5. Stationary\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

void foodMenu() {
    printf("\n---------- FOOD MENU ----------\n");
    printf("1. CWU Instant Noodles (Pack of 8) ..... ₹160\n"
           "2. CWU Mixed Dal (1Kg) ................. ₹120\n"
           "3. CWU Wheat Flour (1Kg) ............... ₹45\n"
           "4. CWU Basmati Rice (1Kg) .............. ₹150\n"
           "5. CWU Multigrain Biscuits ............. ₹60\n"
           "6. CWU Spice Mix ....................... ₹80\n"
           "7. CWU Mixed Pickle (1Kg) .............. ₹100\n"
           "8. CWU Potato Chips (250g) ............. ₹50\n"
           "9. CWU Momos ........................... ₹120\n");
    printf("Enter your choice: ");
}

void electronicsMenu() {
    printf("\n---------- ELECTRONICS MENU ----------\n");
    printf("1. CWU Night Lamp ....................... ₹450\n"
           "2. CWU Hair Dryer ....................... ₹1500\n"
           "3. CWU Blender .......................... ₹4000\n"
           "4. CWU Television ....................... ₹40000\n"
           "5. CWU Washing Machine .................. ₹30000\n"
           "6. CWU Fridge ........................... ₹25000\n"
           "7. CWU Laptop ........................... ₹60000\n"
           "8. CWU Mobile Phone ..................... ₹20000\n"
           "9. CWU Tablet ........................... ₹15000\n"
           "10. CWU Gaming Station .................. ₹50000\n");
    printf("Enter your choice: ");
}

void makeupMenu() {
    printf("\n---------- MAKEUP MENU ----------\n");
    printf("1. CWU Pink Blush ....................... ₹350\n"
           "2. CWU Maroon Lipstick .................. ₹400\n"
           "3. CWU Shade 8 Foundation ............... ₹1200\n"
           "4. CWU Highlighter ...................... ₹600\n"
           "5. CWU Black Eyeliner ................... ₹300\n");
    printf("Enter your choice: ");
}

void toiletriesMenu() {
    printf("\n---------- TOILETRIES MENU ----------\n");
    printf("1. CWU Brush ............................ ₹150\n"
           "2. CWU Bar Soap ......................... ₹40\n"
           "3. CWU Detergent (5Kg) ................. ₹350\n"
           "4. CWU Air Freshener (500ml) ............ ₹120\n"
           "5. CWU Utensil Cleaner (500ml) .......... ₹100\n"
           "6. CWU Liquid Soap (500ml) .............. ₹80\n"
           "7. CWU Toothpaste (500ml) ............... ₹90\n");
    printf("Enter your choice: ");
}

void stationaryMenu() {
    printf("\n---------- STATIONARY MENU ----------\n");
    printf("1. CWU Black Pen ......................... ₹15\n"
           "2. CWU Blue Pen .......................... ₹15\n"
           "3. CWU Multi-colored Pens (12 Pack) ...... ₹120\n"
           "4. CWU Ruled Page ........................ ₹5\n"
           "5. CWU Graph Page ........................ ₹5\n"
           "6. CWU Outline Map of India .............. ₹60\n"
           "7. CWU Notebook (500 Pages) .............. ₹300\n"
           "8. CWU Eraser ............................ ₹10\n"
           "9. CWU Sharpener ......................... ₹15\n"
           "10. CWU Scale ............................ ₹30\n"
           "11. CWU Geometry Box ..................... ₹200\n"
           "12. CWU Stick Adhesive ................... ₹40\n");
    printf("Enter your choice: ");
}

int getPrice(int cat, int item) {
    int priceTable[5][13] = {
        {0,160,120,45,150,60,80,100,50,120,0,0,0},      // Food
        {0,450,1500,4000,40000,30000,25000,60000,20000,15000,50000,0,0}, // Electronics
        {0,350,400,1200,600,300,0,0,0,0,0,0,0},         // Makeup
        {0,150,40,350,120,100,80,90,0,0,0,0,0},         // Toiletries
        {0,15,15,120,5,5,60,300,10,15,30,200,40}        // Stationary
    };
    if (cat < 1 || cat > 5) return 0;
    if (item < 1 || item > 12) return 0;
    return priceTable[cat-1][item];
}

float getTax(int cat) {
    switch (cat) {
        case 1: return 0.05;  // Food
        case 2: return 0.18;  // Electronics
        case 3: return 0.12;  // Makeup
        case 4: return 0.05;  // Toiletries
        case 5: return 0.12;  // Stationary
        default: return 0;
    }
}

void payment_mode() {
    int mode;
    printf("\nSelect Payment Mode:\n");
    printf("1. Credit/Debit Card\n");
    printf("2. UPI\n");
    printf("3. Net Banking\n");
    printf("Enter your choice: ");
    scanf("%d", &mode);
    switch(mode) {
        case 1: printf("Payment by Credit/Debit Card selected.\n"); break;
        case 2: printf("Payment by UPI selected.\n"); break;
        case 3: printf("Payment by Net Banking selected.\n"); break;
        default: printf("Invalid payment mode!\n"); payment_mode(); break;
    }
}

float coupon_code(float total) {
    char code[10];
    float discount = 0;

    printf("Enter coupon code (CWU10/CWU20) or 'none': ");
    scanf(" %s", code);  // note the space before %s

    if(strcmp(code, "CWU10") == 0) {
        discount = total * 0.10;
        printf("Coupon Applied: 10%% OFF (₹%.2f)\n", discount);
    } 
    else if(strcmp(code, "CWU20") == 0) {
        discount = total * 0.20;
        printf("Coupon Applied: 20%% OFF (₹%.2f)\n", discount);
    } 
    else if(strcmp(code, "none") == 0) {
        printf("No coupon applied.\n");
    } 
    else {
        printf("Invalid coupon code.\n");
    }

    total -= discount;
    return total;
}

// Structure to store order items
struct OrderItem {
    int category;
    int item;
    int quantity;
    float price;
};

const char* getItemName(int category, int item) {
    switch(category) {
        case 1: // Food
            switch(item) {
                case 1: return "CWU Instant Noodles";
                case 2: return "CWU Mixed Dal";
                case 3: return "CWU Wheat Flour";
                case 4: return "CWU Basmati Rice";
                case 5: return "CWU Multigrain Biscuits";
                case 6: return "CWU Spice Mix";
                case 7: return "CWU Mixed Pickle";
                case 8: return "CWU Potato Chips";
                case 9: return "CWU Momos";
                default: return "Unknown Item";
            }
        case 2: // Electronics
            switch(item) {
                case 1: return "CWU Night Lamp";
                case 2: return "CWU Hair Dryer";
                case 3: return "CWU Blender";
                case 4: return "CWU Television";
                case 5: return "CWU Washing Machine";
                case 6: return "CWU Fridge";
                case 7: return "CWU Laptop";
                case 8: return "CWU Mobile Phone";
                case 9: return "CWU Tablet";
                case 10: return "CWU Gaming Station";
                default: return "Unknown Item";
            }
        case 3: // Makeup
            switch(item) {
                case 1: return "CWU Pink Blush";
                case 2: return "CWU Maroon Lipstick";
                case 3: return "CWU Shade 8 Foundation";
                case 4: return "CWU Highlighter";
                case 5: return "CWU Black Eyeliner";
                default: return "Unknown Item";
            }
        case 4: // Toiletries
            switch(item) {
                case 1: return "CWU Brush";
                case 2: return "CWU Bar Soap";
                case 3: return "CWU Detergent";
                case 4: return "CWU Air Freshener";
                case 5: return "CWU Utensil Cleaner";
                case 6: return "CWU Liquid Soap";
                case 7: return "CWU Toothpaste";
                default: return "Unknown Item";
            }
        case 5: // Stationary
            switch(item) {
                case 1: return "CWU Black Pen";
                case 2: return "CWU Blue Pen";
                case 3: return "CWU Multi-colored Pens";
                case 4: return "CWU Ruled Page";
                case 5: return "CWU Graph Page";
                case 6: return "CWU Outline Map of India";
                case 7: return "CWU Notebook";
                case 8: return "CWU Eraser";
                case 9: return "CWU Sharpener";
                case 10: return "CWU Scale";
                case 11: return "CWU Geometry Box";
                case 12: return "CWU Stick Adhesive";
                default: return "Unknown Item";
            }
        default:
            return "Unknown Item";
    }
}

int main() {
    int choice, item, qty=0, total_qty=0, totalTax=0;
    float total = 0;
    char cont = 'y';
    
    // Array to store ordered items
    struct OrderItem orders[50];
    int orderCount = 0;
        printf("\n============================================\n");
    printf("                 CWU STORE\n");
    printf("============================================\n");

    while(cont == 'y' || cont == 'Y') {
        showMainMenu();
        scanf("%d", &choice);
        if(choice == 6) {
            printf("\nExiting... Thank you for shopping!\n");
            break;
        }

        switch(choice) {
            case 1: foodMenu(); break;
            case 2: electronicsMenu(); break;
            case 3: makeupMenu(); break;
            case 4: toiletriesMenu(); break;
            case 5: stationaryMenu(); break;
            default: printf("Invalid choice!\n"); continue;
        }

        scanf("%d", &item);
        printf("Enter quantity: ");
        scanf("%d", &qty);

        int price = getPrice(choice, item);
        if(price == 0) {
            printf("Invalid selection!\n");
        } else {
            float cost = price * qty;
            float tax = getTax(choice) * cost;
            float total_item = cost + tax;
            total += total_item;
            total_qty += qty;
            totalTax += tax;
            
            // Store the ordered item
            orders[orderCount].category = choice;
            orders[orderCount].item = item;
            orders[orderCount].quantity = qty;
            orders[orderCount].price = price;
            orderCount++;
            
            printf("Added to cart: %s (%d)\n", getItemName(choice, item), qty);
            printf("Item cost: ₹%.2f | Tax: ₹%.2f | Total: ₹%.2f\n", cost, tax, total_item);
        }

        printf("\nDo you want to order more? (y/n): ");
        scanf(" %c", &cont);

    

    }

    if(total == 0) {
        printf("No items ordered. Exiting...\n");
        return 0;
    }

    payment_mode();
    float final_total = coupon_code(total);

    printf("\n============================================\n");
    printf("                 FINAL BILL\n");
    printf("============================================\n");
    printf("ITEMS ORDERED:\n");
    printf("--------------------------------------------\n");
    for(int i = 0; i < orderCount; i++) {
        printf("%d. %s (%d) - ₹%.2f\n", 
            i + 1,
            getItemName(orders[i].category, orders[i].item),
            orders[i].quantity,
            orders[i].price * orders[i].quantity
        );
    }
    printf("--------------------------------------------\n");
    printf("Total Quantity:               %d\n", total_qty);
    printf("Cost of items:                ₹%.2f\n", total - totalTax);    
    printf("Subtotal (with tax):          ₹%.2f\n", total);
    printf("After Coupon Discount:        ₹%.2f\n", final_total);
    printf("--------------------------------------------\n");
    printf("Grand Total Payable:          ₹%.2f\n", final_total);
    printf("============================================\n");
    printf("          THANK YOU! VISIT AGAIN\n");
    printf("============================================\n");

    return 0;
}