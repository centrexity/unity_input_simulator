# unity_input_simulator

I am trying to figure out a solution to send keys to a non focused unity window <br />
post message works for other windows (SDL) but does not work for unity <br />
PostMessage(wnd, WM_KEYDOWN, key, lparam); <br />
Im not sure of what input system it is using maybe directinput? <br />
I am looking for anyone that can help. <br />
 <br />
SendInput works but is global and works on whatever is in focus so thats not what I am looking for. <br />
