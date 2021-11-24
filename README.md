# macos-wechat-app-tracker

[![Track macOS WeChat.app Update](https://github.com/wechaty/mac-wechat-app-tracker/actions/workflows/crontab.yml/badge.svg)](https://github.com/wechaty/mac-wechat-app-tracker/actions/workflows/crontab.yml)

macOS WeChat.app header files version history (automatic updated)

## Troubleshooting

```sh
$ class-dump -H /Applications/WeChat.app
2021-11-23 19:16:08.696 class-dump[7205:59612] Error: Cannot find offset for address 0x7800000001046f1c in stringAtAddress:
```

> WeChat MacOS Version 3.2.1 (19797)

### Solution

> Use class-dump from AloneMonkey at [here](https://github.com/AloneMonkey/MonkeyDev/blob/master/bin/class-dump)

Related links:

- https://iosre.com/t/solved-classdump-error-cannot-find-offset-for-address-xxxxx-in-stringataddress/10626
- https://github.com/wechaty/sidecar-demos/issues/2

## History

### v0.0.1 (Nov 24, 2021)

Init tracking
