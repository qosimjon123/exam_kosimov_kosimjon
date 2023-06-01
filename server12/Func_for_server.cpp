#include "Funcs_for_server.h"
#include <QDebug>
#include <QCoreApplication>
#include "mytcpserver.h"
#include <QChar>
QString Cesar(int key, QString message)
{
    QString encryptedMessage;
    QString all;
    for (int i = 0; i < message.length(); i++)
    {
        QChar character = message[i];
        int charCode = character.unicode();

        if (charCode >= 32 && charCode <= 127) {
            charCode+=key;
            if (charCode>127){
                charCode=charCode%128+32;
            }

        }


        encryptedMessage.append(QChar::fromLatin1(charCode));
    }
    qDebug()<<encryptedMessage;
    QString b = QString::number(key);
    all=b+" "+message+"\n"+encryptedMessage;
    MyTcpServer::getInstance()->sendToClientSlot(all);
    return encryptedMessage;
}



void Parsing(QByteArray message){
//data format: funk_name$dat1$dat2$...
    QList<QByteArray> parts = message.split(' ');



    //for(const QByteArray& part : parts){
        //QList<QByteArray> pair = part.split('=');
    if(parts.size()!=2)
    {
        return;
    }
        int key;
        if (!parts[0].toInt())
        {
            QString a="NE ZADAN KLYUCH ";
            MyTcpServer::getInstance()->sendToClientSlot(a);
            return;
        }
        key=parts[0].toInt();
        Cesar(key,parts[1]);


}
