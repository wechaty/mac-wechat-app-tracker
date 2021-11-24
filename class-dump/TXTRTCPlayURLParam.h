//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TXTRTCPlayURLParam : NSObject
{
    BOOL _isNumRoomId;
    int _sdkAppId;
    int _appScene;
    int _streamType;
    NSString *_userId;
    NSString *_userSig;
    NSString *_privateMapKey;
    NSString *_roomId;
    unsigned long long _protocolType;
    NSString *_remoteUserId;
    NSString *_url;
}

+ (id)parseURL:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *remoteUserId; // @synthesize remoteUserId=_remoteUserId;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(nonatomic) unsigned long long protocolType; // @synthesize protocolType=_protocolType;
@property(nonatomic) BOOL isNumRoomId; // @synthesize isNumRoomId=_isNumRoomId;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *privateMapKey; // @synthesize privateMapKey=_privateMapKey;
@property(retain, nonatomic) NSString *userSig; // @synthesize userSig=_userSig;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) int appScene; // @synthesize appScene=_appScene;
@property(nonatomic) int sdkAppId; // @synthesize sdkAppId=_sdkAppId;
- (id)description;
- (id)generateEnterRoomParam;
@property(readonly, nonatomic) BOOL isRoomProtocol;
@property(readonly, nonatomic) BOOL isTrtcProtocol;
- (long long)isValid;
- (id)init;

@end

