#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
, ui(new Ui::MainWindow)
{
ui->setupUi(this);
setWindowTitle("Drapeaux tricolores UE");
resize(700,400);

    QPixmap bkgnd ("/home/sn1/Bureau/Drapeau/test.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    //--- Layout des boutons ---//
    QVBoxLayout *Pagelayout = new QVBoxLayout;
    QHBoxLayout *Hlayout1 = new QHBoxLayout;
    QHBoxLayout *Hlayout2 = new QHBoxLayout;
    Pagelayout->addLayout(Hlayout1);
    Pagelayout->addLayout(Hlayout2);
    this->B1->setGeometry(50, 100, 100, 50);



    //Complétez le dimensionnement de tous les boutons
    //--- Connexion du signal "clicked()" avec le slot de chaque drapeau ---//
    connect(B1, SIGNAL(clicked()),this, SLOT(Drapeau_ALLEMAGNE()));
    connect(B2, SIGNAL(clicked()),this, SLOT(Drapeau_Belgique()));
    connect(B3, SIGNAL(clicked()),this, SLOT(Drapeau_Estonie()));
    connect(B4, SIGNAL(clicked()),this, SLOT(Drapeau_France()));
    connect(B5, SIGNAL(clicked()),this, SLOT(Drapeau_Irlande()));
    connect(B6, SIGNAL(clicked()),this, SLOT(Drapeau_Italie()));
    connect(B7, SIGNAL(clicked()),this, SLOT(Drapeau_PaysBas()));
    connect(B8, SIGNAL(clicked()),this, SLOT(Drapeau_Luxembourg()));
    connect(B9, SIGNAL(clicked()),this, SLOT(Drapeau_Roumanie()));
    connect(B10, SIGNAL(clicked()),this, SLOT(Drapeau_Espagne));

    // Complétez toutes les connexions
    //--- Ajout des bouton au Widget Horizotal ---//
    Hlayout1->addWidget(B1);
    Hlayout1->addWidget(B2);
    Hlayout1->addWidget(B3);
    Hlayout1->addWidget(B4);
    Hlayout1->addWidget(B5);
    Hlayout2->addWidget(B6);
    Hlayout2->addWidget(B7);
    Hlayout2->addWidget(B8);
    Hlayout2->addWidget(B9);
    Hlayout2->addWidget(B10);



    //Ajouter les boutons aux widgets Hlayout1 et Hlayout2

    QWidget *widget = new QWidget;
    widget->setLayout(Pagelayout);
        setCentralWidget(widget);
}
    void MainWindow::Drapeau_ALLEMAGNE(){ Drapeau *D = new Drapeau("Black","red","gold","Horizontale","Allemagne");}
    void MainWindow::Drapeau_Belgique(){ Drapeau *D = new Drapeau("Black","gold","red","Vertical","Belgique");}
    void MainWindow::Drapeau_Estonie(){ Drapeau *D = new Drapeau("Blue","Black","white","Horizontale","Estonie");}
    void MainWindow::Drapeau_France(){ Drapeau *D = new Drapeau("Blue","white","red","Vertical","France");}
    void MainWindow::Drapeau_Irlande(){ Drapeau *D = new Drapeau("Green" ," White" , "orange","Vertical","Irlande");}
    void MainWindow::Drapeau_Italie(){ Drapeau *D = new Drapeau("Green","White","Red","Vertical","Italie");}
    void MainWindow::Drapeau_PaysBas(){ Drapeau *D = new Drapeau("red","white","blue","Horizontale","PaysBas");}
    void MainWindow::Drapeau_Luxembourg(){ Drapeau *D = new Drapeau("red","white","cyan","Horizontale","Luxembourg");}
    void MainWindow::Drapeau_Roumanie(){ Drapeau *D = new Drapeau("blue","yellow","red","Vertical","Roumanie");}
    void MainWindow::Drapeau_Espagne(){ Drapeau *D = new Drapeau("autre","Espagne")}
    // Complétez tous les slots
    MainWindow::~MainWindow()
{
    delete ui;
}
