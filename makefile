all: target
target: src.o delete.o ent.o search.o mod.o sort.o print.o
	gcc -o target src.o ent.o search.o mod.o sort.o print.o delete.o -lm

src.o:src.c
	gcc -c -o src.o src.c
delete.o:delete.c
	gcc -c -o delete.o delete.c
ent.o:ent.c
	gcc -c -o ent.o ent.c
search.o:search.c
	gcc -c -o search.o search.c
mod.o:mod.c
	gcc -c -o mod.o mod.c
sort.o:sort.c
	gcc -c -o sort.o sort.c
print.o:print.c
	gcc -c -o print.o print.c
clean:
	rm *.o target

