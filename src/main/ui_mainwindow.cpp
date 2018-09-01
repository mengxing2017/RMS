#include "ui_mainwindow.h"
#include <QGraphicsOpacityEffect>

void Ui_MainWindow::setupUi(QMainWindow *MainWindow) {
  //窗体
  if (MainWindow->objectName().isEmpty())
    MainWindow->setObjectName(QStringLiteral("MainWindow"));
  MainWindow->resize(1200, 750);
  QPalette mainwindowPal(MainWindow->palette());
  mainwindowPal.setBrush(
      QPalette::Background,
      QBrush(QPixmap(":/icon/res/images/main_background.jpeg")));
  MainWindow->setAutoFillBackground(true);
  MainWindow->setPalette(mainwindowPal);
  //  MainWindow->setWindowFlag(Qt::FramelessWindowHint);

  action_AuthorityManagement = new QAction(MainWindow);
  action_AuthorityManagement->setObjectName(
      QStringLiteral("action_AuthorityManagement"));
  action_Start = new QAction(MainWindow);
  action_Start->setObjectName(QStringLiteral("action_Start"));

  QIcon icon;
  icon.addFile(QStringLiteral(":/icon/res/images/Start.png"), QSize(),
               QIcon::Normal, QIcon::Off);
  action_Start->setIcon(icon);
  action_AddorReduce = new QAction(MainWindow);
  action_AddorReduce->setObjectName(QStringLiteral("action_AddorReduce"));

  QIcon icon1;
  icon1.addFile(QStringLiteral(":/icon/res/images/Add.png"), QSize(),
                QIcon::Normal, QIcon::Off);
  action_AddorReduce->setIcon(icon1);
  action_CustomerSettlement = new QAction(MainWindow);
  action_CustomerSettlement->setObjectName(
      QStringLiteral("action_CustomerSettlement"));

  QIcon icon2;
  icon2.addFile(QStringLiteral(":/icon/res/images/Reckoning.png"), QSize(),
                QIcon::Normal, QIcon::Off);
  action_CustomerSettlement->setIcon(icon2);
  action_DaySettlement = new QAction(MainWindow);
  action_DaySettlement->setObjectName(QStringLiteral("action_DaySettlement"));

  QIcon icon3;
  icon3.addFile(QStringLiteral(":/icon/res/images/Stat.png"), QSize(),
                QIcon::Normal, QIcon::Off);
  action_DaySettlement->setIcon(icon3);
  action_Login = new QAction(MainWindow);
  action_Login->setObjectName(QStringLiteral("action_Login"));

  QIcon icon4;
  icon4.addFile(QStringLiteral(":/icon/res/images/Login.png"), QSize(),
                QIcon::Normal, QIcon::Off);
  action_Login->setIcon(icon4);
  action_MenuInfo = new QAction(MainWindow);
  action_MenuInfo->setObjectName(QStringLiteral("action_MenuInfo"));
  action_UserRegistered = new QAction(MainWindow);
  action_UserRegistered->setObjectName(QStringLiteral("action_UserRegistered"));

  QIcon icon5;
  icon5.addFile(QStringLiteral(":/icon/res/images/addUser.png"), QSize(),
                QIcon::Normal, QIcon::Off);
  action_UserRegistered->setIcon(icon5);
  action_PurchaseQuery = new QAction(MainWindow);
  action_PurchaseQuery->setObjectName(QStringLiteral("action_PurchaseQuery"));
  action_DayIncomeQuery = new QAction(MainWindow);
  action_DayIncomeQuery->setObjectName(QStringLiteral("action_DayIncomeQuery"));
  action_MonthIncomeQuery = new QAction(MainWindow);
  action_MonthIncomeQuery->setObjectName(
      QStringLiteral("action_MonthIncomeQuery"));
  action_DatabaseBackup = new QAction(MainWindow);
  action_DatabaseBackup->setObjectName(QStringLiteral("action_DatabaseBackup"));
  action_Quit = new QAction(MainWindow);
  action_Quit->setObjectName(QStringLiteral("action_Quit"));

  QIcon icon6;
  icon6.addFile(QStringLiteral(":/icon/res/images/Quit.png"), QSize(),
                QIcon::Normal, QIcon::Off);
  action_Quit->setIcon(icon6);

  centralWidget = new QWidget(MainWindow);
  centralWidget->setObjectName(QStringLiteral("centralWidget"));
  MainWindow->setCentralWidget(centralWidget);

  menuBar = new QMenuBar(MainWindow);
  menuBar->setObjectName(QStringLiteral("menuBar"));
  menuBar->setGeometry(QRect(0, 0, 757, 24));

  menu_UserLogin = new QMenu(menuBar);
  menu_UserLogin->setObjectName(QStringLiteral("menu_UserLogin"));
  menu_ManagerOperation = new QMenu(menuBar);
  menu_ManagerOperation->setObjectName(QStringLiteral("menu_ManagerOperation"));
  menu_ManagerReception = new QMenu(menu_ManagerOperation);
  menu_ManagerReception->setObjectName(QStringLiteral("menu_ManagerReception"));
  menu_ManagerBackstage = new QMenu(menu_ManagerOperation);
  menu_ManagerBackstage->setObjectName(QStringLiteral("menu_ManagerBackstage"));
  menu_FinanceStatistics = new QMenu(menuBar);
  menu_FinanceStatistics->setObjectName(
      QStringLiteral("menu_FinanceStatistics"));
  menu_SystemManager = new QMenu(menuBar);
  menu_SystemManager->setObjectName(QStringLiteral("menu_SystemManager"));
  menu_SystemMaintain = new QMenu(menu_SystemManager);
  menu_SystemMaintain->setObjectName(QStringLiteral("menu_SystemMaintain"));
  menu_Help = new QMenu(menuBar);
  menu_Help->setObjectName(QStringLiteral("menu_Help"));
  MainWindow->setMenuBar(menuBar);
  mainToolBar = new QToolBar(MainWindow);
  mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
  MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
  statusBar = new QStatusBar(MainWindow);
  statusBar->setObjectName(QStringLiteral("statusBar"));
  MainWindow->setStatusBar(statusBar);

  menuBar->addAction(menu_UserLogin->menuAction());
  menuBar->addAction(menu_ManagerOperation->menuAction());
  menuBar->addAction(menu_FinanceStatistics->menuAction());
  menuBar->addAction(menu_SystemManager->menuAction());
  menuBar->addAction(menu_Help->menuAction());
  menu_UserLogin->addAction(action_Login);
  menu_UserLogin->addAction(action_Quit);
  menu_ManagerOperation->addAction(menu_ManagerReception->menuAction());
  menu_ManagerOperation->addAction(menu_ManagerBackstage->menuAction());
  menu_ManagerReception->addAction(action_Start);
  menu_ManagerReception->addAction(action_AddorReduce);
  menu_ManagerReception->addAction(action_CustomerSettlement);
  menu_ManagerReception->addAction(action_DaySettlement);
  menu_ManagerBackstage->addAction(action_MenuInfo);
  menu_ManagerBackstage->addAction(action_UserRegistered);
  menu_FinanceStatistics->addAction(action_PurchaseQuery);
  menu_FinanceStatistics->addAction(action_DayIncomeQuery);
  menu_FinanceStatistics->addAction(action_MonthIncomeQuery);
  menu_SystemManager->addAction(menu_SystemMaintain->menuAction());
  menu_SystemManager->addAction(action_AuthorityManagement);
  menu_SystemMaintain->addAction(action_DatabaseBackup);
  mainToolBar->addAction(action_Login);
  mainToolBar->addAction(action_Start);
  mainToolBar->addAction(action_AddorReduce);
  mainToolBar->addAction(action_CustomerSettlement);
  mainToolBar->addAction(action_DaySettlement);
  mainToolBar->addAction(action_UserRegistered);
  mainToolBar->addAction(action_Quit);
  QPalette mainToolBarPal(mainToolBar->palette());
  mainToolBarPal.setColor(QPalette::Background, QColor(0, 0, 0, 0));
  mainToolBarPal.setColor(QPalette::Foreground, QColor(255, 255, 255, 255));
  mainToolBar->setPalette(mainToolBarPal);

  retranslateUi(MainWindow);

  QMetaObject::connectSlotsByName(MainWindow);
} // setupUi

