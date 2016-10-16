#!/usr/bin/env python

from PyQt4 import QtCore, QtGui

class MainWindow(QtGui.QMainWindow):
    InsertTextButton = 10

    def __init__(self):
        super(MainWindow, self).__init__()

        self.scene = QtGui.QGraphicsScene()
        self.scene.setSceneRect(QtCore.QRectF(0, 0, 1000, 500))

        layout = QtGui.QHBoxLayout()

        self.view = QtGui.QGraphicsView(self.scene)
        layout.addWidget(self.view)

        self.widget = QtGui.QWidget()
        self.widget.setLayout(layout)

        self.setCentralWidget(self.widget)
        self.setWindowTitle("Nexi Designer")

if __name__ == '__main__':

    import sys

    app = QtGui.QApplication(sys.argv)

    mainWindow = MainWindow()
    mainWindow.setGeometry(100, 100, 800, 500)
    mainWindow.show()

    sys.exit(app.exec_())
