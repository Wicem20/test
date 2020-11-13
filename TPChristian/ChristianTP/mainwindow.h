#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <Color.h>
#include <Drapeau.h>
#include <QPushButton>
#include <QHBoxLayout>
#include <QStackedLayout>
#include <QLabel>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //--- Déclaration des boutons ---//
    QPushButton *B1 = new QPushButton("ALLEMAGNE");
    QPushButton *B2 = new QPushButton("Belgique");
    QPushButton *B3 = new QPushButton("Estonie");
    QPushButton *B4 = new QPushButton("France");
    QPushButton *B5 = new QPushButton("Irlande");
    QPushButton *B6 = new QPushButton("Italie");
    QPushButton *B7 = new QPushButton("PaysBas");
    QPushButton *B8 = new QPushButton("Luxembourg");
    QPushButton *B9 = new QPushButton("Roumanie");
    QPushButton *B10 = new QPushButton("Espagne");



    public slots:
    void Drapeau_ALLEMAGNE();
    void Drapeau_Belgique();
    void Drapeau_Estonie();
    void Drapeau_France();
    void Drapeau_Irlande();
    void Drapeau_Italie();
    void Drapeau_PaysBas();
    void Drapeau_Luxembourg();
    void Drapeau_Roumanie();
    void Drapeau_Espagne();


    private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
