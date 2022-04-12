#include <gtest/gtest.h>
#include "../src/envioServicioPostal.h"

namespace {
    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso0_Clase1_Retorna300) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(0, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 300;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }     

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso1_Clase1_Retorna300) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(0, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 300;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }         
}