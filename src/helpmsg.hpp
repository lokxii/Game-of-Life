const char* helpmsg = 
"Game of Life, version 0.1\n"
"usage: gameOfLife [-h] [-l loadFile] [-s saveFile]\n"
"\n"
"If loadFile is specified, the game loads state from loadFile.\n"
"Default name of saveFile is `save.cells'.\n"
"\n"
"In-game commands:\n"
" General:\n"
" [shift]wasd: Camera movement.\n"
" o:           Back to origin.\n"
" m:           Enlarge pixels.\n"
" n:           Shrink pixels.\n"
" p:           Pause.\n"
"\n"
" Running(white):\n"
" f:           Fast forward.\n"
" shift-f:     Reset simulation speed.\n"
" e:           Toggle edit mode.\n"
"\n"
" Editing(green):\n"
" space:       sets cell alive.\n"
" shift-space: sets cell dead.\n"
" c:           clears all cells.\n"
"\n"
" Pause(red):\n"
" s:           Write save state to saveFile."
;
