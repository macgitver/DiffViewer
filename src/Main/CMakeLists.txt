
PROJECT( DiffViewer )

QT_PREPARE( Core Gui Widgets Main )

INCLUDE_DIRECTORIES(
    ${HEAVEN_SOURCE_DIR}
    ${DiffViewer_BINARY_DIR}
)

SET( SRC_FILES

    main.cpp
    MainWindow.cpp
)

SET( HDR_FILES
    MainWindow.hpp
)

SET( HID_FILES
    MainWindowActions.hid
)

SET( RCC_FILES
    DiffViewers.rcc
)

QT_MOC( MOC_FILES ${HDR_FILES} )
QT_RCC( RCC_DATA QRC_FILES ${RCC_FILES} )
HIC( HIC_FILES ${HID_FILES} )

ADD_QT_EXECUTABLE(
    DiffViewer WIN32

    ${SRC_FILES}
    ${HDR_FILES}
    ${MOC_FILES}
    ${HIC_FILES}
    ${RCC_FILES}
    ${QRC_FILES}
    ${RCC_DATA}
)

TARGET_LINK_LIBRARIES(
    DiffViewer

    Heaven
    DiffViews
)
