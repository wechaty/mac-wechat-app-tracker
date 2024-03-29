//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMNetExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSString, Reachability;
@protocol MMNetServiceDelegate;

@interface MMNetService : MMService <MMService, MMNetExt>
{
    BOOL m_isReachable;
    BOOL _m_isMacSleep;
    BOOL _m_lastIsReachable;
    int _m_lastNetStatus;
    Reachability *m_reach;
    id <MMNetServiceDelegate> m_delegate;
}

- (void).cxx_destruct;
@property int m_lastNetStatus; // @synthesize m_lastNetStatus=_m_lastNetStatus;
@property BOOL m_lastIsReachable; // @synthesize m_lastIsReachable=_m_lastIsReachable;
@property BOOL m_isMacSleep; // @synthesize m_isMacSleep=_m_isMacSleep;
@property id <MMNetServiceDelegate> m_delegate; // @synthesize m_delegate;
@property BOOL m_isReachable; // @synthesize m_isReachable;
@property(retain, nonatomic) Reachability *m_reach; // @synthesize m_reach;
- (int)CurrentQQUin;
- (int)CurrentWeixinUin;
- (id)CurrentUserName;
- (BOOL)OnHeadBeatCGIResponse:(const struct AutoBuffer *)arg1;
- (BOOL)GetHeartBeatRequestData:(struct AutoBuffer *)arg1 reqCmdId:(int *)arg2 respCmdId:(int *)arg3;
- (BOOL)IsAuthOK;
- (BOOL)MakeSureAuth;
- (BOOL)IsNetworkConnected;
- (BOOL)IsNetworkReachable;
- (void)SessionTimeout;
- (void)UnregisterKeyExtension;
- (void)RegisterKeyExtension;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (BOOL)currentNetworkIsWifi;
- (void)onServerNotify:(int)arg1 cmdID:(int)arg2 notifyData:(id)arg3;
- (void)mmnetNotifyStatus:(int)arg1;
- (void)reachabilityChange:(id)arg1;
- (BOOL)checkIsNetConnected;
- (BOOL)checkIsReachable;
- (void)clearReachability;
- (void)configReachability;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

