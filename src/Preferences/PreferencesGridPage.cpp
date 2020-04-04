#include "Preferences/PreferencesGridPage.hpp"

PreferencesGridPage::PreferencesGridPage(QWidget *parent) : PreferencesPage(parent)
{
    gridLayout = new QGridLayout();
    addLayout(gridLayout);
}

void PreferencesGridPage::addRow(QWidget *widget)
{
    gridLayout->addWidget(widget, gridLayout->rowCount(), 1);
}

void PreferencesGridPage::addRow(const QString &labelText, QWidget *widget)
{
    int row = gridLayout->rowCount();
    gridLayout->addWidget(new QLabel(labelText, this), row, 0);
    gridLayout->addWidget(widget, row, 1);
}