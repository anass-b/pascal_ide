/*
*  main.cpp
*  ========
*
*/

#include <QApplication>
#include <QtWidgets>
#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
	 
    MainWindow fenetre;
    fenetre.show();

    return app.exec();
}


