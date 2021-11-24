//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AccountServiceExt-Protocol.h"
#import "IMMSessionMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMService-Protocol.h"

@class ContactVerifyLogic, MMFriendRequestDataCollection, MMFriendVerifyMessageWindowController, NSRecursiveLock, NSString, OpenIMContactVerifyMgr;

@interface MMFriendRequestMgr : MMService <IMessageExt, IMMSessionMgrExt, AccountServiceExt, MMService>
{
    MMFriendRequestDataCollection *_friendRequestDataCollection;
    ContactVerifyLogic *_contactVerifyLogic;
    MMFriendVerifyMessageWindowController *_friendVerifyMsgWinController;
    OpenIMContactVerifyMgr *_openimVerifyMgr;
    NSRecursiveLock *_sumLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *sumLock; // @synthesize sumLock=_sumLock;
@property(retain, nonatomic) OpenIMContactVerifyMgr *openimVerifyMgr; // @synthesize openimVerifyMgr=_openimVerifyMgr;
@property(retain, nonatomic) MMFriendVerifyMessageWindowController *friendVerifyMsgWinController; // @synthesize friendVerifyMsgWinController=_friendVerifyMsgWinController;
@property(retain, nonatomic) ContactVerifyLogic *contactVerifyLogic; // @synthesize contactVerifyLogic=_contactVerifyLogic;
@property(retain, nonatomic) MMFriendRequestDataCollection *friendRequestDataCollection; // @synthesize friendRequestDataCollection=_friendRequestDataCollection;
- (void)onUserLogout;
- (void)askSessionByUserName:(id)arg1 isHandled:(char *)arg2;
- (void)handleContactVerifyMsg:(id)arg1;
- (void)sendVerifyUserRequestWithUserName:(id)arg1 opCode:(int)arg2 verifyMsg:(id)arg3 ticket:(id)arg4 verifyContactWrap:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)deleteFriendRequestWithFriendRequestUserName:(id)arg1;
- (void)deleteFriendRequestWithFriendRequestData:(id)arg1;
- (void)acceptFriendRequestWithFriendRequestData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addNewFriendWithContact:(id)arg1 verifyContactWrap:(id)arg2 verifyMsg:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addOpenIMFriendWithContact:(id)arg1 verifyContactWrap:(id)arg2 verifyMsg:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addNewFriendWithContact:(id)arg1 verifyContactWrap:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendFriendVerifyMessage:(id)arg1 withVerifyContactWrap:(id)arg2;
- (void)addNewFriendWithContact:(id)arg1 verifyContactWrap:(id)arg2;
- (void)showFriendVerifyWindowWithContact:(id)arg1 groupChatUserName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)calculateUnreadRequestSum;
- (void)clearUnreadFriendRequestCount;
- (id)friendRequests;
- (void)filterFriendRequestData:(id)arg1;
- (void)saveFriendRequestData;
- (void)loadFriendRequestData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

