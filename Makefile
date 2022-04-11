FLAGS = -g -c --std=c++17

version_debug:
	mkdir -p bin
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ $(FLAGS) src/envioFedEx.cpp -o bin/envioFedEx.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/calculoEnvio bin/envioServicioPostal.o bin/envioFedEx.o bin/main.o 

clean:
	rm -Rf bin					