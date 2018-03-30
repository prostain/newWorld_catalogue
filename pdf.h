#ifndef PDF_H
#define PDF_H

#include <iostream>
#include <QString>
#include <QSqlQuery>
#include <QTextDocument>
#include <QPdfWriter>


class Pdf:public QTextDocument{

private:

    QString myFile;
    QString myText;
    QPdfWriter * monPDF;

public:

    Pdf (QObject *parent, QString monDocument);

    void ecrireTexte(QString leTexte);

    void chargerImage(QString chemin);

    void imprimer();

}

#endif // PDF_H
