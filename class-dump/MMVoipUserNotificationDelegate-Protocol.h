//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MultiTalkGroup;

@protocol MMVoipUserNotificationDelegate <NSObject>

@optional
- (void)onMultiTalkUserNotificationReceiveTimeOutWithGroup:(MultiTalkGroup *)arg1;
- (void)onMultiTalkUserNotificationRejectWithGroup:(MultiTalkGroup *)arg1;
- (void)onMultiTalkUserNotificationAcceptWithGroup:(MultiTalkGroup *)arg1;
- (void)onReciveCallCancle;
- (void)didWindowClose;
- (void)onHangUpButtonClick:(id)arg1;
- (void)onSwitchVoiceButtonClick:(id)arg1;
- (void)onAnswerButtonClick:(id)arg1;
- (void)hasNotAudioMicDeviceAuthorized;
@end

