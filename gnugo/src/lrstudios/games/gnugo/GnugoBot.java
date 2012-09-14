package lrstudios.games.gnugo;

import lrstudios.games.ego.lib.GtpBot;


public class GnugoBot extends GtpBot
{
    private static final String BOT_NAME = "GNU Go";
    private static final String VERSION = "3.8";

    private static boolean init = false;

	private native void initGtp(float pMemory);
    private native String playGtp(String pInput);
    

    static
    {
        System.loadLibrary("gnuGo-3.8");
    }


    /** Creates and initializes a new GNUGo bot. It currently supports only one instance at a time. */
    public GnugoBot()
    {
        if (!init)
        {
            initGtp(8);
            init = true;
        }
    }

    
    @Override
    public String sendGtpCommand(String command)
    {
        return playGtp(command);
    }

    @Override
    public String getName()
    {
        return BOT_NAME;
    }

    @Override
    public String getVersion()
    {
        return VERSION;
    }
}
