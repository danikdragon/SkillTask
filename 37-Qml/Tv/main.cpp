#include <QApplication>
#include <QPushButton>
#include "./ui_Controler.h"
#include "Controler.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    TvControler pult(nullptr);
    Ui::TvControler ui;
    ui.setupUi(&pult);
    pult.textEdit = ui.textEdit;
    pult.show();
    return QApplication::exec();
}