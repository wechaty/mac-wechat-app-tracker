//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCModule.h"

#import "TXCCapturer-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue, TXIMediaCapturerDelegate, TXINotifyDelegate;

@interface TXCScreenCapturerBase : TXCModule <TXCCapturer>
{
    BOOL _capturesCursor;
    BOOL _capturesMouseClicks;
    unsigned int _maxFPS;
    int _streamType;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <TXIMediaCapturerDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    long long _displayID;
    struct CGSize _videoSize;
    struct CGRect _cropRect;
}

- (void).cxx_destruct;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned int maxFPS; // @synthesize maxFPS=_maxFPS;
@property(nonatomic) BOOL capturesMouseClicks; // @synthesize capturesMouseClicks=_capturesMouseClicks;
@property(nonatomic) BOOL capturesCursor; // @synthesize capturesCursor=_capturesCursor;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) long long displayID; // @synthesize displayID=_displayID;
@property __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property __weak id <TXIMediaCapturerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)stop;
- (void)start;
- (id)initWithWorkQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

