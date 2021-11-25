//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MessageData, NSArray, NSDictionary, NSString;

@protocol IMessageExt <NSObject>

@optional
- (void)onFastSyncStop;
- (void)onFastSyncStart;
- (void)OnHistoryRecordRevoked:(NSString *)arg1 historyId:(unsigned long long)arg2;
- (void)onGetStatusNotifyClearSessionFunction:(NSArray *)arg1;
- (void)onGetStatusNotifyDeleteSessionFunction:(NSArray *)arg1;
- (void)onGetStatusNotifyHideSessionFunction:(NSDictionary *)arg1;
- (void)onGetStatusNotifyEnterFunction:(NSDictionary *)arg1;
- (void)onGetStatusNotifyMarkFunction:(NSDictionary *)arg1;
- (void)onGetStatusNotifyCommand:(NSDictionary *)arg1;
- (void)onOperateMsgList:(NSArray *)arg1 opTime:(unsigned int)arg2;
- (void)onGetSessionListFromStatusNotify:(NSArray *)arg1;
- (void)onGetSessionListFromSyncCGI:(NSArray *)arg1;
- (void)onUnreadSession:(NSString *)arg1;
- (void)onQuitSession:(NSString *)arg1;
- (void)onEnterSession:(NSString *)arg1;
- (void)onUnReadCountChange:(NSString *)arg1;
- (void)onAddMsgListForSession:(NSDictionary *)arg1;
- (void)onMsgDeletedForSession:(NSString *)arg1;
- (void)onDelAllMsg:(NSString *)arg1;
- (void)onRecvBetaMsg:(MessageData *)arg1;
- (void)onRecvDownloadItem:(MessageData *)arg1;
- (void)onChatSyncMsgSendFail:(MessageData *)arg1;
- (void)onRecvChatSyncMsg:(MessageData *)arg1;
- (void)onGetNewXmlMsg:(NSString *)arg1 type:(NSString *)arg2 msgData:(MessageData *)arg3;
- (void)onNewMsgNotification:(NSString *)arg1 msgData:(MessageData *)arg2;
- (void)onAddRevokePromptMsg:(NSString *)arg1 msgData:(MessageData *)arg2;
- (void)onDelMsg:(NSString *)arg1 msgData:(MessageData *)arg2 isRevoke:(BOOL)arg3;
- (void)onModMsg:(NSString *)arg1 msgData:(MessageData *)arg2;
- (void)onAddVoipMsgMsgWithChatName:(NSString *)arg1 msgData:(MessageData *)arg2;
- (void)onAddYoMsgWithChatName:(NSString *)arg1 msgData:(MessageData *)arg2;
- (void)onAddSysMsg:(NSString *)arg1 msgData:(MessageData *)arg2;
- (void)onAddMsg:(NSString *)arg1 msgData:(MessageData *)arg2;
@end
