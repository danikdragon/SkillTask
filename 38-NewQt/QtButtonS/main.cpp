#include <QApplication>
#include <QPushButton>
#include <QMediaContent>
#include <QMediaPlayer>
#include <QDir>
#include <iostream>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QPushButton button;
    button.setStyleSheet("QPushButton {"
                         "border-image: url(../up.png);"
                         "}"
                         "QPushButton:pressed {"
                         "border-image: url(../down.png);"
                         "}");
    button.setFixedSize(100,100);

    QMediaPlayer player;
    player.setMedia(QUrl::fromLocalFile( "../bip.mp3"));
    player.setVolume(50);

    QObject::connect(&button, &QPushButton::clicked, [&player](){
        player.play();
    });

    button.show();

    return QApplication::exec();
}
