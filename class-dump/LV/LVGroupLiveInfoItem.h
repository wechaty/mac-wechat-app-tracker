//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface LVGroupLiveInfoItem : NSObject <WCTTableCoding, NSCopying>
{
    BOOL enableComment;
    BOOL enableApplyLiveMic;
    BOOL enableLiveReplay;
    unsigned int createTime;
    unsigned int endTime;
    unsigned int status;
    unsigned int onlineCnt;
    unsigned int messageCnt;
    unsigned int likeCnt;
    unsigned int _barStatus;
    long long liveId;
    NSString *liveName;
    NSString *defaultLiveName;
    NSString *roomId;
    NSString *replayUrl;
    NSString *anchor;
    long long timeId;
    NSString *sdkUserId;
    NSString *createSdkUserId;
}

+ (id)createItemWithShareLiveMsg:(id)arg1;
+ (id)createItemWithLiveInfo:(id)arg1 roomId:(id)arg2;
+ (const void *)barStatus;
+ (const void *)createSdkUserId;
+ (const void *)sdkUserId;
+ (const void *)timeId;
+ (const void *)anchor;
+ (const void *)enableLiveReplay;
+ (const void *)enableApplyLiveMic;
+ (const void *)enableComment;
+ (const void *)replayUrl;
+ (const void *)likeCnt;
+ (const void *)messageCnt;
+ (const void *)onlineCnt;
+ (const void *)status;
+ (const void *)endTime;
+ (const void *)createTime;
+ (const void *)roomId;
+ (const void *)defaultLiveName;
+ (const void *)liveName;
+ (const void *)liveId;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) unsigned int barStatus; // @synthesize barStatus=_barStatus;
@property(retain, nonatomic) NSString *createSdkUserId; // @synthesize createSdkUserId;
@property(retain, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId;
@property(nonatomic) long long timeId; // @synthesize timeId;
@property(retain, nonatomic) NSString *anchor; // @synthesize anchor;
@property(nonatomic) BOOL enableLiveReplay; // @synthesize enableLiveReplay;
@property(nonatomic) BOOL enableApplyLiveMic; // @synthesize enableApplyLiveMic;
@property(nonatomic) BOOL enableComment; // @synthesize enableComment;
@property(retain, nonatomic) NSString *replayUrl; // @synthesize replayUrl;
@property(nonatomic) unsigned int likeCnt; // @synthesize likeCnt;
@property(nonatomic) unsigned int messageCnt; // @synthesize messageCnt;
@property(nonatomic) unsigned int onlineCnt; // @synthesize onlineCnt;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
@property(retain, nonatomic) NSString *defaultLiveName; // @synthesize defaultLiveName;
@property(retain, nonatomic) NSString *liveName; // @synthesize liveName;
@property(nonatomic) long long liveId; // @synthesize liveId;
- (id)description;
- (id)toLiveInfo;
- (void)copyFromLiveInfo:(id)arg1 roomId:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

