cmake_minimum_required(VERSION 3.15)
project(Voetbal)

set(CMAKE_CXX_STANDARD 17)

add_executable(Voetbal main.cpp Keeper.cpp Keeper.h Verdediger.cpp Verdediger.h Middenvelder.cpp Middenvelder.h Aanvaller.cpp Speler.cpp Speler.h Actie.cpp Actie.h Loop.cpp Loop.h Pas.cpp Pas.h Schiet.cpp Schiet.h Takle.cpp Takle.h Redding.cpp Redding.h Opraap.cpp Opraap.h Aanvaller.h)