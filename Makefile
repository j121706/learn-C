CC		= gcc
CFLAGS  = -Wall
CFLAGS += -g
# CFLAGS += -v

CLEAN = $(find ./ -type f -executable | xargs rm)

%.d:
	$(CC) $(CFLAGS) -o $(*) $(*).c

clean:
# find ./ -type f -executable | xargs rm	 