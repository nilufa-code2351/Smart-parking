#include <stdio.h>
#include "parking.h"

int main() {

    Slot slots[MAX_SLOTS] = {
        {1, "Dhanmondi", 50, 0},
        {2, "Gulshan", 80, 0},
        {3, "Mirpur", 40, 0},
        {4, "Banani", 70, 0},
        {5, "Uttara", 60, 0}
    };

    char location[30];

    printf("===== Smart Parking Management System =====\n");

    printf("Enter your location: ");
    scanf("%s", location);

    showAvailableSlots(slots, location);
    bookSlot(slots);

    return 0;
}

