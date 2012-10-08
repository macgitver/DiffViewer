
#include "MainWindow.hpp"

MainWindow::MainWindow()
{
    setupUi();
}

void MainWindow::onFileOpen()
{
}

void MainWindow::setupUi()
{
    setupActions( this );
    setMenuBar( mbMain->menuBarFor( this ) );

    resize( 1000, 700 );
}
