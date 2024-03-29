//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, WCContactData;

@protocol IVOIPExt

@optional
- (void)onOtherDeviceHandleTalk:(WCContactData *)arg1 WithStatus:(int)arg2;
- (void)onVoIPExtRemoteTerminate;
- (void)onVoIPExtRemoteCaptureResume;
- (void)onVoIPExtRemoteCaptureSuspend;
- (void)OnStartAudioUintFailed;
- (void)OnCallOverLoad:(WCContactData *)arg1 errNo:(int)arg2 errMsg:(NSString *)arg3;
- (void)OnCallBanned:(WCContactData *)arg1 errNo:(int)arg2 errMsg:(NSString *)arg3;
- (void)OnAutoHangUp:(WCContactData *)arg1;
- (void)OnCallInterrupt:(WCContactData *)arg1;
- (void)OnLightInterrupt:(BOOL)arg1;
- (void)OnMonitorWithSendRecvInfo:(int)arg1 andSendFPS:(int)arg2 andRecvFPS:(int)arg3 andSendKbps:(int)arg4 andRecvKbps:(int)arg5 andP2SInfo:(NSString *)arg6 andSpeed:(int *)arg7;
- (void)OnMonitorWithSendFPS:(int)arg1 andRecvFPS:(int)arg2;
- (void)OnMonitorChannelInfo:(unsigned int)arg1 andChannelType:(int)arg2;
- (void)OnTalkBrokenError:(WCContactData *)arg1 ErrNo:(int)arg2;
- (void)OnNetWorkError:(WCContactData *)arg1 ErrNo:(int)arg2;
- (void)OnSyncError:(WCContactData *)arg1 ErrNo:(int)arg2;
- (void)OnError:(WCContactData *)arg1 ErrNo:(int)arg2;
- (void)OnTimeOut:(WCContactData *)arg1;
- (void)OnInterrupt:(WCContactData *)arg1;
- (void)OnBeginTalk:(WCContactData *)arg1;
- (void)OnBeginConnect:(WCContactData *)arg1;
- (void)OnBeHanguped:(WCContactData *)arg1;
- (void)OnBeRejected:(WCContactData *)arg1;
- (void)OnPreConnect:(WCContactData *)arg1;
- (void)OnBeAccepted:(WCContactData *)arg1;
- (void)OnNoAnswer:(WCContactData *)arg1;
- (void)OnAccept:(WCContactData *)arg1 ErrNo:(int)arg2;
- (void)OnCall:(WCContactData *)arg1 ErrNo:(int)arg2;
@end

