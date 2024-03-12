#include <QApplication>
#include "./ui_Calculator.h"
#include "CalculatorMainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Ui::MainWindow ui;
    CalculatorMainWindow calculator(nullptr);
    ui.setupUi(&calculator);
    calculator.textEdit = ui.textEdit;
    calculator.show();
    return QApplication::exec();
}
