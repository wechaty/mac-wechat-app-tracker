//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@interface _TtC6WeChat23SnsPublishWindowService : MMService <MMService, NSWindowDelegate>
{
    // Error parsing type: , name: onWindowMove
    // Error parsing type: , name: onCancel
    // Error parsing type: , name: onCompletion
    // Error parsing type: , name: parentWindow
    // Error parsing type: , name: session
    // Error parsing type: , name: maskView
    // Error parsing type: , name: windowStack
    // Error parsing type: , name: activeWindowController
    // Error parsing type: , name: movingDelta
    // Error parsing type: , name: movingTimer
}

- (void).cxx_destruct;
- (id)init;
- (void)onMovingTimer:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowWillMove:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

@end

