//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LVLiveApplyConnectMicAudience : NSObject
{
    BOOL _isSelf;
    BOOL _isSwitchVideo;
    int _closeRole;
    NSString *_sdkUserId;
    NSString *_displayName;
    NSString *_avatarUrlString;
    NSString *_avatarHDUrlString;
    NSString *_liveMicId;
    NSString *_identityId;
    NSString *_roomId;
    unsigned long long _startConnectTime;
    unsigned long long _endConnectTime;
}

- (void).cxx_destruct;
@property(nonatomic) int closeRole; // @synthesize closeRole=_closeRole;
@property(nonatomic) unsigned long long endConnectTime; // @synthesize endConnectTime=_endConnectTime;
@property(nonatomic) unsigned long long startConnectTime; // @synthesize startConnectTime=_startConnectTime;
@property(nonatomic) BOOL isSwitchVideo; // @synthesize isSwitchVideo=_isSwitchVideo;
@property(nonatomic) BOOL isSelf; // @synthesize isSelf=_isSelf;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
@property(copy, nonatomic) NSString *liveMicId; // @synthesize liveMicId=_liveMicId;
@property(copy, nonatomic) NSString *avatarHDUrlString; // @synthesize avatarHDUrlString=_avatarHDUrlString;
@property(copy, nonatomic) NSString *avatarUrlString; // @synthesize avatarUrlString=_avatarUrlString;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;

@end
