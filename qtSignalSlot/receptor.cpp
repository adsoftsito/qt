#include "receptor.h"

Receptor::Receptor(QObject *parent)
    : QObject(parent)
{
}

void Receptor::recibirMensaje(QString mensaje)
{
    qDebug() << "Receptor recibió:" << mensaje;
}
