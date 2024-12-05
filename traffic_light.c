#include <stdio.h>
#include <time.h>
#include "traffic_light.h"

void print_state(LightState state) {
    switch (state) {
        case RED:
            printf("RED light\n");
            break;
        case GREEN:
            printf("GREEN light\n");
            break;
        case YELLOW:
            printf("YELLOW light\n");
            break;
        case UNKNOWN:
            printf("Unknown state\n");
            break;
        default:
            printf("Unknown state\n");
            break;
    }
}

void delay_seconds(int seconds) {
    struct timespec ts;
    ts.tv_sec = seconds;
    ts.tv_nsec = 0;
    nanosleep(&ts, NULL);
}

void traffic_light_simulation() {
    LightState current_state = RED;
    while (1) {
        print_state(current_state);
        switch (current_state) {
            case RED:
                delay_seconds(5);
                break;
            case GREEN:
                delay_seconds(4);
                break;
            case YELLOW:
                delay_seconds(2);
                break;
            case UNKNOWN:
                delay_seconds(5);
                break;
            default:
                delay_seconds(5);
                break;
        }
        current_state = get_next_state(current_state);
    }
}

int main() {
    printf("Starting traffic light simulation\n");
    traffic_light_simulation();
    return 0;
}
