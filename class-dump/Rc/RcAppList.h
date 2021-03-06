//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString, YYBStruct;

@interface RcAppList : PBGeneratedMessage
{
    unsigned int hasAppId:1;
    unsigned int hasAppName:1;
    unsigned int hasAppIconUrl:1;
    unsigned int hasAppDesc:1;
    unsigned int hasAppDownloadUrl:1;
    unsigned int hasAppCoverUrl:1;
    unsigned int hasAppDevInfo:1;
    unsigned int hasAppScreenShotCount:1;
    unsigned int hasAppSnsDesc:1;
    unsigned int hasAppSnapshotUrl:1;
    unsigned int hasAppDetailDesc:1;
    unsigned int hasFriendCount:1;
    unsigned int hasAppType:1;
    unsigned int hasAndroidApkMd5:1;
    unsigned int hasAndroidPackageName:1;
    unsigned int hasAppNamezhTw:1;
    unsigned int hasAppNameEnUs:1;
    unsigned int hasGooglePlayDownloadUrl:1;
    unsigned int hasAppSuggestionIconUrl:1;
    unsigned int hasAppSuggestionIntroUrl:1;
    unsigned int hasSyyb:1;
    unsigned int hasAppLaunchScheme:1;
    unsigned int hasGooglePlayDownloadFlag:1;
    unsigned int hasAppInfoFlag:1;
    int appScreenShotCount;
    unsigned int friendCount;
    unsigned int googlePlayDownloadFlag;
    unsigned int appInfoFlag;
    NSString *appId;
    NSString *appName;
    NSString *appIconUrl;
    NSString *appDesc;
    NSString *appDownloadUrl;
    NSString *appCoverUrl;
    NSString *appDevInfo;
    NSMutableArray *mutableAppScreenShotListList;
    NSString *appSnsDesc;
    NSString *appSnapshotUrl;
    NSString *appDetailDesc;
    NSString *appType;
    NSString *androidApkMd5;
    NSString *androidPackageName;
    NSString *appNamezhTw;
    NSString *appNameEnUs;
    NSString *googlePlayDownloadUrl;
    NSString *appSuggestionIconUrl;
    NSString *appSuggestionIntroUrl;
    YYBStruct *syyb;
    NSString *appLaunchScheme;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetAppInfoFlag:) unsigned int appInfoFlag; // @synthesize appInfoFlag;
