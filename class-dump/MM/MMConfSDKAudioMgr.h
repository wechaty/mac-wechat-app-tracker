//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AUAudioDataSource-Protocol.h"
#import "IAUAudioDeviceExt-Protocol.h"

@class NSRecursiveLock, NSString;

@interface MMConfSDKAudioMgr : NSObject <AUAudioDataSource, IAUAudioDeviceExt>
{
    struct OpaqueAudioConverter *mAudioConverter32FTo16Int;
    struct OpaqueAudioConverter *mAudioConverter16IntTo32F;
    CDUnknownBlockType currentCallback;
    BOOL isMutePlay;
    NSRecursiveLock *mAudioPlayLock;
    int _voiceSampleRate;
    int _voiceChannels;
    int _voiceFrameDuation;
    int recordCount;
    int _failCount;
    BOOL _isCallbackedStartStatus;
}

- (void).cxx_destruct;
- (void)HeadSetPlugin:(BOOL)arg1;
- (void)audioDeviceUnPluginHeadset:(id)arg1;
- (void)audioDevicePluginHeadset:(id)arg1;
- (int)getVoiceVolume;
- (int)getRecordCount;
- (BOOL)isConfSDKModel;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (void)setAudioParam:(id)arg1;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceForceStop:(id)arg1;
- (void)callback:(int)arg1;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (void)setHandsFree:(BOOL)arg1;
- (BOOL)isRunning;
- (BOOL)setMuteRecord:(BOOL)arg1;
- (BOOL)setMutePlay:(BOOL)arg1;
- (BOOL)startVoIP:(BOOL)arg1 callback:(CDUnknownBlockType)arg2;
- (void)releaseAll;
- (void)initAudioConverter;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
