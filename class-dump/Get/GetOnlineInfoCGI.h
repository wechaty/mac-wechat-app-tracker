//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMNetServiceExt-Protocol.h"

@class NSString;
@protocol GetOnlineInfoCGIExt;

@interface GetOnlineInfoCGI : NSObject <MMNetServiceExt>
{
    BOOL _isSessionTimeout;
    BOOL _isFirstActiveMsgAfterQRCodeAuth;
    unsigned int _curOnlineVersion;
    unsigned int _currentOnlineStatus;
    id <GetOnlineInfoCGIExt> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isFirstActiveMsgAfterQRCodeAuth; // @synthesize isFirstActiveMsgAfterQRCodeAuth=_isFirstActiveMsgAfterQRCodeAuth;
@property(nonatomic) BOOL isSessionTimeout; // @synthesize isSessionTimeout=_isSessionTimeout;
@property(nonatomic) __weak id <GetOnlineInfoCGIExt> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int currentOnlineStatus; // @synthesize currentOnlineStatus=_currentOnlineStatus;
@property(nonatomic) unsigned int curOnlineVersion; // @synthesize curOnlineVersion=_curOnlineVersion;
- (void)onSessionTimeout;
- (BOOL)shouldNotifyLockStateChangedWithStatus:(unsigned int)arg1;
- (BOOL)shouldSendActiveStateCGIWithStatus:(unsigned int)arg1;
- (void)sendGetOnlineInfoCGIWithCompletion:(CDUnknownBlockType)arg1;
- (void)tryGetOnlineStatus;
- (void)tryGetOnlineInfo:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

