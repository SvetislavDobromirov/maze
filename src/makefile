REPORTFOLDER = report/

all: install

install:
	cd source; qmake; make
#/source/make

run:
	./source/maze.app/Contents/MacOS/maze

uninstall:

dist:

dvi:

tests: clean
	g++ -c  ./source/eller.cpp -lgtest -lgtest_main -pthread --coverage
	g++ -o run_test *.o ./tests/start_test.cc  -lgtest -lgtest_main -pthread  --coverage
	./run_test


clean:
	rm -rf *.o run_test *.gcno report *.gcda
	cd source; make clean; rm -rf maze.app .qmake.stash

gcov_report: tests
	mkdir -p gcov/
	mkdir report/
	lcov -t "s21_matrix_oop.a" -o run_test -c -d .
	genhtml run_test -o $(REPORTFOLDER)
	xdg-open $(REPORTFOLDER)index.html

push:
	git add --all
	git commit -ms
	git push --all


dvi:
	cd source; 	
	cd source; open html/index.html

dist: uninstall clean
#tar -cf ./3DViewer_v1_0.tar * 

