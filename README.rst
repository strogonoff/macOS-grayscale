An executable that forces display to grayscale on macOS.

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

Based on
`StackExchange post by Lucas Wiman <https://apple.stackexchange.com/a/342551/1199>`_.

Tested with
===========

OS: macOS Catalina 10.15.4

Compiler::

    Apple clang version 11.0.3 (clang-1103.0.32.59)
    Target: x86_64-apple-darwin19.4.0
    Thread model: posix
    InstalledDir: /Library/Developer/CommandLineTools/usr/bin

Known issues
============

When using multiple displays, switching to an application window on another display
may cause grayscale to be turn off.
