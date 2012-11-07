
#include <QVBoxLayout>
#include <QDialog>
#include <QDialogButtonBox>

#include "MainWindow.hpp"

#include "libHeaven/ColorSchemata/ColorManager.hpp"

MainWindow::MainWindow()
{
    setupUi();
}

void MainWindow::onFileOpen()
{
}

void MainWindow::onSettingsColors()
{
    QDialog d;

    QDialogButtonBox* box = new QDialogButtonBox;
    box->setStandardButtons( QDialogButtonBox::Ok );
    connect( box,SIGNAL(accepted()), &d, SLOT(accept()) );

    QVBoxLayout* l = new QVBoxLayout;
    l->addWidget( Heaven::ColorManager::self().createEditorWidget() );
    l->addWidget( box );

    d.setLayout( l );
    d.setWindowTitle( tr( "Color Schema" ) );
    d.exec();
}

void MainWindow::setupUi()
{
    setupActions( this );
    setMenuBar( mbMain->menuBarFor( this ) );

    resize( 1000, 700 );

    Heaven::ColorManager::self().addSchemaFromFile(
        QLatin1String( "Default" ),
        QLatin1String( ":/Default.hcs" ) );

    Heaven::ColorManager::self().setActiveSchema(
        QLatin1String( "Default" ) );

//    Heaven::ColorManager::self().initialize();
}
