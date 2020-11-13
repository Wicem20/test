/********************************************************************************
** Form generated from reading UI file 'mafenetre.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAFENETRE_H
#define UI_MAFENETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_MaFenetre
{
public:

    void setupUi(QDialog *MaFenetre)
    {
        if (MaFenetre->objectName().isEmpty())
            MaFenetre->setObjectName(QString::fromUtf8("MaFenetre"));
        MaFenetre->resize(800, 600);

        retranslateUi(MaFenetre);

        QMetaObject::connectSlotsByName(MaFenetre);
    } // setupUi

    void retranslateUi(QDialog *MaFenetre)
    {
        MaFenetre->setWindowTitle(QApplication::translate("MaFenetre", "MaFenetre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MaFenetre: public Ui_MaFenetre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAFENETRE_H
