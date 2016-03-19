adb shell pm uninstall lrstudios.games.gnugo
adb install gnugo-release.apk
adb shell am start -n "lrstudios.games.gnugo/lrstudios.games.gnugo.GnugoNewGameActivity" -a android.intent.action.MAIN -c android.intent.category.LAUNCHER
pause