#include <stdio.h>
// Codigo del alumno: Juan Ignacio Wagner
// Link del Git personal: https://github.com/juaniw07
// Link del Git grupal (Lider: Miguel Angel Chura Crespo): https://github.com/juaniw07

// Punto 2

// Función para convertir centímetros a pulgadas
float cm_a_pulgadas(float centimetros)
{
    return centimetros / 2.54;
}

// Función para convertir pulgadas a centímetros
float pulgadas_a_cm(float pulgadas)
{
    return pulgadas * 2.54;
}

int main() {
    // Un ejemplo
    float centimetros = 80;
    float pulgadas = 31.5;

    // Conversión de centímetros a pulgadas
    float resultado_pulgadas = cm_a_pulgadas(centimetros);
    printf("%.2f centímetros son igual a %.4f pulgadas\n", centimetros, resultado_pulgadas);

    // Conversión de pulgadas a centímetros
    float resultado_centimetros = pulgadas_a_cm(pulgadas);
    printf("%.2f pulgadas son igual a %.4f centímetros\n", pulgadas, resultado_centimetros);

    return 0;
}