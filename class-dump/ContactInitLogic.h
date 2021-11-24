//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMCGIDelegate-Protocol.h"

@class NSMutableArray, NSRecursiveLock, NSString;
@protocol ContactInitLogicDelegate, OS_dispatch_queue;

@interface ContactInitLogic : NSObject <MMCGIDelegate>
{
    struct ContactInitSeqs m_contactInitSeqs;
    NSMutableArray *m_usernames;
    NSMutableArray *m_failedUsernames;
    unsigned long long m_totalContactCount;
    unsigned long long m_finishedContactCount;
    NSObject<OS_dispatch_queue> *m_queue;
    NSRecursiveLock *m_lock;
    unsigned int m_sessionID;
    BOOL _hasStop;
    id <ContactInitLogicDelegate> _contactInitdelegate;
}

+ (void)setContactInitedStatus:(BOOL)arg1;
+ (BOOL)isContactInited;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasStop; // @synthesize hasStop=_hasStop;
@property(nonatomic) __weak id <ContactInitLogicDelegate> contactInitdelegate; // @synthesize contactInitdelegate=_contactInitdelegate;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)handleGetContactsRsp:(id)arg1;
- (BOOL)tryGetContacts;
- (void)doGetContactLogic;
- (void)handleGetUsernamesRsp:(id)arg1;
- (BOOL)tryGetUsernames;
- (void)clearData;
- (void)notifyInitFail;
- (void)notifyInitSucceed;
- (void)checkIsSucceed;
- (void)stopContactInitLogic;
- (BOOL)startContactInitLogic;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

