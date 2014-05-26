#ifndef BOARD_WINDOW_HPP
#define BOARD_WINDOW_HPP

#include <QMainWindow>
#include "FieldButton.hpp"
#include <QPushButton>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QWidget>
#include <QLCDNumber>
#include <QList>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QMessageBox>
#include "NewGameWindow.hpp"

class BoardWindow : public QMainWindow
{
  Q_OBJECT
  private:
    QWidget *centralWidget;
    QVBoxLayout *mainLayout;
    QHBoxLayout *upperLayout;
    QGridLayout *boardLayout;
    QLCDNumber *timeWidget;
    FieldButton button;
    QPushButton asd;
    NewGameWindow dial;
    QList<QList<FieldButton*> > buttons;
    QAction *newGameAction;

  public:
    BoardWindow(QWidget *parent = 0);
    ~BoardWindow();
    void deleteButtons();
    void prepareButtons(unsigned int height, unsigned int width);

  private slots:
    void newGame();
};
#endif
