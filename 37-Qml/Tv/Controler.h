#ifndef TV_CONTROLER_H
#define TV_CONTROLER_H

#include "QMainWindow"
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class TvControler : public QMainWindow
{
    Q_OBJECT
public slots:
    void set_0() { changeChanel(0); }
    void set_1() { changeChanel(1); }
    void set_2() { changeChanel(2); }
    void set_3() { changeChanel(3); }
    void set_4() { changeChanel(4); }
    void set_5() { changeChanel(5); }
    void set_6() { changeChanel(6); }
    void set_7() { changeChanel(7); }
    void set_8() { changeChanel(8); }
    void set_9() { changeChanel(9); }
    void plus()
    {
        if(volume != 100 && working)
        {
            changeChanel(chanel, 10);
        }
    }
    void minus()
    {
        if(volume != 0 && working)
        {
            changeChanel(chanel, -10);
        }
    }
    void next()
    {
        if(chanel != 9 && working)
        {
            chanel++;
            changeChanel(chanel);
        }
    }
    void previous()
    {
        if(chanel != 0 && working)
        {
            chanel--;
            changeChanel(chanel);
        }
    }

    void start_end()
    {
        if(!working)
        {
            textEdit->setText("Volume: " + QString::number(volume) + "% | Chanel " + QString::number(chanel));
            working = true;
        }else
        {
            textEdit->setText("");
            working = false;
        }

    }
public:
    void changeChanel(int number, int value = 0)
    {
        if(working)
        {
            volume += value;
            chanel = number;
            textEdit->setText("Volume: " + QString::number(volume) + "% | Chanel " + QString::number(chanel));
        }
    }
    int volume = 0;
    int chanel = 0;
    bool working = false;
    QTextEdit *textEdit = nullptr;

    TvControler(QWidget *parent = nullptr): QMainWindow(parent) {};
    ~TvControler()
    {
        delete textEdit;
    }
};

#endif //TV_CONTROLER_H
