#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

typedef enum {
    RED,
    GREEN,
    YELLOW,
    UNKNOWN
} LightState;

LightState get_next_state(LightState current_state);

#endif // TRAFFIC_LIGHT_H
