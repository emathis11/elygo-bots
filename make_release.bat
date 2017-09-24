@echo off
del gnugo-release.apk
@echo on
CALL gradlew assembleRelease
copy gnugo\build\outputs\apk\gnugo-release.apk gnugo-release.apk
pause