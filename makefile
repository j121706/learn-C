CC = gcc

SRCDIR = src
OBJDIR = output

%.a:
	mkdir -p $(OBJDIR)
	$(CC) -o $(OBJDIR)/$(*).exe $(SRCDIR)/$(*).c
	$(OBJDIR)/$(*).exe

clean:
	@rm -f $(OBJDIR)/*.exe $(OBJDIR)/*.o
	@echo ---Done---
