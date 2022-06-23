OBJS = main.o print.o input.o
TARGET = test
cc = gcc
CFLAGS = -g
LDFLAGS = -L. -lmine
$(TARGET) : $(OBJS)
	$(cc) -o $(TARGET) $(OBJS) $(LDFLAGS)
.c.o :
	$(cc) $(CFLAGS) -c $< -o $@
clean :
	rm -f *.o test
