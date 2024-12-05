#include <stdio.h>
#include <assert.h>
#include "traffic_light.h"

void test_get_next_state() {
    assert(get_next_state(RED) == GREEN);
    printf("Test RED to GREEN passed\n");

    assert(get_next_state(GREEN) == YELLOW);
    printf("Test GREEN to YELLOW passed\n");

    assert(get_next_state(YELLOW) == RED);
    printf("Test YELLOW to RED passed\n");

    assert(get_next_state(42) == UNKNOWN);
    printf("Test invalid entry to UNKNOWN passed\n");

    assert(get_next_state(UNKNOWN) == UNKNOWN);
    printf("Test UNKNOWN to UNKNOWN passed\n");
}

int main() {
    printf("Running tests\n");
    test_get_next_state();
    printf("All tests passed\n");
    return 0;
}