void Ui_MainWindow::retranslateUi(QMainWindow *MainWindow) {
  MainWindow->setWindowTitle(
      QApplication::translate("MainWindow", "MainWindow", nullptr));

  action_AuthorityManagement->setText(QApplication::translate(
      "MainWindow", "\347\224\250\346\210\267\346\235\203\351\231\220\347\256"
                    "\241\347\220\206",
      nullptr));
  action_Start->setText(QApplication::translate(
      "MainWindow", "\345\274\200\345\247\213\347\202\271\350\217\234",
      nullptr));
  action_AddorReduce->setText(QApplication::translate(
      "MainWindow", "\345\212\240\350\217\234\345\207\217\350\217\234",
      nullptr));
  action_CustomerSettlement->setText(QApplication::translate(
      "MainWindow", "\351\241\276\345\256\242\347\273\223\350\264\246",
      nullptr));
  action_DaySettlement->setText(QApplication::translate(
      "MainWindow", "\346\234\254\346\227\245\347\273\223\347\256\227",
      nullptr));
  action_Login->setText(QApplication::translate(
      "MainWindow", "\347\263\273\347\273\237\347\231\273\345\275\225",
      nullptr));
  action_MenuInfo->setText(QApplication::translate(
      "MainWindow", "\350\217\234\345\223\201\344\277\241\346\201\257",
      nullptr));
  action_UserRegistered->setText(QApplication::translate(
      "MainWindow", "\345\221\230\345\267\245\346\263\250\345\206\214",
      nullptr));
  action_PurchaseQuery->setText(QApplication::translate(
      "MainWindow", "\350\277\233\350\264\247\346\237\245\350\257\242",
      nullptr));
  action_DayIncomeQuery->setText(QApplication::translate(
      "MainWindow",
      "\346\227\245\346\224\266\345\205\245\346\237\245\350\257\242", nullptr));
  action_MonthIncomeQuery->setText(QApplication::translate(
      "MainWindow",
      "\346\234\210\346\224\266\345\205\245\346\237\245\350\257\242", nullptr));
  action_DatabaseBackup->setText(QApplication::translate(
      "MainWindow",
      "\346\225\260\346\215\256\345\272\223\345\244\207\344\273\275", nullptr));
  action_Quit->setText(QApplication::translate(
      "MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237",
      nullptr));
  menu_UserLogin->setTitle(QApplication::translate(
      "MainWindow", "\347\224\250\346\210\267\347\231\273\345\275\225",
      nullptr));
  menu_ManagerOperation->setTitle(QApplication::translate(
      "MainWindow", "\347\256\241\347\220\206\346\223\215\344\275\234",
      nullptr));
  menu_ManagerReception->setTitle(QApplication::translate(
      "MainWindow", "\345\211\215\345\217\260\347\256\241\347\220\206",
      nullptr));
  menu_ManagerBackstage->setTitle(QApplication::translate(
      "MainWindow", "\345\220\216\345\217\260\347\256\241\347\220\206",
      nullptr));
  menu_FinanceStatistics->setTitle(QApplication::translate(
      "MainWindow", "\350\264\242\345\212\241\347\273\237\350\256\241",
      nullptr));
  menu_SystemManager->setTitle(QApplication::translate(
      "MainWindow", "\347\263\273\347\273\237\347\256\241\347\220\206",
      nullptr));
  menu_SystemMaintain->setTitle(QApplication::translate(
      "MainWindow", "\347\263\273\347\273\237\347\273\264\346\212\244",
      nullptr));
  menu_Help->setTitle(QApplication::translate(
      "MainWindow", "\345\270\256\345\212\251", nullptr));
} // retranslateUi
