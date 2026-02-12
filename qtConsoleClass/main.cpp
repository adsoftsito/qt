#include <QCoreApplication>
#include "persona.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Persona p1("adsoftsito", 100);

    p1.saludar();

    return 0;
}
