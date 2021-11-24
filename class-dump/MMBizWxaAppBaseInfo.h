//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface MMBizWxaAppBaseInfo : PBGeneratedMessage
{
    unsigned int hasAppid:1;
    unsigned int hasUsername:1;
    unsigned int hasVersionType:1;
    unsigned int hasAppVersion:1;
    unsigned int hasScene:1;
    unsigned int hasPreScene:1;
    unsigned int hasBackGround:1;
    unsigned int hasPagePath:1;
    unsigned int hasPubVersion:1;
    unsigned int versionType;
    unsigned int appVersion;
    unsigned int scene;
    unsigned int preScene;
    unsigned int backGround;
    unsigned int pubVersion;
    NSString *appid;
    NSString *username;
    NSString *pagePath;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetPubVersion:) unsigned int pubVersion; // @synthesize pubVersion;
@property(readonly, nonatomic) BOOL hasPubVersion; // @synthesize hasPubVersion;
@property(retain, nonatomic, setter=SetPagePath:) NSString *pagePath; // @synthesize pagePath;
@property(readonly, nonatomic) BOOL hasPagePath; // @synthesize hasPagePath;
@property(nonatomic, setter=SetBackGround:) unsigned int backGround; // @synthesize backGround;
@property(readonly, nonatomic) BOOL hasBackGround; // @synthesize hasBackGround;
@property(nonatomic, setter=SetPreScene:) unsigned int preScene; // @synthesize preScene;
@property(readonly, nonatomic) BOOL hasPreScene; // @synthesize hasPreScene;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(nonatomic, setter=SetAppVersion:) unsigned int appVersion; // @synthesize appVersion;
@property(readonly, nonatomic) BOOL hasAppVersion; // @synthesize hasAppVersion;
@property(nonatomic, setter=SetVersionType:) unsigned int versionType; // @synthesize versionType;
@property(readonly, nonatomic) BOOL hasVersionType; // @synthesize hasVersionType;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

