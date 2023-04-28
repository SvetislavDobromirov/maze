all: install

install:
	cd source; qmake; make
#/source/make

run:
	./source/maze.app/Contents/MacOS/maze

uninstall:

dist:

dvi:

tests:

clean:
	cd source; make clean; rm -rf maze.app .qmake.stash

gcov_report: test
	mkdir -p gcov/
	mkdir report/
	lcov -t "s21_matrix_oop.a" -o $(REPORTFILE) -c -d .
	genhtml $(REPORTFILE) -o $(REPORTFOLDER)
	open $(REPORTFOLDER)index.html

push:
	git add --all
	git commit -ms
	git push --all


dvi:
	cd source; 	
	cd source; open html/index.html

dist: uninstall clean
#tar -cf ./3DViewer_v1_0.tar * 

