package lrstudios.games.gnugo;

import net.lrstudios.commonlib.LRApp;
import net.lrstudios.commonlib.billing.ProductProvider;

public class GnugoApp extends LRApp {
    @Override public boolean isDebug() { return BuildConfig.DEBUG; }
    @Override public boolean isAmazonBuild() { return false; }
    @Override public String googleIabKey() { return ""; }
    @Override protected ProductProvider getProductProvider() { return null; }
}
