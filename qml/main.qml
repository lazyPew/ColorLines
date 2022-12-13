import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.3

import "MainElements/"

ApplicationWindow {
    visible: true
    width: 480
    height: 540
    title: qsTr("Color Lines")

    maximumHeight: Screen.desktopAvailableHeight
    minimumHeight: 640
    minimumWidth: 480
    maximumWidth: Screen.desktopAvailableWidth
    
    header: MainHeader{ id: mainHeader }
    footer: MainFooter { id: mainFooter }

    MainPage{ id: mainPage }
    

}
