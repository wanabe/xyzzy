#!/bin/sh
cd $(cd $(dirname $0) && pwd)/..
VERSION_DESCRIBE_H=src/gen/version-describe.h
VERSION_DESCRIBE_TMP=src/gen/version-describe.tmp
echo > $VERSION_DESCRIBE_TMP
if [ -e .git ]; then
# git describe �̏���
#   (tag)-(tag �ȍ~�̃R�~�b�g��)-g(hash)
#
# git describe �� --long ���w�肵�Ȃ��ƃR�~�b�g�񐔂� 0 �̏ꍇ��
# �^�O�����\������Ȃ�

GIT_DESCRIBE="git describe --tags --dirty"
DESCRIBE_LONG=`$GIT_DESCRIBE --long 2>$VERSION_DESCRIBE_TMP|tail -n 1`
DESCRIBE=`$GIT_DESCRIBE 2>$VERSION_DESCRIBE_TMP|tail -n 1`
echo > $VERSION_DESCRIBE_TMP
if [ -n "$DESCRIBE" ]; then
if [ "$DESCRIBE" = "$DESCRIBE_LONG" ]; then
echo "#define PROGRAM_VERSION_DESCRIBE_STRING $DESCRIBE" > $VERSION_DESCRIBE_TMP
fi
fi

fi

if [ ! -e $VERSION_DESCRIBE_H -o -n "`diff $VERSION_DESCRIBE_H $VERSION_DESCRIBE_TMP 2>&1`" ]; then
  echo $DESCRIBE
  cp $VERSION_DESCRIBE_TMP $VERSION_DESCRIBE_H
fi

rm -f $VERSION_DESCRIBE_TMP
exit 0
