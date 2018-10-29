#ifndef AGWINDOW_H
#define AGWINDOW_H

#include <QMainWindow>

namespace Ui {
class AGWindow;
}

class AGWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AGWindow(QWidget *parent = nullptr);
    ~AGWindow();

private slots:
    void on_acceptTypeTableBtn_clicked();

    void on_dismissTypeTableBtn_clicked();

    void on_acceptObjectTableBtn_clicked();

    void on_dismissObjectTableBtn_clicked();

    void on_addRulesTableBtn_clicked();

    void on_removeRulesTableBtn_clicked();

    void on_orderRulesTableBtn_clicked();

    void on_acceptRulesTableBtn_clicked();

    void on_dismissRulesTableBtn_clicked();

private:
    Ui::AGWindow *ui;
};

#endif // AGWINDOW_H
