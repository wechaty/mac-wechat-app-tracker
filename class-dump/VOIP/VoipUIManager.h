//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AccountServiceExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMNetExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MMVoipBaseWindowControllerDelegate-Protocol.h"
#import "MMVoipUserNotificationDelegate-Protocol.h"

@class MMMultiTalkWindowController, MMVoipCallerWindowController, MMVoipReceiverWindowController, MMVoipUserNotificationWindowController, NSLock, NSMutableSet, NSString;

@interface VoipUIManager : MMService <IMessageExt, MMNetExt, AccountServiceExt, MMVoipUserNotificationDelegate, MMVoipBaseWindowControllerDelegate, MMService, MMConfigMgrExt>
{
    BOOL m_isCaller;
    BOOL _isLockScreen;
    MMVoipCallerWindowController *m_VoipCallerWindowController;
    MMVoipReceiverWindowController *m_VoipReceiverWindowController;
    MMVoipUserNotificationWindowController *m_VoipUserNotiWindowController;
    MMMultiTalkWindowController *m_VoipMultiCallWindowController;
    NSMutableSet *_processingNotifyVoipInviteMsgSet;
    NSLock *_m_lock;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isLockScreen; // @synthesize isLockScreen=_isLockScreen;
@property(retain, nonatomic) NSLock *m_lock; // @synthesize m_lock=_m_lock;
@property(retain, nonatomic) NSMutableSet *processingNotifyVoipInviteMsgSet; // @synthesize processingNotifyVoipInviteMsgSet=_processingNotifyVoipInviteMsgSet;
@property(nonatomic) BOOL m_isCaller; // @synthesize m_isCaller;
@property(retain, nonatomic) MMMultiTalkWindowController *m_VoipMultiCallWindowController; // @synthesize m_VoipMultiCallWindowController;
@property(retain, nonatomic) MMVoipUserNotificationWindowController *m_VoipUserNotiWindowController; // @synthesize m_VoipUserNotiWindowController;
@property(retain, nonatomic) MMVoipReceiverWindowController *m_VoipReceiverWindowController; // @synthesize m_VoipReceiverWindowController;
@property(retain, nonatomic) MMVoipCallerWindowController *m_VoipCallerWindowController; // @synthesize m_VoipCallerWindowController;
- (void)onNetStatusChange:(int)arg1;
- (void)onServerNotify:(int)arg1 cmdID:(int)arg2 notifyData:(id)arg3;
- (void)restartTalk;
- (void)receiveSleepNotification;
- (void)receiveWakeNotification;
- (void)onUserLogout;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)onNewMsgNotification:(id)arg1 msgData:(id)arg2;
- (void)onReciveCallCancle;
- (void)didWindowClose;
- (void)onHangUpButtonClick:(id)arg1;
- (void)onSwitchVoiceButtonClick:(id)arg1;
- (void)onAnswerButtonClick:(id)arg1;
- (void)hasNotAudioMicDeviceAuthorized;
- (void)handleVoipMsgNotification:(id)arg1 msgData:(id)arg2;
- (void)windowDidColsed:(id)arg1;
- (void)alertVoipCallerWindow:(id)arg1 contact:(id)arg2 initViewMode:(int)arg3;
- (void)showMultiTalkWindowController;
- (void)alertReceiverWindow:(id)arg1 contact:(id)arg2 initViewMode:(int)arg3;
- (void)insetLocalBusyMessage:(id)arg1 andInitViewMode:(int)arg2;
- (void)endcall;
- (void)delayCloseWindow;
- (void)delayFadeOutWindowAnimate;
- (void)endCallWithDelay:(double)arg1;
- (void)forceToCloseAllWindow;
- (void)orderFrontVoipWindow;
- (BOOL)openVoipWindowWithContact:(id)arg1 isCaller:(BOOL)arg2 andMsgWrap:(id)arg3 andInitViewMode:(int)arg4;
- (void)openVideoVoipViewWithContact:(id)arg1 isCaller:(BOOL)arg2 andMsgWrap:(id)arg3 isEarMode:(BOOL)arg4;
- (void)renderOnOppositeRenderLayer:(id)arg1 Degree:(float)arg2;
- (id)getConflictWording;
- (BOOL)isMultiTalkWorking;
- (BOOL)isVoipWorking;
- (void)onServiceWillSleep;
- (void)onServiceDidWake;
- (void)onServiceTerminate;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)destory;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

