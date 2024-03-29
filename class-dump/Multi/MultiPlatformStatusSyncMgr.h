//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageExt-Protocol.h"
#import "MMCGIDelegate-Protocol.h"
#import "MMService-Protocol.h"
#import "SyncExt-Protocol.h"

@class MultiPlatformStatusData, NSString;

@interface MultiPlatformStatusSyncMgr : MMService <MMCGIDelegate, IMessageExt, SyncExt, MMService>
{
    BOOL _hasSyncSessionOrder;
    BOOL _syncingDeviceName;
    MultiPlatformStatusData *_cachedData;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL syncingDeviceName; // @synthesize syncingDeviceName=_syncingDeviceName;
@property(retain, nonatomic) MultiPlatformStatusData *cachedData; // @synthesize cachedData=_cachedData;
@property(nonatomic) BOOL hasSyncSessionOrder; // @synthesize hasSyncSessionOrder=_hasSyncSessionOrder;
- (void)parseDownloadFileList:(id)arg1;
- (void)onGetStatusNotifyClearSessionFunction:(id)arg1;
- (void)onGetStatusNotifyDeleteSessionFunction:(id)arg1;
- (void)onGetStatusNotifyHideSessionFunction:(id)arg1;
- (void)onGetStatusNotifyMarkFunction:(id)arg1;
- (void)onGetStatusNotifyCommand:(id)arg1;
- (void)NotifyShareCardMsgStatus:(id)arg1;
- (BOOL)shouldSendSyncDeviceNameCGI;
- (id)mainDeviceName;
- (void)saveCache;
- (void)loadCache;
- (void)sendUnlockMessageWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendStateCGIWithIsActive:(BOOL)arg1 muted:(BOOL)arg2;
- (void)sendInactiveStateWithMuted:(BOOL)arg1;
- (void)sendActiveStateWithMuted:(BOOL)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)sendStatusNotifyReq:(unsigned int)arg1 chatName:(id)arg2 function:(id)arg3;
- (void)sendStatusNotifyReq:(unsigned int)arg1 chatName:(id)arg2;
- (void)markVoiceMessageAsRead:(id)arg1;
- (void)NotifyMigratePause:(id)arg1 withSvrID:(id)arg2;
- (void)NotifyChatBackupMigrateWindowClose:(id)arg1;
- (void)NotifyGetSessionOrderIfNeeded;
- (void)NotifyUnReadSession:(id)arg1;
- (void)NotifyHideSession:(id)arg1;
- (void)NotifyReadSession:(id)arg1;
- (void)NotifyQuitSession:(id)arg1;
- (void)NotifyEnterSession:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