@property(readonly, nonatomic) BOOL hasAppInfoFlag; // @synthesize hasAppInfoFlag;
@property(nonatomic, setter=SetGooglePlayDownloadFlag:) unsigned int googlePlayDownloadFlag; // @synthesize googlePlayDownloadFlag;
@property(readonly, nonatomic) BOOL hasGooglePlayDownloadFlag; // @synthesize hasGooglePlayDownloadFlag;
@property(retain, nonatomic, setter=SetAppLaunchScheme:) NSString *appLaunchScheme; // @synthesize appLaunchScheme;
@property(readonly, nonatomic) BOOL hasAppLaunchScheme; // @synthesize hasAppLaunchScheme;
@property(retain, nonatomic, setter=SetSyyb:) YYBStruct *syyb; // @synthesize syyb;
@property(readonly, nonatomic) BOOL hasSyyb; // @synthesize hasSyyb;
@property(retain, nonatomic, setter=SetAppSuggestionIntroUrl:) NSString *appSuggestionIntroUrl; // @synthesize appSuggestionIntroUrl;
@property(readonly, nonatomic) BOOL hasAppSuggestionIntroUrl; // @synthesize hasAppSuggestionIntroUrl;
@property(retain, nonatomic, setter=SetAppSuggestionIconUrl:) NSString *appSuggestionIconUrl; // @synthesize appSuggestionIconUrl;
@property(readonly, nonatomic) BOOL hasAppSuggestionIconUrl; // @synthesize hasAppSuggestionIconUrl;
@property(retain, nonatomic, setter=SetGooglePlayDownloadUrl:) NSString *googlePlayDownloadUrl; // @synthesize googlePlayDownloadUrl;
@property(readonly, nonatomic) BOOL hasGooglePlayDownloadUrl; // @synthesize hasGooglePlayDownloadUrl;
@property(retain, nonatomic, setter=SetAppNameEnUs:) NSString *appNameEnUs; // @synthesize appNameEnUs;
@property(readonly, nonatomic) BOOL hasAppNameEnUs; // @synthesize hasAppNameEnUs;
@property(retain, nonatomic, setter=SetAppNamezhTw:) NSString *appNamezhTw; // @synthesize appNamezhTw;
@property(readonly, nonatomic) BOOL hasAppNamezhTw; // @synthesize hasAppNamezhTw;
@property(retain, nonatomic, setter=SetAndroidPackageName:) NSString *androidPackageName; // @synthesize androidPackageName;
@property(readonly, nonatomic) BOOL hasAndroidPackageName; // @synthesize hasAndroidPackageName;
@property(retain, nonatomic, setter=SetAndroidApkMd5:) NSString *androidApkMd5; // @synthesize androidApkMd5;
@property(readonly, nonatomic) BOOL hasAndroidApkMd5; // @synthesize hasAndroidApkMd5;
@property(retain, nonatomic, setter=SetAppType:) NSString *appType; // @synthesize appType;
@property(readonly, nonatomic) BOOL hasAppType; // @synthesize hasAppType;
@property(nonatomic, setter=SetFriendCount:) unsigned int friendCount; // @synthesize friendCount;
@property(readonly, nonatomic) BOOL hasFriendCount; // @synthesize hasFriendCount;
@property(retain, nonatomic, setter=SetAppDetailDesc:) NSString *appDetailDesc; // @synthesize appDetailDesc;
@property(readonly, nonatomic) BOOL hasAppDetailDesc; // @synthesize hasAppDetailDesc;
@property(retain, nonatomic, setter=SetAppSnapshotUrl:) NSString *appSnapshotUrl; // @synthesize appSnapshotUrl;
@property(readonly, nonatomic) BOOL hasAppSnapshotUrl; // @synthesize hasAppSnapshotUrl;
@property(retain, nonatomic, setter=SetAppSnsDesc:) NSString *appSnsDesc; // @synthesize appSnsDesc;
@property(readonly, nonatomic) BOOL hasAppSnsDesc; // @synthesize hasAppSnsDesc;
@property(retain, nonatomic) NSMutableArray *mutableAppScreenShotListList; // @synthesize mutableAppScreenShotListList;
@property(nonatomic, setter=SetAppScreenShotCount:) int appScreenShotCount; // @synthesize appScreenShotCount;
@property(readonly, nonatomic) BOOL hasAppScreenShotCount; // @synthesize hasAppScreenShotCount;
@property(retain, nonatomic, setter=SetAppDevInfo:) NSString *appDevInfo; // @synthesize appDevInfo;
@property(readonly, nonatomic) BOOL hasAppDevInfo; // @synthesize hasAppDevInfo;
@property(retain, nonatomic, setter=SetAppCoverUrl:) NSString *appCoverUrl; // @synthesize appCoverUrl;
@property(readonly, nonatomic) BOOL hasAppCoverUrl; // @synthesize hasAppCoverUrl;
@property(retain, nonatomic, setter=SetAppDownloadUrl:) NSString *appDownloadUrl; // @synthesize appDownloadUrl;
@property(readonly, nonatomic) BOOL hasAppDownloadUrl; // @synthesize hasAppDownloadUrl;
@property(retain, nonatomic, setter=SetAppDesc:) NSString *appDesc; // @synthesize appDesc;
@property(readonly, nonatomic) BOOL hasAppDesc; // @synthesize hasAppDesc;
@property(retain, nonatomic, setter=SetAppIconUrl:) NSString *appIconUrl; // @synthesize appIconUrl;
@property(readonly, nonatomic) BOOL hasAppIconUrl; // @synthesize hasAppIconUrl;
@property(retain, nonatomic, setter=SetAppName:) NSString *appName; // @synthesize appName;
@property(readonly, nonatomic) BOOL hasAppName; // @synthesize hasAppName;
@property(retain, nonatomic, setter=SetAppId:) NSString *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
- (void)addAppScreenShotList:(id)arg1;
- (void)addAppScreenShotListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *appScreenShotList; // @dynamic appScreenShotList;
- (id)appScreenShotListList;
- (id)init;

@end

