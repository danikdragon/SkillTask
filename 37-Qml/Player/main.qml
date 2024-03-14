import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Window {
    width: 640
    height: 480
    visible: true
    color: "grey"
    title: qsTr("Плеер")

    Rectangle {
        color: "black"
        anchors {
            left: parent.left
            top: parent.top
            right: parent.right
            bottom: progressBarVideo.top
        }
    }
    ProgressBar {
        id: progressBarVideo
        anchors {
            left: parent.left
            right: parent.right
            bottom: buttonRow.top
        }
    }
    Row {
        id: buttonRow
        anchors{
            bottom: parent.bottom
            horizontalCenter: parent.horizontalCenter
        }
        spacing: 10

        Button {
            text: "▶️"
            font.pointSize: 14;
        }

        Button {
            text: "⏸️"
            font.pointSize: 14;
        }

        Button {
            text: "⏹"
            font.pointSize: 14;
        }

        Button {
            text: "⏪️"
            font.pointSize: 14;
        }

        Button {
            text: "⏩️"
            font.pointSize: 14;
        }
    }
}
