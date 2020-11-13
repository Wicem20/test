#include "mafenetre.h"
#include "ui_mafenetre.h"
#include <QString>

MaFenetre::MaFenetre(QWidget *parent)
    : QDialog(parent)
{
    // 1. Instancier les widgets
    valeur = new QLineEdit(this);
    resultat = new QLabel(this);
    unite = new QLabel(this);
    choixConversion = new QComboBox(this);
    bConvertir = new QPushButton(QString::fromUtf8("Convertir"), this);
    bQuitter = new QPushButton(QString::fromUtf8("Quitter"), this);

    // 2. Personnaliser les widgets
    valeur->setStyleSheet("color: #111111; background-color: #f1f1f1 ;");
    valeur->clear();
    QFont font("Roboto", 12, QFont::Bold);
    choixConversion->setFont(font);
    choixConversion->addItem(QString::fromUtf8("Decimal -> Binaire"));
    choixConversion->addItem(QString::fromUtf8("Binaire -> Decimal"));
    resultat->setStyleSheet("color: #fc7600;");
    unite->setStyleSheet("color: #fc7600;");

    // 3. Instancier les layouts
    QHBoxLayout *hLayout1 = new QHBoxLayout();
    QHBoxLayout *hLayout2 = new QHBoxLayout();
    QVBoxLayout *mainLayout = new QVBoxLayout();

    // 4. Positionner les widgets dans les layouts
    hLayout1->addWidget(valeur);
    hLayout1->addWidget(choixConversion);
    hLayout1->addWidget(resultat);
    hLayout1->addWidget(unite);
    hLayout2->addWidget(bConvertir);
    hLayout2->addWidget(bQuitter);
    mainLayout->addLayout(hLayout1);
    mainLayout->addLayout(hLayout2);
    setLayout(mainLayout);

    // 5. Connecter les signaux et slots
    connect(bConvertir, SIGNAL(clicked()), this, SLOT(convertir()));
    connect(this, SIGNAL(actualiser()), this, SLOT(convertir()));
    connect(choixConversion, SIGNAL(currentIndexChanged(int)), this,SLOT(permuter()));
    connect(bQuitter, SIGNAL(clicked()), qApp, SLOT(quit()));
    // bonus : conversion automatique
    connect(valeur, SIGNAL(textChanged(const QString &)), this, SLOT(convertir()));

    // 6. Personnaliser la fenêtre
    setWindowTitle(QString::fromUtf8("Convertisseur Décimal-Binaire"));
    adjustSize();
    // on lance une conversion
    //convertir();
    // ou :
    emit actualiser();
}
    // 7. Définir les slots
    void MaFenetre::convertir()
    {
    QString decimal = valeur->text();
        if (decimal.isEmpty())
        {
            resultat->setText(QString::fromUtf8("--.--"));
            afficherUnite();
            return;
        }




    switch (choixConversion->currentIndex())
    {
        case DECIMAL_BINAIRE:
            resultat->setText(QString::fromUtf8("%1").arg(9 *decimal.toDouble() / 5 + 32, 0, 'f', 2));
            break;
        case BINAIRE_DECIMAL:
            double binaire = 5 *(decimal.toDouble() - 32 ) / 9;
            resultat->setText(QString::number(binaire, 'f', 2));
            break;
    }
}
    void MaFenetre::permuter()
    {
        if(resultat->text() != "--.--")
    {
        valeur->setText(resultat->text());
        emit actualiser();
    }
    afficherUnite();
    }


    // 8. Définir les méthodes
    void MaFenetre::afficherUnite()
    {
    switch (choixConversion->currentIndex())
    {
    case DECIMAL_BINAIRE:
    unite->setText(QString::fromUtf8(" °F"));
    break;
    case BINAIRE_DECIMAL:
    unite->setText(QString::fromUtf8(" °C"));
    break;
    }
    }



MaFenetre::~MaFenetre()
{

}

