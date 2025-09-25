#include <stdio.h>

int main() {
    int time_limit, time_parked;
    printf("WELCOME TO TIMER BASED PARKING SYSTEM!\n\n");
    printf("Enter allowed parking time (in minutes): ");
    scanf("%d", &time_limit);
    printf("Enter time parked (in minutes): ");
    scanf("%d", &time_parked);
    if (time_parked < time_limit) {
        printf("\nINPUTING 1....\nParking session not ended yet.");  
    } 
    else {
        printf("\nINPUTING 0....\nParking session ended, please buy a new ticket.");  
    }
    return 0;
}

