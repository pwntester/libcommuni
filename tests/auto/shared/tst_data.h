/*
 * Copyright (C) 2008-2013 The Communi Project
 *
 * This test is free, and not covered by the LGPL license. There is no
 * restriction applied to their modification, redistribution, using and so on.
 * You can study them, modify them, use them in your own program - either
 * completely or partially.
 */

#ifndef TST_DATA_H
#define TST_DATA_H

#include <QList>
#include <QString>
#include <QVariant>
#include <QByteArray>
#include <QStringList>

class tst_Data
{
public:
    static QList<QByteArray> keys();
    static QByteArray welcome(const QByteArray& key = QByteArray());
    static QByteArray join(const QByteArray& key = QByteArray());
    static QStringList names(const QByteArray& key = QByteArray());
    static QStringList admins(const QByteArray& key = QByteArray());
    static QStringList ops(const QByteArray& key = QByteArray());
    static QStringList halfops(const QByteArray& key = QByteArray());
    static QStringList voices(const QByteArray& key = QByteArray());
};

#endif // TST_DATA_H
