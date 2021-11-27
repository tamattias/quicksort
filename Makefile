CFLAGS := -Wall -ansi -pedantic

quicksort: quicksort.c test.c
	$(CC) $(CFLAGS) quicksort.c test.c -o quicksort
