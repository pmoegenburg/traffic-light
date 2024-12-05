CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99
SIM_TARGET = traffic_light
TEST_TARGET = test_traffic_light
CORE_SRC = traffic_light_core.c
SIM_SRC = traffic_light.c
TEST_SRC = test_traffic_light.c

all: $(SIM_TARGET)

$(SIM_TARGET): $(SIM_SRC) $(CORE_SRC)
	$(CC) $(CFLAGS) -o $(SIM_TARGET) $(SIM_SRC) $(CORE_SRC)

test: $(TEST_SRC) $(CORE_SRC)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(TEST_SRC) $(CORE_SRC)

clean:
	rm -f $(SIM_TARGET) $(TEST_TARGET)