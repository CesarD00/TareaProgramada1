FLAGS = -g -c --std=c++17

version_debug:
	mkdir -p bin
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ $(FLAGS) src/envioFedEx.cpp -o bin/envioFedEx.o
	g++ $(FLAGS) src/main.cpp -o bin/main
	g++ -g -o bin/calculoEnvio bin/envioServicioPostal.o bin/envioFedEx.o bin/main 

test:
	mkdir -p bin
	g++ $(FLAGS) tests/envioServicioPostal_tests.cpp -o bin/envioServicioPostal_tests.o
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ -g -o bin/tests bin/envioServicioPostal_tests.o bin/envioServicioPostal.o -lgtest -lgtest_main -lpthread	

clean:
	rm -Rf bin					