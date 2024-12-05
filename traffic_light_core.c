#include "traffic_light.h"

LightState get_next_state(LightState current_state) {
    switch (current_state) {
        case RED:
            return GREEN;
        case GREEN:
            return YELLOW;
        case YELLOW:
            return RED;
        case UNKNOWN:
            return UNKNOWN;
        default:
            return UNKNOWN;
    }
}
