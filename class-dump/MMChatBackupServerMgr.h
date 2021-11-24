//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMChatBackupServerLogicDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class MMChatBackupIndexDB, MMChatBackupServerLogic, NSArray, NSData, NSString;

@interface MMChatBackupServerMgr : MMService <MMChatBackupServerLogicDelegate, MMService>
{
    MMChatBackupServerLogic *m_serverLogic;
    MMChatBackupIndexDB *m_indexDB;
    BOOL _reTransfer;
    BOOL _isBackupImport;
    BOOL _transferTxtMsg;
    BOOL _isPhoneSupportTxtMsg;
    BOOL _isOneClickSucc;
    unsigned short _server_port;
    unsigned int _cryptUin;
    int _chatBackupMode;
    NSString *_server_id;
    NSData *_server_key;
    NSString *_server_hello;
    NSString *_server_ok;
    NSString *_server_ip;
    NSString *_server_ticket;
    NSArray *_sessionArray;
    long long _recoverStartTime;
    long long _recoverEndTime;
    unsigned long long _totalMsgCount;
    unsigned long long _totalSessionSize;
    NSString *_pcName;
    NSString *_pcAccouttName;
    NSString *_wifiName;
    NSString *_selfWifiName;
    unsigned long long _notifyCode;
    NSString *_deviceId;
    NSData *_autoReconnectToken;
    CDUnknownBlockType _didGetConnectInfoBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didGetConnectInfoBlock; // @synthesize didGetConnectInfoBlock=_didGetConnectInfoBlock;
@property(nonatomic) BOOL isOneClickSucc; // @synthesize isOneClickSucc=_isOneClickSucc;
@property(retain, nonatomic) NSData *autoReconnectToken; // @synthesize autoReconnectToken=_autoReconnectToken;
@property(nonatomic) BOOL isPhoneSupportTxtMsg; // @synthesize isPhoneSupportTxtMsg=_isPhoneSupportTxtMsg;
@property(nonatomic) BOOL transferTxtMsg; // @synthesize transferTxtMsg=_transferTxtMsg;
@property(nonatomic) int chatBackupMode; // @synthesize chatBackupMode=_chatBackupMode;
@property(nonatomic) BOOL isBackupImport; // @synthesize isBackupImport=_isBackupImport;
@property(nonatomic) BOOL reTransfer; // @synthesize reTransfer=_reTransfer;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) unsigned long long notifyCode; // @synthesize notifyCode=_notifyCode;
@property(retain, nonatomic) NSString *selfWifiName; // @synthesize selfWifiName=_selfWifiName;
@property(retain, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(retain, nonatomic) NSString *pcAccouttName; // @synthesize pcAccouttName=_pcAccouttName;
@property(retain, nonatomic) NSString *pcName; // @synthesize pcName=_pcName;
@property(nonatomic) unsigned long long totalSessionSize; // @synthesize totalSessionSize=_totalSessionSize;
@property(nonatomic) unsigned long long totalMsgCount; // @synthesize totalMsgCount=_totalMsgCount;
@property(nonatomic) long long recoverEndTime; // @synthesize recoverEndTime=_recoverEndTime;
@property(nonatomic) long long recoverStartTime; // @synthesize recoverStartTime=_recoverStartTime;
@property(retain, nonatomic) NSArray *sessionArray; // @synthesize sessionArray=_sessionArray;
@property(nonatomic) unsigned short server_port; // @synthesize server_port=_server_port;
@property(nonatomic) unsigned int cryptUin; // @synthesize cryptUin=_cryptUin;
@property(retain, nonatomic) NSString *server_ticket; // @synthesize server_ticket=_server_ticket;
@property(retain, nonatomic) NSString *server_ip; // @synthesize server_ip=_server_ip;
@property(retain, nonatomic) NSString *server_ok; // @synthesize server_ok=_server_ok;
@property(retain, nonatomic) NSString *server_hello; // @synthesize server_hello=_server_hello;
@property(retain, nonatomic) NSData *server_key; // @synthesize server_key=_server_key;
@property(retain, nonatomic) NSString *server_id; // @synthesize server_id=_server_id;
- (BOOL)shouldOpenRecoverTxtMsg;
- (void)deleteBackupRecordBy:(id)arg1;
- (BOOL)hasBackupRecord;
- (id)getAllBackupRecords;
- (void)onServerLogicCurrentProcessingSession:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)onServerLogicNotifyCode:(unsigned long long)arg1;
- (void)onServerLogicCurrentTransferSpeed:(float)arg1;
- (void)onGetConnectInfo:(id)arg1;
- (void)onGetQRCode:(id)arg1;
- (void)getConnectInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)startConnect;
- (BOOL)isLogout;
- (void)cancelPhoneNotSupportTxtMsgLogic;
- (void)cancelLogic;
- (void)endProcess;
- (void)stopWorkLogic;
- (void)continueCompleteRecoverLogic;
- (void)startWorkLogic;
- (void)stopServerMgr;
- (void)startServerMgr;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

