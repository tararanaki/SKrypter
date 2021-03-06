#ifndef PERM_3_EXERCISE_H
#define PERM_3_EXERCISE_H

#include "exercise.h"


/**
 * @brief The Perm3Exercise class
 * Exercise for didactic scenario Perm 3: Single Frequencies
 */
class Perm3Exercise : public Exercise {
    Q_OBJECT

    Q_PROPERTY(QString key MEMBER m_key NOTIFY keyChanged)
    Q_PROPERTY(QString keyLockedPositions MEMBER m_keyLockedPositions NOTIFY keyLockedPositionsChanged)

    Q_PROPERTY(bool hiddenSortByLetters MEMBER m_sortByLetters NOTIFY sortByLettersChanged)
    Q_PROPERTY(QString studentKey MEMBER m_studentKey NOTIFY studentKeyChanged)
    Q_PROPERTY(QString studentKeyLockedPositions MEMBER m_studentKeyLockedPositions NOTIFY studentKeyLockedPositionsChanged)
    Q_PROPERTY(QString studentPlainText MEMBER m_studentPlainText NOTIFY studentPlainTextChanged)

public:
    Perm3Exercise(ExerciseList *parent = NULL, QString title = "", QString language = "de", QString filename = "");

signals:
    void keyChanged();
    void keyLockedPositionsChanged();

    void sortByLettersChanged();
    void studentKeyChanged();
    void studentKeyLockedPositionsChanged();
    void studentPlainTextChanged();

private:
    QString m_key;
    QString m_keyLockedPositions;

    bool m_sortByLetters;
    QString m_studentKey;
    QString m_studentKeyLockedPositions;
    QString m_studentPlainText;
};

#endif // PERM_3_EXERCISE_H
