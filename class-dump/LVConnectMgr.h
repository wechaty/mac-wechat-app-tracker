//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LVBaseMgr.h"

#import "LVLiveServiceExt-Protocol.h"
#import "LVTrtcMgrExt-Protocol.h"

@class LVLiveApplyConnectMicAudience, NSArray, NSString, OrderedDictionary;

@interface LVConnectMgr : LVBaseMgr <LVLiveServiceExt, LVTrtcMgrExt>
{
    BOOL _canConnectMic;
    NSArray *_applyConnectAudienceList;
    LVLiveApplyConnectMicAudience *_currentConnectedMicAudience;
    LVLiveApplyConnectMicAudience *_connectingMicAudience;
    LVLiveApplyConnectMicAudience *_connectMicAudienceInfoForSelf;
    OrderedDictionary *_applyConnectMicAudienceDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *applyConnectMicAudienceDic; // @synthesize applyConnectMicAudienceDic=_applyConnectMicAudienceDic;
@property(retain, nonatomic) LVLiveApplyConnectMicAudience *connectMicAudienceInfoForSelf; // @synthesize connectMicAudienceInfoForSelf=_connectMicAudienceInfoForSelf;
@property(retain, nonatomic) LVLiveApplyConnectMicAudience *connectingMicAudience; // @synthesize connectingMicAudience=_connectingMicAudience;
@property(retain, nonatomic) LVLiveApplyConnectMicAudience *currentConnectedMicAudience; // @synthesize currentConnectedMicAudience=_currentConnectedMicAudience;
@property(retain, nonatomic) NSArray *applyConnectAudienceList; // @synthesize applyConnectAudienceList=_applyConnectAudienceList;
@property(nonatomic) BOOL canConnectMic; // @synthesize canConnectMic=_canConnectMic;
- (void)onGetLiveInfoWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 andLiveInfo:(id)arg3;
- (void)onGetLiveMicAudienceInfoResult:(id)arg1 liveId:(unsigned long long)arg2 andAudience:(id)arg3;
- (void)onLiveTask:(unsigned long long)arg1 stopConnectUserVideo:(id)arg2;
- (void)onLiveTask:(unsigned long long)arg1 switchConnectUserVideo:(id)arg2;
- (void)onLiveTaskStopLocalVideoConnectMic:(unsigned long long)arg1;
- (void)onLiveTask:(unsigned long long)arg1 localVideoConnectMicSuccess:(id)arg2;
- (id)applyAudienceByLiveMicId:(id)arg1;
- (void)onLiveTask:(unsigned long long)arg1 switchRoleType:(int)arg2 errMsg:(id)arg3;
- (void)onLiveTask:(unsigned long long)arg1 user:(id)arg2 audioAvailable:(BOOL)arg3;
- (void)onLiveTask:(unsigned long long)arg1 liveSdkInfoWillExpire:(id)arg2;
- (void)onCloseApplyLiveMicResult:(BOOL)arg1 andLiveId:(unsigned long long)arg2 andEnable:(BOOL)arg3;
- (void)onCloseLiveMicResult:(BOOL)arg1 andLiveId:(unsigned long long)arg2 andLiveMicId:(id)arg3;
- (BOOL)updateLiveMicEnable:(BOOL)arg1;
- (void)onAcceptLiveMicResult:(BOOL)arg1 andLiveId:(unsigned long long)arg2 andLiveMicId:(id)arg3;
- (void)clearConnectData:(id)arg1;
- (BOOL)acceptLiveMic:(id)arg1;
- (void)onGetApplyLiveMicWithLiveId:(unsigned long long)arg1 fromAudience:(id)arg2;
- (void)report:(id)arg1;
- (void)doLiveUnConnectMic:(id)arg1;
- (void)recordConnectMicSuccess;
- (void)doLiveConnectMicSuccess:(id)arg1;
- (void)receiveLiveMicAudience:(id)arg1 withLiveId:(unsigned long long)arg2 fromMicAudiencCgi:(BOOL)arg3;
- (void)onGetLiveMicSuccWithLiveId:(unsigned long long)arg1 andAudience:(id)arg2;
- (void)onGetEnableApplyLiveMicWithLiveId:(unsigned long long)arg1 andResult:(BOOL)arg2;
- (void)onGetCloseLiveMicWithLiveId:(unsigned long long)arg1 andLiveMicId:(id)arg2;
- (void)onGetAcceptLiveMicWithLiveId:(unsigned long long)arg1 andLiveSdkInfo:(id)arg2;
- (void)onApplyLiveMicResult:(BOOL)arg1 andLiveId:(unsigned long long)arg2 andLiveMicId:(id)arg3;
- (BOOL)cancelLiveMic:(id)arg1 andLiveMicId:(id)arg2;
- (void)closeLiveMicWithTask:(id)arg1 audienceInfo:(id)arg2;
- (BOOL)closeLiveMic:(id)arg1 andLiveMicId:(id)arg2;
- (BOOL)audienceStopConnectMic;
- (BOOL)applyLiveMic;
- (void)clearData;
- (void)onTaskMgrInit;
- (void)onTaskStatusChange:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

