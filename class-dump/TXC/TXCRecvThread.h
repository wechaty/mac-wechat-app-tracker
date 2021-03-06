//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

@interface TXCRecvThread : NSObject
{
    struct CTXRtmpRecvThread *_instance;
    NSLock *_instanceMutex;
    NSString *_originUrl;
    NSString *_connectUrl;
    NSString *_userID;
    BOOL _bQuicChannel;
}

- (void).cxx_destruct;
- (void)requestKeyFrame:(id)arg1;
- (id)getRecvStatus;
- (void)stopThread;
- (void)startThread:(id)arg1;
- (BOOL)checkIsUrlEncoded:(id)arg1;
- (id)init:(id)arg1 connectUrl:(id)arg2 quic:(BOOL)arg3 userID:(id)arg4;

@end

