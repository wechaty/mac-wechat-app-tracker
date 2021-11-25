//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LVBaseMgr.h"

#import "LVLiveServiceExt-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface LVMessageMgr : LVBaseMgr <LVLiveServiceExt>
{
    BOOL _isStartGetLiveComment;
    BOOL _isLongPulling;
    BOOL _isLiveClose;
    NSMutableArray *_commentArray;
    NSTimer *_longPullingTimer;
    double _lastLongPullingTime;
    NSMutableDictionary *_commentTagDict;
    long long _currCommentSeq;
}

- (void).cxx_destruct;
@property(nonatomic) long long currCommentSeq; // @synthesize currCommentSeq=_currCommentSeq;
@property(retain, nonatomic) NSMutableDictionary *commentTagDict; // @synthesize commentTagDict=_commentTagDict;
@property(nonatomic) BOOL isLiveClose; // @synthesize isLiveClose=_isLiveClose;
@property(nonatomic) double lastLongPullingTime; // @synthesize lastLongPullingTime=_lastLongPullingTime;
@property(nonatomic) BOOL isLongPulling; // @synthesize isLongPulling=_isLongPulling;
@property(retain, nonatomic) NSTimer *longPullingTimer; // @synthesize longPullingTimer=_longPullingTimer;
@property(nonatomic) BOOL isStartGetLiveComment; // @synthesize isStartGetLiveComment=_isStartGetLiveComment;
@property(retain, nonatomic) NSMutableArray *commentArray; // @synthesize commentArray=_commentArray;
- (void)onGetLiveInfoWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 andLiveInfo:(id)arg3;
- (void)onLiveIsEnableComment:(BOOL)arg1 notifyContent:(id)arg2 liveId:(unsigned long long)arg3;
- (void)onBanLiveCommentResult:(BOOL)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
- (id)filterLikeMsg:(id)arg1;
- (id)tranferToLVMessage:(id)arg1 roomId:(id)arg2;
- (void)continueFetchCommentWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (void)appendCommentsArrayCache:(id)arg1;
- (id)getCommentArrayFilterSelfCommit:(id)arg1;
- (void)handleCommentsSeq:(id)arg1;
- (id)getCommentArrayFilterRepeatCommit:(id)arg1;
- (void)appendComments:(id)arg1 filterSelfCommit:(BOOL)arg2;
- (void)checkCommentArrayOverLimit:(unsigned long long)arg1;
- (unsigned long long)maxCommentCount;
- (void)recordUserLiveCommentCountFromCGI:(id)arg1;
- (void)onGetLiveMessageResult:(id)arg1 liveMessageResp:(id)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (id)liveTaskById:(unsigned long long)arg1;
- (BOOL)banLiveComment:(BOOL)arg1;
- (void)checkIsNeedToStartRequest;
- (void)continueLongPullingRequest;
- (BOOL)isOverLimitSequence;
- (BOOL)checkOverLimitSequence;
- (void)deleteComment:(long long)arg1;
- (void)recordSelfComment;
- (void)postLiveMessage:(id)arg1;
- (BOOL)getLiveMessageWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (void)appendLiveComment:(id)arg1;
- (void)appendSelfCommitLiveComment:(id)arg1;
- (long long)lastIndexForInsert:(id)arg1;
- (unsigned long long)nextIndexForAppend:(id)arg1;
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
