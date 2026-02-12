#include <QCoreApplication>
#include <QTextStream>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream in(stdin);
    QTextStream out(stdout);

    out << "Ingresa tu nombre: " << Qt::endl;
    out.flush();  // IMPORTANTE

    QString nombre = in.readLine();

    out << "Hola " << nombre << Qt::endl;

    return 0;  // ← No usar a.exec()
}
