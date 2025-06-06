/********************************************************************************
** Form generated from reading UI file 'caster.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASTER_H
#define UI_CASTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Caster
{
public:
    QWidget *_central;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *image;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QWidget *_main;
    QGridLayout *gridLayout;
    QLineEdit *port;
    QLabel *_ip;
    QLabel *label;
    QLineEdit *ip;
    QLabel *swRevMatch;
    QLabel *_port;
    QSpacerItem *verticalSpacer_3;
    QPushButton *shallower;
    QPushButton *deeper;
    QPushButton *connect;
    QPushButton *freeze;
    QWidget *_rawdata;
    QGridLayout *gridLayout_2;
    QPushButton *request;
    QCheckBox *lzo;
    QProgressBar *progress;
    QPushButton *download;
    QSpacerItem *verticalSpacer_2;
    QWidget *_overlays;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *labelText;
    QLabel *label_4;
    QPushButton *addTrace;
    QPushButton *addLabel;
    QLabel *label_3;
    QPushButton *clearScreen;
    QPushButton *captureImage;
    QSpacerItem *verticalSpacer_4;
    QWidget *_render;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *render;
    QLabel *imuData;
    QStatusBar *status;

    void setupUi(QMainWindow *Caster)
    {
        if (Caster->objectName().isEmpty())
            Caster->setObjectName(QString::fromUtf8("Caster"));
        Caster->resize(621, 556);
        _central = new QWidget(Caster);
        _central->setObjectName(QString::fromUtf8("_central"));
        verticalLayout = new QVBoxLayout(_central);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        image = new QVBoxLayout();
        image->setSpacing(6);
        image->setObjectName(QString::fromUtf8("image"));

        verticalLayout->addLayout(image);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        tabWidget = new QTabWidget(_central);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        _main = new QWidget();
        _main->setObjectName(QString::fromUtf8("_main"));
        gridLayout = new QGridLayout(_main);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        port = new QLineEdit(_main);
        port->setObjectName(QString::fromUtf8("port"));

        gridLayout->addWidget(port, 1, 1, 1, 1);

        _ip = new QLabel(_main);
        _ip->setObjectName(QString::fromUtf8("_ip"));

        gridLayout->addWidget(_ip, 0, 0, 1, 1);

        label = new QLabel(_main);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        ip = new QLineEdit(_main);
        ip->setObjectName(QString::fromUtf8("ip"));

        gridLayout->addWidget(ip, 0, 1, 1, 1);

        swRevMatch = new QLabel(_main);
        swRevMatch->setObjectName(QString::fromUtf8("swRevMatch"));
        swRevMatch->setFrameShape(QFrame::Shape::StyledPanel);

        gridLayout->addWidget(swRevMatch, 2, 1, 1, 1);

        _port = new QLabel(_main);
        _port->setObjectName(QString::fromUtf8("_port"));

        gridLayout->addWidget(_port, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        shallower = new QPushButton(_main);
        shallower->setObjectName(QString::fromUtf8("shallower"));
        shallower->setEnabled(false);

        gridLayout->addWidget(shallower, 2, 2, 1, 1);

        deeper = new QPushButton(_main);
        deeper->setObjectName(QString::fromUtf8("deeper"));
        deeper->setEnabled(false);

        gridLayout->addWidget(deeper, 3, 2, 1, 1);

        connect = new QPushButton(_main);
        connect->setObjectName(QString::fromUtf8("connect"));

        gridLayout->addWidget(connect, 0, 2, 1, 1);

        freeze = new QPushButton(_main);
        freeze->setObjectName(QString::fromUtf8("freeze"));
        freeze->setEnabled(false);

        gridLayout->addWidget(freeze, 1, 2, 1, 1);

        tabWidget->addTab(_main, QString());
        _rawdata = new QWidget();
        _rawdata->setObjectName(QString::fromUtf8("_rawdata"));
        gridLayout_2 = new QGridLayout(_rawdata);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        request = new QPushButton(_rawdata);
        request->setObjectName(QString::fromUtf8("request"));
        request->setEnabled(false);

        gridLayout_2->addWidget(request, 0, 0, 1, 1);

        lzo = new QCheckBox(_rawdata);
        lzo->setObjectName(QString::fromUtf8("lzo"));
        lzo->setChecked(true);

        gridLayout_2->addWidget(lzo, 3, 0, 1, 1);

        progress = new QProgressBar(_rawdata);
        progress->setObjectName(QString::fromUtf8("progress"));
        progress->setValue(0);

        gridLayout_2->addWidget(progress, 2, 0, 1, 1);

        download = new QPushButton(_rawdata);
        download->setObjectName(QString::fromUtf8("download"));
        download->setEnabled(false);

        gridLayout_2->addWidget(download, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 1);

        tabWidget->addTab(_rawdata, QString());
        _overlays = new QWidget();
        _overlays->setObjectName(QString::fromUtf8("_overlays"));
        gridLayout_3 = new QGridLayout(_overlays);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(_overlays);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        labelText = new QLineEdit(_overlays);
        labelText->setObjectName(QString::fromUtf8("labelText"));

        gridLayout_3->addWidget(labelText, 0, 1, 1, 3);

        label_4 = new QLabel(_overlays);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFrameShape(QFrame::Shape::StyledPanel);

        gridLayout_3->addWidget(label_4, 1, 1, 1, 3);

        addTrace = new QPushButton(_overlays);
        addTrace->setObjectName(QString::fromUtf8("addTrace"));

        gridLayout_3->addWidget(addTrace, 2, 1, 1, 1);

        addLabel = new QPushButton(_overlays);
        addLabel->setObjectName(QString::fromUtf8("addLabel"));
        addLabel->setEnabled(false);

        gridLayout_3->addWidget(addLabel, 2, 0, 1, 1);

        label_3 = new QLabel(_overlays);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        clearScreen = new QPushButton(_overlays);
        clearScreen->setObjectName(QString::fromUtf8("clearScreen"));

        gridLayout_3->addWidget(clearScreen, 2, 3, 1, 1);

        captureImage = new QPushButton(_overlays);
        captureImage->setObjectName(QString::fromUtf8("captureImage"));
        captureImage->setEnabled(false);

        gridLayout_3->addWidget(captureImage, 2, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_4, 3, 2, 1, 1);

        tabWidget->addTab(_overlays, QString());
        _render = new QWidget();
        _render->setObjectName(QString::fromUtf8("_render"));
        verticalLayout_3 = new QVBoxLayout(_render);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        render = new QVBoxLayout();
        render->setSpacing(6);
        render->setObjectName(QString::fromUtf8("render"));

        verticalLayout_3->addLayout(render);

        imuData = new QLabel(_render);
        imuData->setObjectName(QString::fromUtf8("imuData"));
        imuData->setMaximumSize(QSize(16777215, 30));
        imuData->setFrameShape(QFrame::Shape::StyledPanel);

        verticalLayout_3->addWidget(imuData);

        tabWidget->addTab(_render, QString());

        verticalLayout->addWidget(tabWidget);

        Caster->setCentralWidget(_central);
        status = new QStatusBar(Caster);
        status->setObjectName(QString::fromUtf8("status"));
        Caster->setStatusBar(status);

        retranslateUi(Caster);
        QObject::connect(connect, SIGNAL(clicked()), Caster, SLOT(onConnect()));
        QObject::connect(request, SIGNAL(clicked()), Caster, SLOT(onRequest()));
        QObject::connect(download, SIGNAL(clicked()), Caster, SLOT(onDownload()));
        QObject::connect(freeze, SIGNAL(clicked()), Caster, SLOT(onFreeze()));
        QObject::connect(shallower, SIGNAL(clicked()), Caster, SLOT(onShallower()));
        QObject::connect(deeper, SIGNAL(clicked()), Caster, SLOT(onDeeper()));
        QObject::connect(addLabel, SIGNAL(clicked()), Caster, SLOT(onAddLabel()));
        QObject::connect(addTrace, SIGNAL(clicked()), Caster, SLOT(onAddTrace()));
        QObject::connect(captureImage, SIGNAL(clicked()), Caster, SLOT(onCaptureImage()));
        QObject::connect(clearScreen, SIGNAL(clicked()), Caster, SLOT(onClearScreen()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Caster);
    } // setupUi

    void retranslateUi(QMainWindow *Caster)
    {
        Caster->setWindowTitle(QCoreApplication::translate("Caster", "Caster", nullptr));
        port->setInputMask(QCoreApplication::translate("Caster", "#####", nullptr));
        port->setText(QCoreApplication::translate("Caster", "5828", nullptr));
        _ip->setText(QCoreApplication::translate("Caster", "IP Address", nullptr));
        label->setText(QCoreApplication::translate("Caster", "SW Revision", nullptr));
        ip->setInputMask(QCoreApplication::translate("Caster", "000.000.000.000", nullptr));
        ip->setText(QCoreApplication::translate("Caster", "192.168.1.1", nullptr));
        swRevMatch->setText(QString());
        _port->setText(QCoreApplication::translate("Caster", "Port", nullptr));
        shallower->setText(QCoreApplication::translate("Caster", "Shallower", nullptr));
        deeper->setText(QCoreApplication::translate("Caster", "Deeper", nullptr));
        connect->setText(QCoreApplication::translate("Caster", "Connect", nullptr));
        freeze->setText(QCoreApplication::translate("Caster", "Freeze", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(_main), QCoreApplication::translate("Caster", "Main", nullptr));
        request->setText(QCoreApplication::translate("Caster", "Request", nullptr));
        lzo->setText(QCoreApplication::translate("Caster", "Use LZO Compression", nullptr));
        download->setText(QCoreApplication::translate("Caster", "Download...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(_rawdata), QCoreApplication::translate("Caster", "Raw Data", nullptr));
        label_2->setText(QCoreApplication::translate("Caster", "Text", nullptr));
        label_4->setText(QCoreApplication::translate("Caster", "Use right mouse button to draw", nullptr));
        addTrace->setText(QCoreApplication::translate("Caster", "Add Trace", nullptr));
        addLabel->setText(QCoreApplication::translate("Caster", "Add Label", nullptr));
        label_3->setText(QCoreApplication::translate("Caster", "Overlay", nullptr));
        clearScreen->setText(QCoreApplication::translate("Caster", "Clear Screen", nullptr));
        captureImage->setText(QCoreApplication::translate("Caster", "Capture Image", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(_overlays), QCoreApplication::translate("Caster", "Overlays", nullptr));
        imuData->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(_render), QCoreApplication::translate("Caster", "3D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Caster: public Ui_Caster {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASTER_H
