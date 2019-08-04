#!/bin/sh
if [ "$TERM" = "linux" ]; then
  /bin/echo -e "
  \e]P01e2424
  \e]P1ff0060
  \e]P2a0ff20
  \e]P3ffe080
  \e]P46080ff
  \e]P5c080ff
  \e]P640c4ff
  \e]P7f8f8f8
  \e]P83c4848
  \e]P9ff0060
  \e]PAa0ff20
  \e]PBffe080
  \e]PC6080ff
  \e]PDc080ff
  \e]PE40c4ff
  \e]PFf8f8f8
  "
  # get rid of artifacts
  clear
fi
