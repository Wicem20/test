#ifndef Color_h
#define Color_h
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>

    QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
    QT_END_NAMESPACE

class Color : public QWidget
{
    Q_OBJECT

public:
    Color(QWidget *parent = nullptr);
    Color(QString couleur);
    ~Color();

private:
//Ui::Widget *ui;
};
#endif // Color_h
