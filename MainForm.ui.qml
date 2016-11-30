import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    width: 640
    height: 480

    Button {
        id: seven
        x: 70
        y: 131
        text: qsTr("7")
    }

    Button {
        id: eight
        x: 178
        y: 131
        text: qsTr("8")
    }

    Button {
        id: nine
        x: 297
        y: 131
        text: qsTr("9")
    }

    Button {
        id: one
        x: 70
        y: 238
        text: qsTr("1")
    }

    Button {
        id: four
        x: 70
        y: 187
        text: qsTr("4")
    }

    Button {
        id: five
        x: 178
        y: 187
        text: qsTr("5")
    }

    Button {
        id: two
        x: 178
        y: 238
        text: qsTr("2")
    }

    Button {
        id: six
        x: 297
        y: 187
        text: qsTr("6")
    }

    Button {
        id: three
        x: 297
        y: 238
        text: qsTr("3")
    }

    Button {
        id: button10
        x: 70
        y: 291
        text: qsTr(".")
    }

    Button {
        id: zero
        x: 178
        y: 291
        text: qsTr("0")
    }

    Button {
        id: del
        x: 297
        y: 291
        text: qsTr("C")
    }

    Button {
        id: div
        x: 424
        y: 131
        text: qsTr("/")
    }

    Button {
        id: multi
        x: 424
        y: 187
        text: qsTr("x")
    }

    Button {
        id: minus
        x: 424
        y: 238
        text: qsTr("-")
    }

    Button {
        id: plus
        x: 424
        y: 291
        text: qsTr("+")
    }

    TextField {
        id: result
        x: 70
        y: 53
        width: 235
        height: 57
        placeholderText: qsTr("Text Field")
    }

    Button {
        id: equality
        x: 338
        y: 49
        width: 80
        height: 61
        text: qsTr("=")
    }

}
