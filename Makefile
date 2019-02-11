SHELL=CMD

mybook: mybook.o pry_agenda.o
	gcc -Wall -omybook mybook.o pry_agenda.o

mybook.o: mybook.c
	gcc -Wall -c mybook.c

pry_agenda.o: pry_agenda.c
	gcc -Wall -c pry_agenda.c

cleanall:
	rm *.o
