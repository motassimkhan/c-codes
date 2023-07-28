#include <stdio.h>
#include <string.h>

// define a struct to store the prices of items
struct Item
{
    char name[20];
    float price;
};

struct Item items[] = {
    {"apple", 0.75},
    {"banana", 1.35},
    {"carrot", 0.75},
    {"ketchup", 90},
    {"bread", 50},
    {"milk", 90},
    {"egg", 6},
    {"pasta", 100},
    {"rice", 65},
    {"oil", 90},
    {"cheese", 118},
};

const int num_items = sizeof(items) / sizeof(struct Item);

// define a function to calculate the bill
float calculate_bill(int purchased_items[], int quantities[], int num_purchased)
{
    float bill = 0.0;
    for (int i = 0; i < num_purchased; i++)
    {
        bill += items[purchased_items[i]].price * quantities[i];
    }
    return bill;
}

// define a function to take customer orders
int take_order(int purchased_items[], int quantities[])
{
    printf("\n\tAvailable Items:\n");
    for (int i = 0; i < num_items; i++)
    {
        printf("\t%d. %s\n", i + 1, items[i].name);
    }
    int num_purchased = 0;
    char item_name[20];
    while (1)
    {
        printf("\nEnter Item Name (or 'done' to finish): ");
        scanf("%s", item_name);
        if (strcmp(item_name, "done") == 0)
        {
            break;
        }
        int item_index = -1;
        for (int i = 0; i < num_items; i++)
        {
            if (strcmp(item_name, items[i].name) == 0)
            {
                item_index = i;
                break;
            }
        }
        if (item_index == -1)
        {
            printf("\nItem not found >_< \n");
        }
        else
        {
            int quantity;
            printf("\nEnter Quantity: ");
            scanf("%d", &quantity);
            purchased_items[num_purchased] = item_index;
            quantities[num_purchased] = quantity;
            num_purchased++;
        }
    }
    return num_purchased;
}

int main()
{
    int purchased_items[20];
    int quantities[20];
    printf("\n\tWelcome to BestMart\n\n\t  (^_^)\n\n\tPlace Your Order\n");
    int num_purchased = take_order(purchased_items, quantities);
    float bill = calculate_bill(purchased_items, quantities, num_purchased);
    printf("\n\n\tBESTMART\n\n");
    printf("\tRECIPT ^o^\n");

    printf("=========================================\n\tCash Recipt\n=========================================\n");
    printf("Description\tPrice\tQuantity\n");
    for (int j = 0; j < num_purchased; j++)
    {
        printf("%-16s%-9.2f%6d\n", items[purchased_items[j]].name, items[purchased_items[j]].price, quantities[j]);
    }
    printf("=========================================\nBill Amount:    %0.2f\n=========================================\n\n\tThank You! :)\n\n ",bill);
    return 0;
}