//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LVBaseMgr.h"

#import "LVLiveServiceExt-Protocol.h"

@class LVLiveLikePostTask, NSMutableArray, NSString, NSTimer;

@interface LVLiveLikeDataMgr : LVBaseMgr <LVLiveServiceExt>
{
    BOOL _isPosting;
    BOOL _isDoinganimation;
    BOOL _isFirstSync;
    unsigned long long _liveId;
    NSString *_roomId;
    unsigned long long _currentLikeCount;
    unsigned long long _likeAnimationCount;
    NSMutableArray *_postTaskQueue;
    LVLiveLikePostTask *_postingTask;
    NSTimer *_animationTimer;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isFirstSync; // @synthesize isFirstSync=_isFirstSync;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) LVLiveLikePostTask *postingTask; // @synthesize postingTask=_postingTask;
@property(retain, nonatomic) NSMutableArray *postTaskQueue; // @synthesize postTaskQueue=_postTaskQueue;
@property(nonatomic) unsigned long long likeAnimationCount; // @synthesize likeAnimationCount=_likeAnimationCount;
@property(nonatomic) unsigned long long currentLikeCount; // @synthesize currentLikeCount=_currentLikeCount;
@property(nonatomic) BOOL isDoinganimation; // @synthesize isDoinganimation=_isDoinganimation;
@property(nonatomic) BOOL isPosting; // @synthesize isPosting=_isPosting;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)getMergedPostTask;
- (void)recordSelfLike;
- (BOOL)applyLikeWithPostTask:(id)arg1;
- (void)postNextTask;
- (void)postLiveLikeWithliveId;
- (void)onGetLiveMessageResult:(id)arg1 liveMessageResp:(id)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (void)updateLikeCount:(unsigned long long)arg1;
- (void)startLiveLikeAnimation;
- (void)onLiveLikeResult:(BOOL)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
- (id)initWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (id)initWithTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
