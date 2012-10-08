
PROJECT( DiffViewer )

QT_PREPARE( Core Gui Widgets )

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

QT_MOC( MOC_FILES ${HDR_FILES} )
HIC( HIC_FILES ${HID_FILES} )

ADD_QT_EXECUTABLE(
    DiffViewer WIN32

    ${SRC_FILES}
    ${HDR_FILES}
    ${MOC_FILES}
    ${HIC_FILES}
)

TARGET_LINK_LIBRARIES(
    DiffViewer

    Heaven
    DiffViews
)
