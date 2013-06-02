/* ============================================================
* MailHandle plugin for QupZilla
* Copyright (C) 2012-2013  David Rosca <nowrep@gmail.com>
* Copyright (C) 2012-2013  Mladen Pejaković <pejakm@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#ifndef MAILHANDLE_HANDLER_H
#define MAILHANDLE_HANDLER_H

#include <QObject>

class MailHandle_Handler : public QObject
{
    Q_OBJECT
public:
    explicit MailHandle_Handler(const QString &settingsPath, QObject* parent = 0);

    QString settingsFile();
    void loadSettings();

signals:

public slots:

private slots:

private:
    bool m_enabled;
    int m_wservice;
    QString m_settingsFile;
};

#endif // MAILHANDLE_HANDLER_H
