//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface WXTransCodingWrapper : NSObject <AccountServiceExt>
{
    BOOL _transcodingInProgress;
    NSMutableSet *_inQueueVideos;
    NSMutableDictionary *_durationDict;
    NSRecursiveLock *_queueSetLock;
    NSString *_currentTranscoding;
    NSString *_modelPlatform;
    NSString *_systemVersion;
}

+ (id)removeVideoHeadQueue;
+ (id)getMediaInfoQueue;
+ (id)transcodingQueue;
+ (id)sharedInstance;
+ (BOOL)isWXSupportVCodeId:(int)arg1;
+ (BOOL)supportVCodec2VideoUpload:(unsigned long long)arg1;
+ (BOOL)isVCodec2VideoByPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *modelPlatform; // @synthesize modelPlatform=_modelPlatform;
@property(retain, nonatomic) NSString *currentTranscoding; // @synthesize currentTranscoding=_currentTranscoding;
@property(retain, nonatomic) NSRecursiveLock *queueSetLock; // @synthesize queueSetLock=_queueSetLock;
@property(retain, nonatomic) NSMutableDictionary *durationDict; // @synthesize durationDict=_durationDict;
@property(retain, nonatomic) NSMutableSet *inQueueVideos; // @synthesize inQueueVideos=_inQueueVideos;
@property BOOL transcodingInProgress; // @synthesize transcodingInProgress=_transcodingInProgress;
- (int)queryVideoDuration:(id)arg1;
- (BOOL)isMediaBeingTranscoded:(id)arg1;
- (BOOL)isMediaInTranscodingQueue:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)cancelAllTask;
- (int)getImageN:(id)arg1 dstJPEG:(id)arg2 r:(int)arg3 n:(int)arg4;
- (int)calcNewMD5:(id)arg1 pMD5:(char *)arg2;
- (int)moovSwap:(id)arg1 out_:(id)arg2 pMD5:(char *)arg3;
- (int)removeVideoHead:(id)arg1 destPath:(id)arg2;
- (int)getMediaInfo:(id)arg1 inPara:(struct WxMediaInfoPara *)arg2;
- (int)transcode:(id)arg1 dstMP4:(id)arg2 inPara:(struct WxVideoTransPara *)arg3 format:(unsigned long long)arg4 notifyProcessBegin:(CDUnknownBlockType)arg5;
- (int)transcode:(id)arg1 dstMP4:(id)arg2 inPara:(struct WxVideoTransPara *)arg3 format:(unsigned long long)arg4;
- (int)modiVideoPara:(struct WxVideoTransPara *)arg1 inPara:(struct WxVideoTransPara *)arg2 maxWH:(int)arg3 maxKbps:(int)arg4 maxFps:(int)arg5;
- (void)onUserLogout;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

