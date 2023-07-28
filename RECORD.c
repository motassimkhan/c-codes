#include <stdio.h>

struct address {
    char address1[30];
    char address2[30];
    char city[30];
    char state[30];
    char zip[10];
};
typedef struct address RECORD;


int main()
{
    RECORD A1 = {"Abids", "Tolichowki", "Hyderabad", "Telengana",500001};
    printf("\t--Record--\n");
    printf("Address1: %s\n",A1.address1);
    printf("Address2: %s\n",A1.address2);
    printf("City: %s\n",A1.city);
    printf("State: %s\n",A1.state);
    printf("Zip: %s\n",A1.zip);
    return 0;
}