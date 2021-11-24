//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface SdkOauthAuthorizeConfirmReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasOpt:1;
    unsigned int hasAppid:1;
    unsigned int hasState:1;
    unsigned int hasBundleid:1;
    unsigned int hasAvatarId:1;
    unsigned int hasUniversalLink:1;
    unsigned int hasOpensdkVersion:1;
    unsigned int hasSdkToken:1;
    unsigned int hasOpensdkBundleid:1;
    unsigned int hasSdkTokenChk:1;
    unsigned int opt;
    unsigned int avatarId;
    unsigned int sdkTokenChk;
    BaseRequest *baseRequest;
    NSMutableArray *mutableScopeList;
    NSString *appid;
    NSString *state;
    NSString *bundleid;
    NSString *universalLink;
    NSString *opensdkVersion;
    NSString *sdkToken;
    NSString *opensdkBundleid;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetSdkTokenChk:) unsigned int sdkTokenChk; // @synthesize sdkTokenChk;
@property(readonly, nonatomic) BOOL hasSdkTokenChk; // @synthesize hasSdkTokenChk;
@property(retain, nonatomic, setter=SetOpensdkBundleid:) NSString *opensdkBundleid; // @synthesize opensdkBundleid;
@property(readonly, nonatomic) BOOL hasOpensdkBundleid; // @synthesize hasOpensdkBundleid;
@property(retain, nonatomic, setter=SetSdkToken:) NSString *sdkToken; // @synthesize sdkToken;
@property(readonly, nonatomic) BOOL hasSdkToken; // @synthesize hasSdkToken;
@property(retain, nonatomic, setter=SetOpensdkVersion:) NSString *opensdkVersion; // @synthesize opensdkVersion;
@property(readonly, nonatomic) BOOL hasOpensdkVersion; // @synthesize hasOpensdkVersion;
@property(retain, nonatomic, setter=SetUniversalLink:) NSString *universalLink; // @synthesize universalLink;
@property(readonly, nonatomic) BOOL hasUniversalLink; // @synthesize hasUniversalLink;
@property(nonatomic, setter=SetAvatarId:) unsigned int avatarId; // @synthesize avatarId;
@property(readonly, nonatomic) BOOL hasAvatarId; // @synthesize hasAvatarId;
@property(retain, nonatomic, setter=SetBundleid:) NSString *bundleid; // @synthesize bundleid;
@property(readonly, nonatomic) BOOL hasBundleid; // @synthesize hasBundleid;
@property(retain, nonatomic, setter=SetState:) NSString *state; // @synthesize state;
@property(readonly, nonatomic) BOOL hasState; // @synthesize hasState;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
@property(retain, nonatomic) NSMutableArray *mutableScopeList; // @synthesize mutableScopeList;
@property(nonatomic, setter=SetOpt:) unsigned int opt; // @synthesize opt;
@property(readonly, nonatomic) BOOL hasOpt; // @synthesize hasOpt;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addScopeFromArray:(id)arg1;
- (void)addScope:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *scope; // @dynamic scope;
- (id)scopeList;
- (id)init;

@end

