FLAGS = -g -c --std=c++17

version_debug:
	mkdir -p bin
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ $(FLAGS) src/envioFedEx.cpp -o bin/envioFedEx.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/calculoEnvio bin/envioServicioPostal.o bin/envioFedEx.o bin/main.o 

test_calculo_envio_postal:
	mkdir -p bin
	g++ $(FLAGS) tests/calculoEnvioServicioPostal_tests.cpp -o bin/calculoEnvioServicioPostal_tests.o
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ -g -o bin/tests bin/calculoEnvioServicioPostal_tests.o bin/envioServicioPostal.o -lgtest -lgtest_main -lpthread	

test_calculo_envio_fedex:
	mkdir -p bin
	g++ $(FLAGS) tests/calculoEnvioFedEx_tests.cpp -o bin/calculoEnvioFedEx_tests.o
	g++ $(FLAGS) src/envioFedEx.cpp -o bin/envioFedEx.o
	g++ -g -o bin/tests bin/calculoEnvioFedEx_tests.o bin/envioFedEx.o -lgtest -lgtest_main -lpthread	

clean:
	rm -Rf bin					