#ifndef TEMPO_H
#define TEMPO_H

#include <QString>

#include <iostream>
#include <stdio.h>
#include <ctime>
#include <time.h>

int getempo(char x);

int getDia();
int getMes();
int getAno();

int getSegundo();
int getMinuto();
int getHora();

QString getData();
QString getTempo();

QString getSaveData();

#endif


