//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCModule.h"

#import "MultiDownloaderDelegate-Protocol.h"
#import "TXIDownloader-Protocol.h"
#import "TXIDownloaderDelegate-Protocol.h"
#import "TXIMessageNotifyDelegate-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"
#import "TXIRestartDelegate-Protocol.h"

@class DownloadStats, MultiStreamDownloader, NSDictionary, NSObject, NSString, RTMPAccUrlFetcher, TXIStreamDownloader;
@protocol OS_dispatch_queue, OS_dispatch_source, TXIDownloaderDelegate, TXINotifyDelegate;

@interface TXCStreamDownloader : TXCModule <TXIDownloaderDelegate, TXINotifyDelegate, TXIRestartDelegate, MultiDownloaderDelegate, TXIMessageNotifyDelegate, TXIDownloader>
{
    RTMPAccUrlFetcher *_accUrlFetcher;
    int _streamFormat;
    BOOL _enableNearestIP;
    int _rtmpChannelType;
    BOOL _running;
    BOOL _recvFirstNAL;
    NSString *_originPlayUrl;
    long long _lastTimestamp;
    NSDictionary *_reportErrorEvents;
    id <TXIDownloaderDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    NSObject<OS_dispatch_queue> *_timerQueue;
    DownloadStats *_lastDownloadStats;
    NSObject<OS_dispatch_source> *_timer;
    TXIStreamDownloader *_downloader;
    MultiStreamDownloader *_multiDownloader;
}

- (void).cxx_destruct;
@property(retain) MultiStreamDownloader *multiDownloader; // @synthesize multiDownloader=_multiDownloader;
@property(retain) TXIStreamDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain) DownloadStats *lastDownloadStats; // @synthesize lastDownloadStats=_lastDownloadStats;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) __weak id <TXIDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *rtmpproxyUserId;
- (long long)getSpeed:(long long)arg1 currValue:(long long)arg2 interval:(long long)arg3;
- (id)setUpReportErrorEvents;
- (void)collectStatus;
- (void)stopCollectStatus;
- (void)startCollectStatus;
- (void)onSwitchDownloaderFailed;
- (void)onSwitchedDownloader;
- (void)requestKeyFrame:(id)arg1;
- (int)switchStream:(id)arg1;
- (void)onRestartDownloader;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)onMetaDataMessage:(id)arg1;
- (void)onSEIMessage:(id)arg1;
- (void)onPullNAL:(id)arg1;
- (void)onPullAudio:(id)arg1;
- (void)tryResetRetryCount;
- (id)getRealTimeStreamInfo;
- (id)getDownloadStats;
- (void)stop;
- (void)playStreamWithRawUrl:(id)arg1;
- (BOOL)isFLVUrl:(id)arg1;
- (int)start:(id)arg1;
- (id)initWithParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

