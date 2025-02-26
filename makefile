student_heap: address.o date.o main.o
	g++ -g address.o date.o main.o -o student_heap

main.o:
	g++ -c -g main.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

date.o: date.h date.cpp
	g++ -c -g date.cpp

clean:
	rm *.o
	rm student_heap

run: student_heap
	./student_heap
