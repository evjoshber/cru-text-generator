exec: bin/exec
debug: bin/debug

bin/exec: ./src/driver.cc ./src/functions.cc ./includes/functions.hpp
	g++ -Iincludes ./src/driver.cc ./src/functions.cc ./includes/functions.hpp -o $@

bin/debug: ./src/driver.cc ./src/functions.cc ./includes/functions.hpp
	g++ -g -O0 -Iincludes ./src/driver.cc ./src/functions.cc ./includes/functions.hpp -o $@

clean:
	rm -rf bin/*