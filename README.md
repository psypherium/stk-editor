# stk-editor
[![Build Status](https://travis-ci.org/supertuxkart/stk-editor.svg)](https://travis-ci.org/supertuxkart/stk-editor)

SuperTuxKart - Track Editor.

How to use it: 
- wiki: https://supertuxkart.net/Track_Editor
- video demo: https://youtu.be/Uae2NW5yFHc

# BUILD
## Linux
### Dependencies

To build the STK editor from source, you'll need to install the following packages

  * OpenGL (mesa)
  * zlib (zlib1g-dev)
  * physfs (libphysfs-dev)

To install the required dependencies, run this command (Debian/Ubuntu):

```
sudo apt-get install build-essential libxxf86vm-dev libphysfs1 libphysfs-dev \
libgl1-mesa-dev mesa-common-dev zlib1g zlib1g-dev cmake
```

### Compiling

To compile the STK editor, run the following commands inside `stk-editor` directory:

```bash
mkdir build
cd build
cmake ..
make -j4
```

"-j4" is an example, for a faster build, use "-jx" instead, where "x" is the amount of CPU threads you have, minus one.

(Optional) If you want a DEBUG build of the editor replace the cmake line with this:
``` cmake .. -DCMAKE_BUILD_TYPE=Debug ```

#### To Run:
`./supertuxkart-editor`

## Windows

If you have Windows operating system, it uses static physfs and zlib libraries. You don't need to install any dependencies.

1. Install VS 2013 (or later). The free express versions work fine. Older versions may or may not work.
2. Download and extract the stk-editor source - either a released package or from our [git/svn repositories](http://supertuxkart.sourceforge.net/Source_control)
4. Download cmake and install it. Start cmake-gui and select the 'stk-editor' root directory as 'Where is the source code', and a new directory 'build' under the 'stk-editor' root directory (next to lib, src, etc) as the build directory ('Where to build the binaries').
5. Click on 'Generate'. If the build directory doesn't exist, you will be asked to create it, then asked to select your VS version. Make sure to select the right version (be aware of the easy to confuse version numbers: VS 2013 = version 12). Click on configure, then generate. This will create the directory 'build', and a VS solution in that directory.
6. Run Visual Studio, and open the solution (.sln) file generated in the 'build' folder
7. Right click on the 'stk-editor' project in the solution explorer, and select 'Set as StartUp Project.'
8. (Optional) From the configuration type drop down menu, select 'Release.'
9. Select Build->Build Solution (or press F7) to compile.

# Troubleshooting
When you start the stk-editor the first time you should select the `stk-assets` directory.
If you don't select the [`stk-assets`](https://supertuxkart.net/Source_control) directory you get the following failure message:
``` Could not create archive for: textures ```

You can download the `stk-assets` by issusing the following command:
``` svn checkout https://svn.code.sf.net/p/supertuxkart/code/stk-assets stk-assets ```

# License
This software is released under the GNU General Public License (GPL) which
can be found in the file [`LICENSE`](LICENSE) in the same directory as this file.
