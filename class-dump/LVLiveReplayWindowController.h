//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class LiveInfo, NSString;

@interface LVLiveReplayWindowController : NSWindowController <NSWindowDelegate>
{
    LiveInfo *_liveInfo;
    NSString *_roomId;
    double _currentProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) LiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
- (void)initReplayViewController;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)initWithLiveInfo:(id)arg1 roomId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

