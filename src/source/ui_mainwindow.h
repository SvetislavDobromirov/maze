/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *maze_open;
    QAction *cave_open;
    QAction *action;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *cave;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *open_maze_btn;
    QPushButton *clear_maze;
    QPushButton *save_maze_button;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *rows_spin;
    QLabel *label_2;
    QSpinBox *cols_spin;
    QPushButton *generate_maze_btn;
    QPushButton *find_way_btn;
    QWidget *menu_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *open_cave_btn;
    QPushButton *clear_cave_btn;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QSpinBox *cave_percent_spinBox;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QSpinBox *rows_cave_spin;
    QLabel *label_10;
    QSpinBox *cols_cave_spin;
    QPushButton *init_cave_btn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *spinBirth;
    QLabel *label_6;
    QSpinBox *spinDeath;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *auto_radioButton;
    QRadioButton *manual_radioButton_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QSpinBox *time_spinBox;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QSpinBox *steps_spinBox_2;
    QPushButton *generate_cave_btn;
    QFrame *line;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *widht_line_spin;
    QLabel *label_4;
    QComboBox *color_lines_comboBox;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 570);
        maze_open = new QAction(MainWindow);
        maze_open->setObjectName(QString::fromUtf8("maze_open"));
        cave_open = new QAction(MainWindow);
        cave_open->setObjectName(QString::fromUtf8("cave_open"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(520, 20, 281, 521));
        cave = new QWidget();
        cave->setObjectName(QString::fromUtf8("cave"));
        verticalLayoutWidget_2 = new QWidget(cave);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 10, 271, 182));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        open_maze_btn = new QPushButton(verticalLayoutWidget_2);
        open_maze_btn->setObjectName(QString::fromUtf8("open_maze_btn"));

        horizontalLayout_2->addWidget(open_maze_btn);

        clear_maze = new QPushButton(verticalLayoutWidget_2);
        clear_maze->setObjectName(QString::fromUtf8("clear_maze"));

        horizontalLayout_2->addWidget(clear_maze);


        verticalLayout_2->addLayout(horizontalLayout_2);

        save_maze_button = new QPushButton(verticalLayoutWidget_2);
        save_maze_button->setObjectName(QString::fromUtf8("save_maze_button"));

        verticalLayout_2->addWidget(save_maze_button);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        rows_spin = new QSpinBox(verticalLayoutWidget_2);
        rows_spin->setObjectName(QString::fromUtf8("rows_spin"));
        rows_spin->setMinimum(1);
        rows_spin->setMaximum(50);
        rows_spin->setValue(5);

        horizontalLayout->addWidget(rows_spin);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        cols_spin = new QSpinBox(verticalLayoutWidget_2);
        cols_spin->setObjectName(QString::fromUtf8("cols_spin"));
        cols_spin->setMinimum(1);
        cols_spin->setMaximum(50);
        cols_spin->setValue(5);

        horizontalLayout->addWidget(cols_spin);


        verticalLayout->addLayout(horizontalLayout);

        generate_maze_btn = new QPushButton(verticalLayoutWidget_2);
        generate_maze_btn->setObjectName(QString::fromUtf8("generate_maze_btn"));

        verticalLayout->addWidget(generate_maze_btn);

        find_way_btn = new QPushButton(verticalLayoutWidget_2);
        find_way_btn->setObjectName(QString::fromUtf8("find_way_btn"));

        verticalLayout->addWidget(find_way_btn);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidget->addTab(cave, QString());
        menu_2 = new QWidget();
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        verticalLayoutWidget = new QWidget(menu_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 261, 321));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        open_cave_btn = new QPushButton(verticalLayoutWidget);
        open_cave_btn->setObjectName(QString::fromUtf8("open_cave_btn"));

        horizontalLayout_10->addWidget(open_cave_btn);

        clear_cave_btn = new QPushButton(verticalLayoutWidget);
        clear_cave_btn->setObjectName(QString::fromUtf8("clear_cave_btn"));

        horizontalLayout_10->addWidget(clear_cave_btn);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        cave_percent_spinBox = new QSpinBox(verticalLayoutWidget);
        cave_percent_spinBox->setObjectName(QString::fromUtf8("cave_percent_spinBox"));
        cave_percent_spinBox->setMaximum(100);
        cave_percent_spinBox->setValue(50);

        horizontalLayout_5->addWidget(cave_percent_spinBox);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_6->addWidget(label_9);

        rows_cave_spin = new QSpinBox(verticalLayoutWidget);
        rows_cave_spin->setObjectName(QString::fromUtf8("rows_cave_spin"));
        rows_cave_spin->setMinimum(1);
        rows_cave_spin->setMaximum(50);
        rows_cave_spin->setValue(5);

        horizontalLayout_6->addWidget(rows_cave_spin);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);

        cols_cave_spin = new QSpinBox(verticalLayoutWidget);
        cols_cave_spin->setObjectName(QString::fromUtf8("cols_cave_spin"));
        cols_cave_spin->setMinimum(1);
        cols_cave_spin->setMaximum(50);
        cols_cave_spin->setValue(5);

        horizontalLayout_6->addWidget(cols_cave_spin);


        verticalLayout_3->addLayout(horizontalLayout_6);

        init_cave_btn = new QPushButton(verticalLayoutWidget);
        init_cave_btn->setObjectName(QString::fromUtf8("init_cave_btn"));

        verticalLayout_3->addWidget(init_cave_btn);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        spinBirth = new QSpinBox(verticalLayoutWidget);
        spinBirth->setObjectName(QString::fromUtf8("spinBirth"));
        spinBirth->setMaximum(8);
        spinBirth->setValue(3);

        horizontalLayout_4->addWidget(spinBirth);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        spinDeath = new QSpinBox(verticalLayoutWidget);
        spinDeath->setObjectName(QString::fromUtf8("spinDeath"));
        spinDeath->setMaximum(8);
        spinDeath->setValue(4);

        horizontalLayout_4->addWidget(spinDeath);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        auto_radioButton = new QRadioButton(verticalLayoutWidget);
        auto_radioButton->setObjectName(QString::fromUtf8("auto_radioButton"));
        auto_radioButton->setChecked(true);

        horizontalLayout_9->addWidget(auto_radioButton);

        manual_radioButton_2 = new QRadioButton(verticalLayoutWidget);
        manual_radioButton_2->setObjectName(QString::fromUtf8("manual_radioButton_2"));

        horizontalLayout_9->addWidget(manual_radioButton_2);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_7->addWidget(label_12);

        time_spinBox = new QSpinBox(verticalLayoutWidget);
        time_spinBox->setObjectName(QString::fromUtf8("time_spinBox"));
        time_spinBox->setMaximum(1000);

        horizontalLayout_7->addWidget(time_spinBox);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_8->addWidget(label_13);

        steps_spinBox_2 = new QSpinBox(verticalLayoutWidget);
        steps_spinBox_2->setObjectName(QString::fromUtf8("steps_spinBox_2"));
        steps_spinBox_2->setMinimum(1);
        steps_spinBox_2->setMaximum(20);

        horizontalLayout_8->addWidget(steps_spinBox_2);


        verticalLayout_3->addLayout(horizontalLayout_8);

        generate_cave_btn = new QPushButton(verticalLayoutWidget);
        generate_cave_btn->setObjectName(QString::fromUtf8("generate_cave_btn"));

        verticalLayout_3->addWidget(generate_cave_btn);

        tabWidget->addTab(menu_2, QString());
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 505, 491, 16));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 520, 273, 32));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        widht_line_spin = new QSpinBox(horizontalLayoutWidget_3);
        widht_line_spin->setObjectName(QString::fromUtf8("widht_line_spin"));
        widht_line_spin->setMinimum(1);
        widht_line_spin->setMaximum(10);
        widht_line_spin->setValue(2);

        horizontalLayout_3->addWidget(widht_line_spin);

        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        color_lines_comboBox = new QComboBox(horizontalLayoutWidget_3);
        color_lines_comboBox->addItem(QString());
        color_lines_comboBox->addItem(QString());
        color_lines_comboBox->addItem(QString());
        color_lines_comboBox->addItem(QString());
        color_lines_comboBox->setObjectName(QString::fromUtf8("color_lines_comboBox"));

        horizontalLayout_3->addWidget(color_lines_comboBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Maze", nullptr));
        maze_open->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\273\320\260\320\261\320\270\321\200\320\270\320\275\321\202", nullptr));
        cave_open->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\320\265\321\211\320\265\321\200\321\203", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        open_maze_btn->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        clear_maze->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        save_maze_button->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\320\270\320\271 \320\273\320\260\320\261\320\270\321\200\320\270\320\275\321\202", nullptr));
        label->setText(QApplication::translate("MainWindow", "Rows", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Colums", nullptr));
        generate_maze_btn->setText(QApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \320\273\320\260\320\261\320\270\321\200\320\270\320\275\321\202", nullptr));
        find_way_btn->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\277\321\203\321\202\321\214 \320\274\320\265\320\266\320\264\321\203 \320\264\320\262\321\203\320\274\321\217 \321\202\320\276\321\207\320\272\320\260\320\274\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(cave), QApplication::translate("MainWindow", "\320\233\320\260\320\261\320\270\321\200\320\270\320\275\321\202", nullptr));
        open_cave_btn->setText(QApplication::translate("MainWindow", "Open", nullptr));
        clear_cave_btn->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\276\321\201\321\202\321\214 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217: ", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "%", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Rows", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Colums", nullptr));
        init_cave_btn->setText(QApplication::translate("MainWindow", "\320\230\320\275\320\270\321\206\320\270\320\260\320\273\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\265\321\210\320\265\321\200\321\203", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\240\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\241\320\274\320\265\321\200\321\202\320\270", nullptr));
        auto_radioButton->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276", nullptr));
        manual_radioButton_2->setText(QApplication::translate("MainWindow", "\320\222\321\200\321\203\321\207\320\275\321\203\321\216", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\210\320\260\320\263\320\260:", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "ms", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\210\320\260\320\263\320\276\320\262", nullptr));
        generate_cave_btn->setText(QApplication::translate("MainWindow", "Generate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(menu_2), QApplication::translate("MainWindow", "\320\237\320\265\321\211\320\265\321\200\320\260", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Widht_line", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Color line", nullptr));
        color_lines_comboBox->setItemText(0, QApplication::translate("MainWindow", "RED", nullptr));
        color_lines_comboBox->setItemText(1, QApplication::translate("MainWindow", "GREEN", nullptr));
        color_lines_comboBox->setItemText(2, QApplication::translate("MainWindow", "BLUE", nullptr));
        color_lines_comboBox->setItemText(3, QApplication::translate("MainWindow", "BLACK", nullptr));

        color_lines_comboBox->setCurrentText(QApplication::translate("MainWindow", "BLACK", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
