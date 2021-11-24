//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ShowOutItem : PBGeneratedMessage
{
    unsigned int hasUsername:1;
    unsigned int hasVersionType:1;
    unsigned int hasAppVersion:1;
    unsigned int hasAppid:1;
    unsigned int versionType;
    unsigned int appVersion;
    NSString *username;
    NSString *appid;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
@property(nonatomic, setter=SetAppVersion:) unsigned int appVersion; // @synthesize appVersion;
@property(readonly, nonatomic) BOOL hasAppVersion; // @synthesize hasAppVersion;
@property(nonatomic, setter=SetVersionType:) unsigned int versionType; // @synthesize versionType;
@property(readonly, nonatomic) BOOL hasVersionType; // @synthesize hasVersionType;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

