student_heap: address.o date.o main.o student.o
	g++ -g address.o date.o main.o student.o -o student_heap

main.o: main.cpp
	g++ -c -g main.cpp

student.o: student.h student.cpp
	g++ -c -g student.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

date.o: date.h date.cpp
	g++ -c -g date.cpp

clean:
	rm *.o
	rm student_heap

run: student_heap
	./student_heap
