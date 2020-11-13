#ifndef MAFENETRE_H
#define MAFENETRE_H
#define DECIMAL_BINAIRE 0
#define BINAIRE_DECIMAL 1

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QComboBox>
#include <QDoubleValidator>
#include <QBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class MaFenetre; }
QT_END_NAMESPACE

class MaFenetre : public QDialog
{
    Q_OBJECT

public:
    MaFenetre(QWidget *parent = 0 );
    ~MaFenetre();

private:
    QLineEdit *valeur;
    QLabel *resultat;
    QLabel *unite;
    QComboBox *choixConversion;
    QPushButton *bConvertir;
    QPushButton *bQuitter;
    QDoubleValidator *doubleValidator;
    void afficherUnite();

signals:
    void actualiser();
    private slots:
    void convertir();
    void permuter();

};
#endif // MAFENETRE_H
