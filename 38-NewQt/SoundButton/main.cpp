#include <QApplication>
#include <QPushButton>
#include <QMediaPlayer>
#include <QMediaContent>
#include <QStyleOptionButton>
#include <QStyle>
#include <QUrl>
#include <QDir>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QPushButton button;
    QDir::currentPath();
    button.setStyleSheet("QPushButton {"
                            "border-image: url(../up.png);"
                         "}"
                         "QPushButton:pressed {"
                            "border-image: url(../down.png);"
                         "}");
    button.setFixedSize(100,100);
    QObject::connect(&button, &QPushButton::clicked, [&app](){
        QMediaPlayer player;
        player.setMedia(QUrl::fromLocalFile(":/mp/bip.mp3"));
        player.setVolume(50);
        player.play();

    });
    button.show();
    return QApplication::exec();
}
