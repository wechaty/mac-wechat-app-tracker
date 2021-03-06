//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface BizAppInfo : PBGeneratedMessage
{
    unsigned int hasAppId:1;
    unsigned int hasName:1;
    unsigned int hasDescription:1;
    unsigned int hasName4EnUs:1;
    unsigned int hasDescription4EnUs:1;
    unsigned int hasName4ZhTw:1;
    unsigned int hasDescription4ZhTw:1;
    unsigned int hasIconUrlSd:1;
    unsigned int hasIconUrlHd:1;
    unsigned int hasStoreUrl:1;
    unsigned int hasWatermarkUrl:1;
    unsigned int hasAndroidPackageName:1;
    unsigned int hasAndroidSignature:1;
    unsigned int hasAppType:1;
    unsigned int hasDevInfo:1;
    unsigned int hasAppInfoFlag:1;
    unsigned int hasAppVersion:1;
    unsigned int hasAppUpdateVersion:1;
    unsigned int hasIconUrlMdpi:1;
    unsigned int hasDownloadUrl:1;
    unsigned int hasDownloadUrlMd5:1;
    unsigned int hasGooglePlayDownloadUrl:1;
    unsigned int appInfoFlag;
    unsigned int appVersion;
    unsigned int appUpdateVersion;
    NSString *appId;
    NSString *name;
    NSString *description;
    NSString *name4EnUs;
    NSString *description4EnUs;
    NSString *name4ZhTw;
    NSString *description4ZhTw;
    NSString *iconUrlSd;
    NSString *iconUrlHd;
    NSString *storeUrl;
    NSString *watermarkUrl;
    NSString *androidPackageName;
    NSString *androidSignature;
    NSString *appType;
    NSString *devInfo;
    NSString *iconUrlMdpi;
    NSString *downloadUrl;
    NSString *downloadUrlMd5;
    NSString *googlePlayDownloadUrl;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetGooglePlayDownloadUrl:) NSString *googlePlayDownloadUrl; // @synthesize googlePlayDownloadUrl;
@property(readonly, nonatomic) BOOL hasGooglePlayDownloadUrl; // @synthesize hasGooglePlayDownloadUrl;
@property(retain, nonatomic, setter=SetDownloadUrlMd5:) NSString *downloadUrlMd5; // @synthesize downloadUrlMd5;
@property(readonly, nonatomic) BOOL hasDownloadUrlMd5; // @synthesize hasDownloadUrlMd5;
@property(retain, nonatomic, setter=SetDownloadUrl:) NSString *downloadUrl; // @synthesize downloadUrl;
@property(readonly, nonatomic) BOOL hasDownloadUrl; // @synthesize hasDownloadUrl;
@property(retain, nonatomic, setter=SetIconUrlMdpi:) NSString *iconUrlMdpi; // @synthesize iconUrlMdpi;
@property(readonly, nonatomic) BOOL hasIconUrlMdpi; // @synthesize hasIconUrlMdpi;
@property(nonatomic, setter=SetAppUpdateVersion:) unsigned int appUpdateVersion; // @synthesize appUpdateVersion;
@property(readonly, nonatomic) BOOL hasAppUpdateVersion; // @synthesize hasAppUpdateVersion;
@property(nonatomic, setter=SetAppVersion:) unsigned int appVersion; // @synthesize appVersion;
@property(readonly, nonatomic) BOOL hasAppVersion; // @synthesize hasAppVersion;
@property(nonatomic, setter=SetAppInfoFlag:) unsigned int appInfoFlag; // @synthesize appInfoFlag;
@property(readonly, nonatomic) BOOL hasAppInfoFlag; // @synthesize hasAppInfoFlag;
@property(retain, nonatomic, setter=SetDevInfo:) NSString *devInfo; // @synthesize devInfo;
@property(readonly, nonatomic) BOOL hasDevInfo; // @synthesize hasDevInfo;
@property(retain, nonatomic, setter=SetAppType:) NSString *appType; // @synthesize appType;
@property(readonly, nonatomic) BOOL hasAppType; // @synthesize hasAppType;
@property(retain, nonatomic, setter=SetAndroidSignature:) NSString *androidSignature; // @synthesize androidSignature;
@property(readonly, nonatomic) BOOL hasAndroidSignature; // @synthesize hasAndroidSignature;
@property(retain, nonatomic, setter=SetAndroidPackageName:) NSString *androidPackageName; // @synthesize androidPackageName;
@property(readonly, nonatomic) BOOL hasAndroidPackageName; // @synthesize hasAndroidPackageName;
@property(retain, nonatomic, setter=SetWatermarkUrl:) NSString *watermarkUrl; // @synthesize watermarkUrl;
@property(readonly, nonatomic) BOOL hasWatermarkUrl; // @synthesize hasWatermarkUrl;
@property(retain, nonatomic, setter=SetStoreUrl:) NSString *storeUrl; // @synthesize storeUrl;
@property(readonly, nonatomic) BOOL hasStoreUrl; // @synthesize hasStoreUrl;
@property(retain, nonatomic, setter=SetIconUrlHd:) NSString *iconUrlHd; // @synthesize iconUrlHd;
@property(readonly, nonatomic) BOOL hasIconUrlHd; // @synthesize hasIconUrlHd;
@property(retain, nonatomic, setter=SetIconUrlSd:) NSString *iconUrlSd; // @synthesize iconUrlSd;
@property(readonly, nonatomic) BOOL hasIconUrlSd; // @synthesize hasIconUrlSd;
@property(retain, nonatomic, setter=SetDescription4ZhTw:) NSString *description4ZhTw; // @synthesize description4ZhTw;
@property(readonly, nonatomic) BOOL hasDescription4ZhTw; // @synthesize hasDescription4ZhTw;
@property(retain, nonatomic, setter=SetName4ZhTw:) NSString *name4ZhTw; // @synthesize name4ZhTw;
@property(readonly, nonatomic) BOOL hasName4ZhTw; // @synthesize hasName4ZhTw;
@property(retain, nonatomic, setter=SetDescription4EnUs:) NSString *description4EnUs; // @synthesize description4EnUs;
@property(readonly, nonatomic) BOOL hasDescription4EnUs; // @synthesize hasDescription4EnUs;
@property(retain, nonatomic, setter=SetName4EnUs:) NSString *name4EnUs; // @synthesize name4EnUs;
@property(readonly, nonatomic) BOOL hasName4EnUs; // @synthesize hasName4EnUs;
@property(retain, nonatomic, setter=SetDescription:) NSString *description; // @synthesize description;
@property(readonly, nonatomic) BOOL hasDescription; // @synthesize hasDescription;
@property(retain, nonatomic, setter=SetName:) NSString *name; // @synthesize name;
@property(readonly, nonatomic) BOOL hasName; // @synthesize hasName;
@property(retain, nonatomic, setter=SetAppId:) NSString *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

