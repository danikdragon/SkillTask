#ifndef CALCULATOR_CALCULATORMAINWINDOW_H
#define CALCULATOR_CALCULATORMAINWINDOW_H
#include <QtWidgets/QTextEdit>
#include <QMainWindow>
#include <QString>
#include <string>
#include <cmath>
using namespace std;

class CalculatorMainWindow : public QMainWindow {
    Q_OBJECT
public slots:
    void add_0(){ textEdit->setText(textEdit->toPlainText() + "0"); }
    void add_1(){ textEdit->setText(textEdit->toPlainText() + "1"); }
    void add_2(){ textEdit->setText(textEdit->toPlainText() + "2"); }
    void add_3(){ textEdit->setText(textEdit->toPlainText() + "3"); }
    void add_4(){ textEdit->setText(textEdit->toPlainText() + "4"); }
    void add_5(){ textEdit->setText(textEdit->toPlainText() + "5"); }
    void add_6(){ textEdit->setText(textEdit->toPlainText() + "6"); }
    void add_7(){ textEdit->setText(textEdit->toPlainText() + "7"); }
    void add_8(){ textEdit->setText(textEdit->toPlainText() + "8"); }
    void add_9(){ textEdit->setText(textEdit->toPlainText() + "9"); }
    void backSpace()
    {
        QString text = textEdit->toPlainText();
        if (!text.isEmpty())
        {
            if(text.back() == '.')
                dothCheck = false;
            text.chop(1);
            textEdit->setText(text);
        }
    }
    void remove()
    {
        textEdit->setText(textEdit->toPlainText() = "");
        lastOperator = ' ';
        dothCheck = false;
        setWindowTitle("Calculator");
    }
    void cleare()
    {
        textEdit->setText(textEdit->toPlainText() = "");
        dothCheck = false;
    }
    void dif()
    {
        this->action();
        lastOperator = '/';
    }
    void multiply()
    {
        this->action();
        lastOperator = '*';
    }
    void plus()
    {
        this->action();
        lastOperator = '+';
    }
    void minus()
    {
        this->action();
        lastOperator = '-';
    }


    void dot()
    {
        if(!textEdit->toPlainText().isEmpty() && textEdit->toPlainText().back() != '.' && !dothCheck)
        {
            dothCheck = true;
            textEdit->setText(textEdit->toPlainText() + ".");
        }
    }

    void equals()
    {
        if(!textEdit->toPlainText().isEmpty() && lastOperator != ' ')
        {
            if (textEdit->toPlainText().back() == '.')
            {
                QString text = textEdit->toPlainText();
                text.chop(1);
                textEdit->setText(textEdit->toPlainText() + text);
            }
            if(textEdit->toPlainText() != "-")
            {
                this->checkActions(lastOperator);
                setWindowTitle("Calculator");
                lastOperator = ' ';
                textEdit->setText(QString::number(sum));
                dothCheck = false;
                lastValue = 0;
                sum = 0;
                for (int i = 0; i < textEdit->toPlainText().size(); ++i)
                    if(textEdit->toPlainText()[i] == '.')
                        dothCheck = true;
            }
        }
        else if(textEdit->toPlainText().isEmpty() && lastOperator != ' ')
        {
            if(textEdit->toPlainText() != "-")
            {
                textEdit->setText(QString::number(lastValue));
                char tempOperator = lastOperator;
                this->checkActions(lastOperator);
                lastOperator = tempOperator;
            }
        }
    }

    void Negative()
    {
        if(!textEdit->toPlainText().isEmpty())
        {
            QString text = textEdit->toPlainText();
            if (text.front() == '-')
            {
                text.remove(0,1);
                textEdit->setText(text);
            }else
            {
                text.insert(0, '-');
                textEdit->setText(text);
            }
        }
    }
    void percent()
    {
        if(lastOperator != ' ')
            textEdit->setText(QString::number(sum * textEdit->toPlainText().toFloat() / 100));
        else
            textEdit->setText("0");
    }

    void fractionX()
    {
        textEdit->setText(QString::number(1 / textEdit->toPlainText().toFloat()));
    }
    void squared()
    {
        textEdit->setText(QString::number(textEdit->toPlainText().toFloat() * textEdit->toPlainText().toFloat()));
    }
    void root()
    {
        textEdit->setText(QString::number(sqrt(textEdit->toPlainText().toFloat())));
    }
public:
    CalculatorMainWindow(QWidget *parent = nullptr): QMainWindow(parent) {};
    ~CalculatorMainWindow()
    {
        delete textEdit;
    }
    void action()
    {
        if(lastOperator != ' ')
            this->checkActions(lastOperator);
        else
        {
            sum = textEdit->toPlainText().toFloat();
            textEdit->setText(textEdit->toPlainText() = "");
            dothCheck = false;
            setWindowTitle("Calculator| Sum: " + QString::number(sum) );
        }
    }
    void checkActions(char oper)
    {
        switch (oper)
        {
            case '/':
                if(textEdit->toPlainText().toFloat() == 0)
                {
                    textEdit->setText(textEdit->toPlainText() = "");
                    error = true;
                }
                else
                    sum /= textEdit->toPlainText().toFloat();
                break;
            case '*':
                sum *= textEdit->toPlainText().toFloat();
                break;
            case '+':
                sum += textEdit->toPlainText().toFloat();
                break;
            case '-':
                sum -= textEdit->toPlainText().toFloat();
                break;
        }
        lastOperator = ' ';
        lastValue = textEdit->toPlainText().toFloat();
        textEdit->setText(textEdit->toPlainText() = "");
        dothCheck = false;
        if(!error)
            setWindowTitle("Calculator| Sum: " + QString::number(sum) );
        else
            setWindowTitle("Calculator| Error");
        error = false;
    }

    QTextEdit *textEdit = nullptr;
private:
    bool error = false;
    bool dothCheck = false;
    float lastValue = 0;
    float sum = 0;
    char lastOperator = ' ';
};

#endif //CALCULATOR_CALCULATORMAINWINDOW_H