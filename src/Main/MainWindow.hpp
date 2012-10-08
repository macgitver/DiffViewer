
#ifndef DV_MAINWINDOW_HPP
#define DV_MAINWINDOW_HPP

#include <QMainWindow>

#include "hic_MainWindowActions.h"

class MainWindow : public QMainWindow, private MainWindowActions
{
    Q_OBJECT
public:
    MainWindow();

private slots:
    void onFileOpen();

private:
    void setupUi();
};

#endif
