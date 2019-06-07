# qmk_firmware

[![Build Status](https://travis-ci.com/sasaplus1/qmk_firmware.svg?branch=sasaplus1)](https://travis-ci.com/sasaplus1/qmk_firmware)

my keyboard mappings

[more details](https://github.com/qmk/qmk_firmware)

## Keymaps

- [The volume changer for macOS with meishi](/keyboards/meishi/keymaps/volumes)
    - `$ make meishi:volumes:avrdude`
    - see [Meishi keyboard 組み立て方ガイド](http://biacco42.hatenablog.com/entry/2018/01/21/204749)
- [Iris Rev.2](/keyboards/keebio/iris/keymaps/sasaplus1)
    - `$ make keebio/iris/rev2:sasaplus1:avrdude`
    - see [/keyboards/keebio/iris](/keyboards/keebio/iris)
- [XD60 Rev.3](/keyboards/xd60/keymaps/sasaplus1)
    - push reset button and `$ make xd60/rev3:sasaplus1:dfu`
    - see [/keyboards/xd60](/keyboards/xd60)

## How to maintenance

### setup

```console
$ git clone ssh://git@github.com/sasaplus1/qmk_firmware.git
$ cd ./qmk_firmware
$ git remote add upstream https://github.com/qmk/qmk_firmware.git
$ git fetch upstream
```

```console
$ git checkout sasaplus1
$ git fetch upstream
$ git rebase upstream/master
```

### fetch upstream commits and rebase my commits

```console
$ git checkout sasaplus1
$ git fetch --prune upstream
$ git rebase upstream/master -X theirs
$ git push origin +sasaplus1
```
