#ifndef PARKING_H
#define PARKING_H

#define MAX_SLOTS 5

// Slot structure
typedef struct {
    int id;
    char location[30];
    int ratePerHour;
    int isBooked;
} Slot;

// Booking structure
typedef struct {
    int slotId;
    int hours;
    int totalCost;
    int bookingId;
} Booking;

// Function declarations
void showAvailableSlots(Slot slots[], char location[]);
void bookSlot(Slot slots[]);

#endif

