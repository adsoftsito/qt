#ifndef PERSONA_H
#define PERSONA_H

#include <QString>

class Persona
{
private:
    QString nombre;
    int edad;

public:
    Persona();  // Constructor vacío
    Persona(QString nombre, int edad);  // Constructor con parámetros

    void setNombre(QString nombre);
    QString getNombre() const;

    void setEdad(int edad);
    int getEdad() const;

    void saludar() const;
};

#endif // PERSONA_H
