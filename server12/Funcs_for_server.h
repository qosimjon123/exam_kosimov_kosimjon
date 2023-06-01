#ifndef FUNCS_FOR_SERVER_H
#define FUNCS_FOR_SERVER_H
#include <QObject>
#include "mytcpserver.h"
void Parsing(QByteArray message);
QString Cesar(int key, QString message);
#endif // FUNCS_FOR_SERVER_H
