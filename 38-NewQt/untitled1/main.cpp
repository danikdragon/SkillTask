#include <QApplication>
#include "ide.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QMainWindow main;
    Ui_MainWindow ui;
    ui.setupUi(&main);
    main.show();
    return QApplication::exec();
}
