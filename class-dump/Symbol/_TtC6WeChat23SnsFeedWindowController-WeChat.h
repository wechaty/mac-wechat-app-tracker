//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6WeChat23SnsFeedWindowController.h"

#import "AccountServiceExt-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@interface _TtC6WeChat23SnsFeedWindowController (WeChat) <NSPopoverDelegate, NSWindowDelegate, AccountServiceExt>
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)beforeUserLogout;
@end

