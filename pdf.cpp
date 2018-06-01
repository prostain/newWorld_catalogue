#include "pdf.h"
#include "QDebug"
#include <QPageSize>

Pdf::Pdf(QObject *parent, QString monDocument ="Catalogue_NewWorld.pdf")
    :QTextDocument(parent)
{
    myFile = monDocument;

        myText = "<!DOCTYPE>"
                "<html lg=fr>"
                "<head>"
               "<meta charset=\"utf8\">"
                "</head>"
                   "<body>";
}

void Pdf::ecrireTexte(QString leTexte)
{
    qDebug("void Pdf::ecrireTexte(QString leTexte)");
        myText +="<p>" + leTexte + "</p>" ;
        myText +="<br /><hr /><br />";
}

void Pdf::chargerImage(QString chemin)
{
    qDebug("void Pdf::chargerImage(QString chemin)");
     myText+="<div align=\"center\"><img src=" + chemin + "/></div>";
     myText+="<br /><br />";
}

void Pdf::imprimer()
{
    qDebug("void Pdf::imprimer()");

       myText+="</body>"
                 "</html>";

       //qDebug()<<myText;
       setHtml(myText);
       qDebug("setHtml(myText);");

       monPDF = new QPdfWriter(myFile);
       qDebug("QPdfWriter * monPDF = new QPdfWriter(myFile);");



       monPDF->setTitle("Liste des produits de la semaines");
       qDebug("monPDF->setTitle();");

       monPDF->A4;
       qDebug("l.52 pdf.cpp");

       //printer.begin(monPDF);
       print(monPDF);
       qDebug("fin pdf.cpp");
}
