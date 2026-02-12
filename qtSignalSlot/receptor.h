#ifndef RECEPTOR_H
#define RECEPTOR_H

#include <QObject>
#include <QDebug>

class Receptor : public QObject
{
    Q_OBJECT

public:
    explicit Receptor(QObject *parent = nullptr);

public slots:
    void recibirMensaje(QString mensaje);
};

#endif // RECEPTOR_H
