#include <gtest/gtest.h>
#include "../src/envioFedEx.h"

namespace {
    TEST(EnvioFedEx_CalculoEnvio_Test, Test_DistanciaMayor500_PesoMayor10) {
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

    TEST(EnvioFedEx_CalculoEnvio_Test, Test_DistanciaMayor500_PesoMenorIgual10) {
        /// AAA

        // Arange - se configura el escenario
        EnvioFedEx* envio = new EnvioFedEx(9, 4600);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 50;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioFedEx_CalculoEnvio_Test, Test_DistanciaMenorIgual500_PesoMayor10) {
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

    TEST(EnvioFedEx_CalculoEnvio_Test, Test_DistanciaMenorIgual500_PesoMenorIgual10) {
        /// AAA

        // Arange - se configura el escenario
        EnvioFedEx* envio = new EnvioFedEx(5, 400);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 35;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  



}