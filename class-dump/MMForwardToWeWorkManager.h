//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"
#import "AppMessageHandlerDelegate-Protocol.h"
#import "MMForwardToWeWorkLogicDelegate-Protocol.h"
#import "MMUploadProgressWindowDelegate-Protocol.h"
#import "RecordMessageHandlerDelegate-Protocol.h"

@class AppMessageHandler, FFProcessReqsvrLogicZZ, MMForwardToWeWorkLogic, MMUploadProgressWindow, MessageData, NSMutableArray, NSRecursiveLock, NSString, NSTimer, RecordMessageHandler;

@interface MMForwardToWeWorkManager : NSObject <MMForwardToWeWorkLogicDelegate, AccountServiceExt, RecordMessageHandlerDelegate, AppMessageHandlerDelegate, MMUploadProgressWindowDelegate>
{
    BOOL _isForwarding;
    BOOL _isAccepting;
    int _acceptingMessageType;
    MMForwardToWeWorkLogic *_forwardLogic;
    NSString *_key;
    long long _sendMsgType;
    NSString *_encryptedMessage;
    NSRecursiveLock *_forwardingLock;
    NSRecursiveLock *_acceptingLock;
    MessageData *_forwardingMessage;
    unsigned long long _currentHandleFileSizeCount;
    unsigned long long _needHandleFileSizeCount;
    unsigned long long _needDownloadFileSizeCount;
    unsigned long long _currentProgress;
    NSTimer *_encodeWaitTimer;
    NSTimer *_randomProgressTimer;
    RecordMessageHandler *_recordMessageHandler;
    AppMessageHandler *_appMessageHandle;
    FFProcessReqsvrLogicZZ *_messageSendLogic;
    MMUploadProgressWindow *_uploadProgressWindow;
    NSMutableArray *_tempUploadExtendInfos;
    NSMutableArray *_needHandleDataID;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *needHandleDataID; // @synthesize needHandleDataID=_needHandleDataID;
@property(retain, nonatomic) NSMutableArray *tempUploadExtendInfos; // @synthesize tempUploadExtendInfos=_tempUploadExtendInfos;
@property(retain, nonatomic) MMUploadProgressWindow *uploadProgressWindow; // @synthesize uploadProgressWindow=_uploadProgressWindow;
@property(retain, nonatomic) FFProcessReqsvrLogicZZ *messageSendLogic; // @synthesize messageSendLogic=_messageSendLogic;
@property(retain, nonatomic) AppMessageHandler *appMessageHandle; // @synthesize appMessageHandle=_appMessageHandle;
@property(retain, nonatomic) RecordMessageHandler *recordMessageHandler; // @synthesize recordMessageHandler=_recordMessageHandler;
@property(retain, nonatomic) NSTimer *randomProgressTimer; // @synthesize randomProgressTimer=_randomProgressTimer;
@property(retain, nonatomic) NSTimer *encodeWaitTimer; // @synthesize encodeWaitTimer=_encodeWaitTimer;
@property(nonatomic) unsigned long long currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) unsigned long long needDownloadFileSizeCount; // @synthesize needDownloadFileSizeCount=_needDownloadFileSizeCount;
@property(nonatomic) unsigned long long needHandleFileSizeCount; // @synthesize needHandleFileSizeCount=_needHandleFileSizeCount;
@property(nonatomic) unsigned long long currentHandleFileSizeCount; // @synthesize currentHandleFileSizeCount=_currentHandleFileSizeCount;
@property(nonatomic) BOOL isAccepting; // @synthesize isAccepting=_isAccepting;
@property(retain, nonatomic) MessageData *forwardingMessage; // @synthesize forwardingMessage=_forwardingMessage;
@property(nonatomic) int acceptingMessageType; // @synthesize acceptingMessageType=_acceptingMessageType;
@property(nonatomic) BOOL isForwarding; // @synthesize isForwarding=_isForwarding;
@property(retain, nonatomic) NSRecursiveLock *acceptingLock; // @synthesize acceptingLock=_acceptingLock;
@property(retain, nonatomic) NSRecursiveLock *forwardingLock; // @synthesize forwardingLock=_forwardingLock;
@property(retain, nonatomic) NSString *encryptedMessage; // @synthesize encryptedMessage=_encryptedMessage;
@property(nonatomic) long long sendMsgType; // @synthesize sendMsgType=_sendMsgType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) MMForwardToWeWorkLogic *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
- (void)onAllNeedDownlownRecordMessageOK;
- (void)onOneNeedDownlownRecordMessageFinish:(unsigned int)arg1 andLocalDataID:(id)arg2;
- (void)onOneNeedDownloadRecordMessageProgress:(unsigned int)arg1 andLocalDataID:(id)arg2;
- (void)onRecordMsgUploadCDNModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onCurrentFileUploadFinish:(unsigned int)arg1 andLocalDataID:(id)arg2;
- (void)onCurrentFileUploadProgress:(unsigned int)arg1 andLocalDataID:(id)arg2;
- (void)onAppMsgUploadFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)onUserLogout;
- (int)calculateMessageCount:(id)arg1 andCount:(int)arg2;
- (int)calculateNeedHandleSizeCount:(id)arg1 andCount:(int)arg2 andDepth:(unsigned int)arg3;
- (void)calculateNeedHandleSizeCount:(id)arg1 andCount:(int)arg2 andDepth:(unsigned int)arg3 andIsHDImage:(BOOL)arg4;
- (unsigned long long)calculateMessageSizeCount:(id)arg1 andCount:(unsigned long long)arg2;
- (void)sumMessageSize:(id)arg1;
- (void)sumNeedHandleSize:(id)arg1;
- (void)onStopUploadTask;
- (void)dealGetMessageReport:(id)arg1 willSendUserNames:(id)arg2;
- (void)getForwardInfoIsError:(unsigned int)arg1;
- (void)getDecryptedMessageisSuccess:(id)arg1;
- (void)getEncryptedMessageisSuccess:(id)arg1;
- (void)randomStartProgress;
- (void)endEncodegWaitTimer;
- (void)startRandomProgress;
- (void)stopRandomProgress;
- (void)closeMultipleSelect;
- (void)stopForwardMessage;
- (void)startEncodeWaitTimer;
- (BOOL)decryptForwardMessage:(id)arg1;
- (BOOL)openWeWorkBySchema;
- (id)dealCannotSendMessageType:(id)arg1;
- (void)getUploadExtendInfos:(id)arg1;
- (id)getWeWorkVersionFromSystem;
- (BOOL)checkAndEncryptMessageData:(id)arg1;
- (BOOL)checkAndEncryptMessageDatas:(id)arg1;
- (void)cleanAndInitAllData:(id)arg1;
- (BOOL)requestMessageFromWeWork:(id)arg1;
- (BOOL)processForward:(id)arg1;
- (BOOL)isAcceptingForwardMessage;
- (BOOL)isForwardingMessage;
- (id)randomGeneratedKey;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

