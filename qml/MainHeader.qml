import QtQuick 2.11
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.3
import QtQuick.Controls.Material 2.3
import QtQml 2.2

ToolBar {

    background: Rectangle {
        id: back
        color: Material.primary
        anchors.fill: parent
    }

    RowLayout{
        anchors.fill: parent
        spacing: 15

        ToolButton{
            id: newGameButton
            text: qsTr("НОВАЯ ИГРА")
            onClicked: controller.startNewGame()
        }
        Item{Layout.fillWidth: true}

        ToolButton{
            id: exitButton
            text: qsTr("ВЫХОД")
            onClicked: controller.exit()

        }
    }
}
