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
}