#!/bin/sh

#
# File: extinc
# Author: Marcus A Johansson
# Date: 2017-07-06
# Description:
#   Pass either an absolute path or a relative path (relative to pwd)
#   as first argument WITH a trailing slash and all .c, .cc, .cpp, .h and .hh
#   files will have relative paths added to their include directives.
#

ROOT_PATH=$1
INCLUDE_PATH=$ROOT_PATH"include/"

grep -e '^#include "[^/.]+\.h{1,2}"$' -rnwP $ROOT_PATH --include=\*.{c,cc,cpp,h,hh} \
    | while read -r line
do
    FILEPATH=$(echo "$line" | cut -d":" -f1)
    INCFILE=$(echo "$line" | cut -d":" -f3 | cut -d"\"" -f2)
    INCFILEPATH=$(find $INCLUDE_PATH -name "$INCFILE")
    if [ ! -z $INCFILEPATH ] ; then
	RELPATH=$(echo $INCFILEPATH | sed -e "s~${INCLUDE_PATH}~~")
	sed -i -e "s~$INCFILE~$RELPATH~" "$FILEPATH"
    fi
done
