import java.awt.Toolkit;
import java.awt.datatransfer.Clipboard;
import java.awt.datatransfer.StringSelection;
import java.awt.event.KeyEvent;
import java.io.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

import java.nio.charset.StandardCharsets;;

public class UsingRuntime {

    public static void main(String[] args) {
        Runtime r = Runtime.getRuntime();
        Process p = null;
        try {
            p = r.exec("notepad");
            java.awt.Robot ro = new java.awt.Robot();
            String text = "Hello World";
            StringSelection stringSelection = new StringSelection(text);
            Clipboard clipboard = Toolkit.getDefaultToolkit().getSystemClipboard();
            clipboard.setContents(stringSelection, stringSelection);
            ro.keyPress(KeyEvent.VK_CONTROL);
            ro.keyPress(KeyEvent.VK_V);
            ro.keyRelease(KeyEvent.VK_V);
            ro.keyRelease(KeyEvent.VK_CONTROL);
        } catch (Exception e) {
            System.out.println("Could not start notepad");
        }
    }
}
