#ifndef EMISOR_H
#define EMISOR_H

#include <QObject>

class Emisor : public QObject
{
    Q_OBJECT

public:
    explicit Emisor(QObject *parent = nullptr);

    void iniciarProceso();

signals:
    void procesoIniciado(QString mensaje);
};

#endif // EMISOR_H
