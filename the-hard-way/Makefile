CC 	   = gcc
CFLAGS = -Wall

SRCDIR = src
OBJDIR = output

%.a:
	mkdir -p $(OBJDIR)
	$(CC) -o $(OBJDIR)/$(*).exe $(SRCDIR)/$(*).c $(CFLAGS)
	$(OBJDIR)/$(*).exe

clean:
	rm -f $(OBJDIR)/*.exe $(OBJDIR)/*.o
	echo --Done--