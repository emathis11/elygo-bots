package lrstudios.games.gnugo;

import android.content.Context;
import lrstudios.games.ego.lib.GtpEngine;


public class GnugoEngine extends GtpEngine
{
    private static final String ENGINE_NAME = "GNU Go";
    private static final String VERSION = "3.8";

    private static boolean init = false;

    private native void initGtp(float pMemory);

    private native String playGtp(String pInput);


    static
    {
        System.loadLibrary("gnuGo-3.8");
    }


    public GnugoEngine(Context context)
    {
        super(context);
    }

    @Override
    public boolean init()
    {
        if (!init)
        {
            initGtp(8);
            init = true;
        }
        return true;
    }

    @Override
    public String sendGtpCommand(String command)
    {
        return playGtp(command);
    }

    @Override
    public String getName()
    {
        return ENGINE_NAME;
    }

    @Override
    public String getVersion()
    {
        return VERSION;
    }
}
