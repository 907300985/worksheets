#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<stockitemlistmodel.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
signals:
    void statusUpdateMessage( const QString & message, int timeout );
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void handleAddButton();
public slots:
    void handleEditButton();
public slots:
    void handleRemoveButton();
private slots:
    void on_addButton_released();
    void on_editButton_released();
    void on_removeButton_released();
    void on_pushButton_released();

private:
    Ui::MainWindow *ui;   
    StockItemListModel stockList;
};
#endif // MAINWINDOW_H
