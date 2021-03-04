######################################################################
#
#  $HOME/.bashrc file
#  Last Updated: 2017-05-18
#
#    The most recent file is kept under ~stdskel/ .
#    You may revise your files by copying from there.
#    URL : http://web-int.u-aizu.ac.jp/~stdskel/stdskel.html
#
#  The University of Aizu Information Network System (AINS)
#  Information System and Technology Center (ISTC)
#  E-mail: std-help@u-aizu.ac.jp
#
######################################################################

MACHINE=`uname -s`-`uname -r`

umask 022

PATH=/usr/local/gcc/bin:/usr/local/perl5/bin
PATH=$PATH:/usr/local/texlive/bin
PATH=$PATH:/usr/local/bin:/usr/local/gnu/bin:/usr/local/java/jdk/bin

case "$MACHINE" in
  # for Solaris 2.x
  SunOS-5.11*)	PATH=$PATH:/usr/openwin/bin:/usr/bin:/usr/sbin
		PATH=$PATH:/usr/local/SolarisStudio/bin:/usr/ccs/bin

		MANPATH=/usr/local/perl5/man:/usr/local/man
		MANPATH=$MANPATH:/usr/local/share/man:/usr/local/gnu/man
		MANPATH=$MANPATH:/usr/local/gnu/share/man:/usr/share/man
		MANPATH=$MANPATH:/usr/local/SolarisStudio/man
	;;
  # for Apple MacOS X 10.x
  Darwin-*)	PATH=$PATH:/usr/X11/bin:/usr/bin:/bin:/usr/sbin:/sbin

		MANPATH=/usr/local/man:/usr/local/share/man:/usr/local/gnu/man
		MANPATH=$MANPATH:/usr/local/gnu/share/man:/usr/share/man:/usr/X11/share/man
	;;
  # for Linux RHEL
  Linux-*)	PATH=$PATH:/usr/X11R6/bin:/usr/bin:/bin:/usr/sbin:/sbin

		MANPATH=/usr/share/man
	;;
esac

# set site path
#set PATH=$PATH:${HOME}/bin


# if [ $?USER == 0 || $?prompt == 0 ]; then
#     exit
# fi

LC_COLLATE=C

export PATH LC_COLLATE

EDITOR=vi
export EDITOR

unset OS REV

if [ "$SHELL" = "/bin/csh" -o "$SHELL" = "/usr/local/bin/tcsh" ]; then
    eval `env SHELL=/bin/sh tset -rs`
else
    eval `tset -rs`
fi
stty erase  kill 

# set this for all shells
export HISTSIZE=100
export HISTFILESIZE=50
export IGNOREEOF=3
#PS1="\h{`whoami`}\!$ "
PS1="\h:\W \u[\!]$ "

alias la='ls -al'