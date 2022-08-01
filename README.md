# unity_input_simulator

I am trying to figure out a solution to send keys to a non focused unity window
post message works for other windows (SDL) but does not work for unity
PostMessage(wnd, WM_KEYDOWN, key, lparam);
Im not sure of what input system it is using maybe directinput?
I am looking for anyone that can help.

SendInput works but is global and works on whatever is in focus so thats not what I am looking for.
