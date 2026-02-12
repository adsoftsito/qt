#include "emisor.h"

Emisor::Emisor(QObject *parent)
    : QObject(parent)
{
}

void Emisor::iniciarProceso()
{
    emit procesoIniciado("El proceso ha comenzado");
}
