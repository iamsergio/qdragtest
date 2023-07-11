import QtQuick 2.4

Rectangle {
    id: root
    color: "yellow"
    MouseArea {
        anchors.fill: parent
        onPressed: {
            console.log("On pressed!");
            _controller.startQDrag(); // With Qt5 and Kwayland, this only works every other time
        }
    }
}
