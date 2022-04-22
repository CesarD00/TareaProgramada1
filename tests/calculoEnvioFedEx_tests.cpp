#include <gtest/gtest.h>
#include "../src/envioFedEx.h"

namespace {
    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_DistanciaMayor500_PesoMayor10) {
        /// AAA

        // Arange - se configura el escenario
        EnvioFedEx* envio = new EnvioFedEx(11, 501);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 60;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }   

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_DistanciaMayor500_PesoMenor10) {
        /// AAA

        // Arange - se configura el escenario
        EnvioFedEx* envio = new EnvioFedEx(9, 501);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 50;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_DistanciaMenor500_PesoMayor10) {
        /// AAA

        // Arange - se configura el escenario
        EnvioFedEx* envio = new EnvioFedEx(11, 499);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 45;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_DistanciaMenor500_PesoMenor10) {
        /// AAA

        // Arange - se configura el escenario
        EnvioFedEx* envio = new EnvioFedEx(9, 499);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 35;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_DistanciaIgual500_PesoIgual10) {
        /// AAA

        // Arange - se configura el escenario
        EnvioFedEx* envio = new EnvioFedEx(10, 500);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 35;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_DistanciaIgual500_PesoMenor10) {
        /// AAA

        // Arange - se configura el escenario
        EnvioFedEx* envio = new EnvioFedEx(9, 500);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 35;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_DistanciaIgual500_PesoMayor10) {
        /// AAA

        // Arange - se configura el escenario
        EnvioFedEx* envio = new EnvioFedEx(11, 500);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 45;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    } 

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_DistanciaMenor500_PesoIgual10) {
        /// AAA

        // Arange - se configura el escenario
        EnvioFedEx* envio = new EnvioFedEx(10, 499);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 35;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_DistanciaMayor500_PesoIgual10) {
        /// AAA

        // Arange - se configura el escenario
        EnvioFedEx* envio = new EnvioFedEx(10, 501);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 50;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

}