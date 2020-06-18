An executable that forces display to grayscale on macOS.

This repo exists so that I don’t forget it next time I set up a Mac.

Based on
`StackExchange post by Lucas Wiman <https://apple.stackexchange.com/a/342551/1199>`_
(see also `this one <https://apple.stackexchange.com/a/342570/1199>`_
on enabling grayscale effect based on current app).

Licensed under CC BY-SA 4.0 like StackExchange requires.

Why
===

* Works together with color inversion.

* Can be assigned a keyboard shortcut.

As of Catalina, the above is impossible with native macOS
accessibility options.

Usage
=====

To compile, run ``make toggle-grayscale``.

To assign it a shortcut:

1. Copy compiled binary to a sane location

2. Using Automator, create a workflow (quick action)
   which receives no input in any application.
   In it, add “Run AppleScript” action with contents like::

       do shell script "~/bin/toggle-grayscale"

3. Assign preferred shortcut to that action in keyboard preferences.

Tested with
===========

OS: macOS Catalina 10.15.5

Compiler::

    Apple clang version 11.0.3 (clang-1103.0.32.59)
    Target: x86_64-apple-darwin19.4.0
    Thread model: posix
    InstalledDir: /Library/Developer/CommandLineTools/usr/bin

Known issues
============

Turning grayscale on and off this way does not toggle the Accessibility checkbox in Preferences.

Losing grayscale when switching to another display: `Issue <https://github.com/strogonoff/macOS-grayscale/issues/1>`_.
