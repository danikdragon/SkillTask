#include <QApplication>
#include <QPushButton>
#include <QMediaContent>
#include <QMediaPlayer>
#include <QStyleOptionButton>
#include <QStyle>
#include <QUrl>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QPushButton button;
    button.setStyleSheet("QPushButton {"
                            "border-image: url(../SoundButton/up.png);"
                         "}"
                         "QPushButton:pressed {"
                            "border-image: url(../SoundButton/down.png);"
                         "}");
    button.setFixedSize(100,100);

    QObject::connect(&button, &QPushButton::clicked, [](){
        QMediaPlayer player;
        player.setMedia(QUrl::fromLocalFile("../SoundButton/bip.mp3"));
        player.setVolume(100);
        player.play();
    });

    button.show();
    return QApplication::exec();
}
