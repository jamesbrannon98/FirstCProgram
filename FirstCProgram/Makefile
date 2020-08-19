SRCS := $(wildcard *.c)
OBJS := $(SRCS:%.c=%.o)
CFLAGS = -Wall
CC = gcc

driver: $(OBJS) 
	$(CC) $(CFLAGS) -o $@ $(OBJS) 

.PHONY: test
test: driver
	./driver
.PHONY: clean
clean:
	rm -fr $(OBJS) driver
