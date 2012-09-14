package lrstudios.games.gnugo;

import lrstudios.games.ego.lib.ui.NewGameActivity;


public class GnugoNewGameActivity extends NewGameActivity
{
    @Override
    protected Class<?> getBotClass()
    {
        return GnugoBot.class;
    }
}
