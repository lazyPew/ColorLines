import QtQuick 2.11
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.3
import QtQuick.Controls.Material 2.3
import QtQml 2.2

ToolBar {
    id: root
    property var fontSize: Qt.application.font.pixelSize * 1.6

    width: parent.width
    background: Rectangle {
        id: back
        color: Material.primary
        anchors.fill: parent
    }
    Label
    {
        anchors.fill: parent
        font.pixelSize: fontSize
        text: controller.points
    }
}
