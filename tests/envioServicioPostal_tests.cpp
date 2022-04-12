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
        EnvioServicioPostal* envio = new EnvioServicioPostal(1, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 300;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }        

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso2_Clase1_Retorna300) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(2, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 300;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso3_Clase1_Retorna300) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(3, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 300;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }    

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso0_Clase2_Retorna28) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(0, 1000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 28;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }   

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso1_Clase2_Retorna28) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(1, 1000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 28;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso2_Clase2_Retorna28) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(2, 1000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 28;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso3_Clase2_Retorna28) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(3, 1000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 28;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso0_Clase3_Retorna12) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(0, 1000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 12;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso1_Clase3_Retorna12) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(1, 1000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 12;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso2_Clase3_Retorna12) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(2, 1000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 12;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso3_Clase3_Retorna12) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(3, 1000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 12;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso4_Clase1_Retorna450) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(4, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 450;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }     

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso5_Clase1_Retorna450) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(5, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 450;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }        

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso6_Clase1_Retorna450) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(6, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 450;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso7_Clase1_Retorna450) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(7, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 450;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso8_Clase1_Retorna450) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(8, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 450;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }     

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso4_Clase2_Retorna53) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(4, 1000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 53;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }   

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso5_Clase2_Retorna53) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(5, 1000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 53;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso6_Clase2_Retorna53) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(6, 1000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 53;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso7_Clase2_Retorna53) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(7, 1000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 53;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso8_Clase2_Retorna53) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(8, 1000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 53;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    } 

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso4_Clase3_Retorna12) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(4, 1000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 12;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso5_Clase3_Retorna12) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(5, 1000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 12;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso6_Clase3_Retorna12) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(6, 1000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 12;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso7_Clase3_Retorna12) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(7, 1000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 12;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }  

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso8_Clase3_Retorna12) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(8, 1000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 12;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    } 

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso9_Clase1_Retorna600) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(9, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 600;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso9_Clase2_Retorna75) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(9, 1000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 75;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso9_Clase3_Retorna12) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(9, 1000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 12;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso10_Clase1_Retorna600) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(10, 1000, 1);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 600;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso10_Clase2_Retorna75) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(10, 1000, 2);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 75;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

    TEST(EnvioServicioPostal_CalculoEnvio_Test, Test_Peso10_Clase3_Retorna12) {
        /// AAA

        // Arange - se configura el escenario
        EnvioServicioPostal* envio = new EnvioServicioPostal(10, 1000, 3);

        // Act - se ejecuta la operación
        double actual = envio->calculoEnvio();
        double esperada = 12;

        delete envio;

        // Assert - se validan los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }
}