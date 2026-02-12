#include "persona.h"
#include <QDebug>

Persona::Persona()
{
    nombre = "";
    edad = 0;
}

Persona::Persona(QString nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
}

void Persona::setNombre(QString nombre)
{
    this->nombre = nombre;
}

QString Persona::getNombre() const
{
    return nombre;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

int Persona::getEdad() const
{
    return edad;
}

void Persona::saludar() const
{
    qDebug() << "Hola, soy" << nombre << "y tengo" << edad << "años.";
}
