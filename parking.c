#include <stdio.h>
#include <string.h>
#include "parking.h"

// Show slots based on location
void showAvailableSlots(Slot slots[], char location[]) {
    printf("\nAvailable slots in %s:\n", location);
    printf("ID\tRate/hr\n");

    for(int i = 0; i < MAX_SLOTS; i++) {
        if(strcmp(slots[i].location, location) == 0 && slots[i].isBooked == 0) {
            printf("%d\t%d\n", slots[i].id, slots[i].ratePerHour);
        }
    }
}

// Booking logic
void bookSlot(Slot slots[]) {
    Booking booking;
    int choice, hours;

    printf("\nEnter Slot ID to book: ");
    scanf("%d", &choice);

    printf("Enter parking time (hours): ");
    scanf("%d", &hours);

    for(int i = 0; i < MAX_SLOTS; i++) {
        if(slots[i].id == choice) {

            if(slots[i].isBooked == 1) {
                printf("\n❌ Slot already booked!\n");
                return;
            }

            booking.slotId = choice;
            booking.hours = hours;
            booking.totalCost = hours * slots[i].ratePerHour;
            booking.bookingId = 1000 + choice;

            slots[i].isBooked = 1;

            printf("\n✅ Booking Confirmed\n");
            printf("Booking ID: %d\n", booking.bookingId);
            printf("Total Cost: %d taka\n", booking.totalCost);
            return;
        }
    }

    printf("\n❌ Invalid Slot ID\n");
}
