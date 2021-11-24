//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LocalAreaCommunicationServerDelegate-Protocol.h"
#import "MMCGIDelegate-Protocol.h"
#import "MMChatBackupBasicLogicDelegate-Protocol.h"

@class MMChatBackupBackupLogic, MMChatBackupBasicLogic, MMChatBackupRecoverLogic, MMChatLogProtoHandler, MMLocalAreaCommunicationServer, MMTimer, NSDate, NSString;
@protocol MMChatBackupServerLogicDelegate;

@interface MMChatBackupServerLogic : NSObject <LocalAreaCommunicationServerDelegate, MMChatBackupBasicLogicDelegate, MMCGIDelegate>
{
    BOOL m_bServerLogicStop;
    BOOL m_bStartConnect;
    BOOL m_bPrepareStart;
    BOOL m_bStartTransfer;
    MMLocalAreaCommunicationServer *m_networkHandler;
    MMChatLogProtoHandler *m_protoHandler;
    MMChatBackupBasicLogic *m_processLogic;
    MMTimer *m_transferSpeedTimer;
    MMTimer *m_connectClientTimer;
    MMTimer *m_weakTransferClientTimer;
    MMTimer *m_weakTransferSpeedTimer;
    BOOL m_bDone;
    MMChatBackupBackupLogic *backupLogic;
    MMChatBackupRecoverLogic *recoverLogic;
    NSString *phoneType;
    unsigned long long m_transferLength;
    NSDate *m_startTransferDate;
    id <MMChatBackupServerLogicDelegate> _serverLogicDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMChatBackupServerLogicDelegate> serverLogicDelegate; // @synthesize serverLogicDelegate=_serverLogicDelegate;
- (id)genAutoReconnectTokenWithBits:(int)arg1;
- (void)_recoverSpeedReport:(unsigned long long)arg1;
- (void)_backupSpeedReport:(unsigned long long)arg1;
- (void)processOnMainThreadCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)processCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)processOnMainThreadNotifyCode:(unsigned long long)arg1;
- (void)onBasicProgresssCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBasicLogicNotifyEvent:(unsigned long long)arg1;
- (BOOL)onBasicLogicSendData:(id)arg1;
- (void)notifyServerAutoReconnected;
- (void)onServerAutoReconnecting;
- (void)onServerDisconnect;
- (void)onServerConnected;
- (void)onServerReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (BOOL)sendCommandResponseWithCommand:(int)arg1;
- (BOOL)sendData:(id)arg1;
- (void)p_processHeartBeatResponseData:(id)arg1;
- (void)p_processHeartBeatRequestData:(id)arg1;
- (void)p_processCancelRequestData:(id)arg1;
- (void)p_processCommandResponseData:(id)arg1;
- (void)p_processCommandRequestData:(id)arg1;
- (void)p_processAuthenticateRequestData:(id)arg1;
- (void)processSvrIDRequest:(id)arg1;
- (void)p_dataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)getConnectInfo:(id)arg1;
- (void)getQRCodeWithIP:(id)arg1 Port:(unsigned short)arg2 WifiName:(id)arg3 TotalSize:(unsigned long long)arg4;
- (void)checkTransferWeakConnect;
- (void)resetTransferConnectTimer;
- (void)checkTransferConnect;
- (void)checkTransferSpeed;
- (void)checkConnectWithClient;
- (void)startPeerConnect;
- (void)startConnect;
- (void)sendCancelRequest;
- (void)continueCompleteRecoverLogic;
- (void)cancelPhoneNotSupportTxtMsgLogic;
- (void)cancelLogic;
- (void)stopWorkLogic;
- (void)startWorkLogic;
- (void)stopServerLogic;
- (void)startServerLogic;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

