//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageExt-Protocol.h"
#import "IMessageServiceAppExt-Protocol.h"
#import "IMessageServiceEmoticonExt-Protocol.h"
#import "IMessageServiceFileExt-Protocol.h"
#import "IMessageServiceImageExt-Protocol.h"
#import "IMessageServiceTextExt-Protocol.h"
#import "IMessageServiceVideoExt-Protocol.h"
#import "MMAppMsgUploadMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "RecordUploadCDNMgrExt-Protocol.h"

@class MMRevokeMsgDB, MMThreadSafeDictionary, NSMutableArray, NSRecursiveLock, NSString;

@interface MMRevokeMsgService : MMService <IMessageServiceImageExt, IMessageServiceEmoticonExt, IMessageServiceTextExt, IMessageServiceVideoExt, RecordUploadCDNMgrExt, IMessageServiceFileExt, IMessageServiceAppExt, MMAppMsgUploadMgrExt, IMessageExt, MMService>
{
    MMRevokeMsgDB *_db;
    NSMutableArray *_revokingMessages;
    NSRecursiveLock *_lock;
    MMThreadSafeDictionary *_errorHandlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMThreadSafeDictionary *errorHandlers; // @synthesize errorHandlers=_errorHandlers;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *revokingMessages; // @synthesize revokingMessages=_revokingMessages;
@property(retain, nonatomic) MMRevokeMsgDB *db; // @synthesize db=_db;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)onDelAllMsg:(id)arg1;
- (void)onSendAppMsgFinished:(id)arg1 msgData:(id)arg2 isSuccess:(BOOL)arg3;
- (void)onUploadCDNRecordMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onStartUploadRet:(id)arg1 success:(BOOL)arg2;
- (void)onFileDidFinishUploadWithMessage:(id)arg1 isSuccess:(BOOL)arg2;
- (void)onVideoDidFinishUploadWithMessage:(id)arg1 isSuccess:(BOOL)arg2;
- (void)onTextMessageDidSent:(id)arg1 isSuccess:(BOOL)arg2;
- (void)onEmoticonMessageDidSent:(id)arg1 isSuccess:(BOOL)arg2;
- (void)onImageDidFinishUploadedWithMessage:(id)arg1 isSuccess:(BOOL)arg2;
- (BOOL)isMsgOutOfDate:(id)arg1;
- (BOOL)isRevokeMsgEditable:(id)arg1;
- (void)reEditRevokeMessageData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadRevokeMsgNode:(id)arg1;
- (void)addRevokeMessageData:(id)arg1;
- (void)sendRevokeRequest:(id)arg1;
- (long long)getMsgRevokeStatus:(id)arg1;
- (BOOL)isMsgRevoking:(id)arg1;
- (id)getMsgRevokeInfo:(id)arg1;
- (void)deleteMsgRevokeInfoByChat:(id)arg1;
- (BOOL)deleteMsgRevokeInfo:(id)arg1;
- (void)revokeOnMsgSent:(id)arg1 isSuccess:(BOOL)arg2;
- (void)reloadOnMsgRevoking:(id)arg1;
- (void)revokeErrorHandler:(id)arg1 wording:(id)arg2 isSuccess:(BOOL)arg3;
- (BOOL)recallMsgWithChatName:(id)arg1 msgData:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (BOOL)canRecallMsg:(id)arg1;
- (BOOL)canRecallMsgWhenSending;
- (int)revokeTimeLimitInSecond:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

