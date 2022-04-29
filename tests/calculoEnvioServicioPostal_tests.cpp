#include <gtest/gtest.h>
#include "../src/envioServicioPostal.h"

namespace {
    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso0a3_Clase1) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(2, 5000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 1500;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso0a3_Clase2) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(2, 5000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 140;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso4a8_Clase1) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(6, 5000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 2250;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso4a8_Clase2) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(6, 5000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 265;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_PesoIgualMayor9_Clase1) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(10, 5000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 3000;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }   

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_PesoIgualMayor9_Clase2) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(10, 5000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 375;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }   

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_PesoCualquiera_Clase3) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(7, 5000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 60;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }   

    
}