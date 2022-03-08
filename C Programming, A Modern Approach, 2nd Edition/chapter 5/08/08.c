#include <stdio.h>

int main(void){
    int departure_time, departure_hour, departure_min, 
    dep1 = 480, dep2 = 583, dep3 = 679, dep4 = 767, 
    dep5 = 840, dep6 = 945, dep7 = 1140, dep8 = 1305;

    printf("Enter 24-hour time:");
    scanf("%d:%d", &departure_hour, &departure_min);

    departure_time = departure_hour * 60 + departure_min;

    if (departure_time <= dep1)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    else if (departure_time <= dep2)
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    else if (departure_time <= dep3)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    else if (departure_time <= dep4)
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    else if (departure_time <= dep5)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    else if (departure_time <= dep6)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    else if (departure_time <= dep7)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    else if (departure_time <= dep8)
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");

    return 0;


}