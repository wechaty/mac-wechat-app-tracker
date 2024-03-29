//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMCGIDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;
@protocol ContactInitLogicDelegate, OS_dispatch_queue;

@interface ContactInitLogic : NSObject <MMCGIDelegate>
{
    struct ContactInitSeqs m_contactInitSeqs;
    NSMutableArray *m_usernames;
    NSMutableArray *m_failedUsernames;
    NSMutableSet *m_totalContacts;
    NSMutableSet *m_finishedContacts;
    NSObject<OS_dispatch_queue> *m_queue;
    NSRecursiveLock *m_lock;
    unsigned long long m_scene;
    id <ContactInitLogicDelegate> m_delegate;
    NSMutableDictionary *m_contactRetryList;
    unsigned int m_contactBatchIndex;
    NSMutableSet *m_sessionList;
    BOOL _hasStop;
}

+ (void)clearRetryDataItem;
+ (BOOL)isRetryEnabled:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasStop; // @synthesize hasStop=_hasStop;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (BOOL)p_errorHandleGetContactsRsp:(id)arg1;
- (void)handleGetContactsRsp:(id)arg1 ret:(BOOL)arg2;
- (BOOL)tryGetContactsWithUserNames:(id)arg1 batchIndex:(unsigned int)arg2;
- (BOOL)tryGetContacts;
- (void)doGetContactLogic;
- (void)handleGetUsernamesRsp:(id)arg1 ret:(BOOL)arg2;
- (BOOL)tryGetUsernames;
- (void)clearData;
- (void)notifyInitFail;
- (void)notifyInitSucceed;
- (void)checkIsSucceed;
- (void)stopContactInitLogic;
- (BOOL)startContactInitLogicWithUserNames:(id)arg1;
- (BOOL)startContactInitLogic;
- (void)dealloc;
- (id)initWithScene:(unsigned long long)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

