#include <QCoreApplication>
#include "emisor.h"
#include "receptor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Emisor emisor;
    Receptor receptor;

    QObject::connect(&emisor, &Emisor::procesoIniciado,
                     &receptor, &Receptor::recibirMensaje);

    emisor.iniciarProceso();

    return 0;
}
