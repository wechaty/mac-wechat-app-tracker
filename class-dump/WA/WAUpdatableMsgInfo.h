//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WAUpdatableMsgInfo : NSObject <WCTTableCoding>
{
    BOOL _shouldUseUpdatableMsg;
    BOOL _isSystemPushFinished;
    int _updatableContentUpdateInterval;
    unsigned int _lastUpdateTime;
    NSString *_shareKey;
    NSString *_appId;
    unsigned long long _subscriptionEntryState;
    NSString *_subscriptionEntryContent;
    NSString *_subscriptionEntryButtonWording;
    NSString *_subscriptionConfirmedContent;
    NSString *_updatableContentText;
    NSString *_updatableContentColor;
}

+ (id)infoFromResp:(id)arg1;
+ (const void *)lastUpdateTime;
+ (const void *)updatableContentUpdateInterval;
+ (const void *)updatableContentColor;
+ (const void *)updatableContentText;
+ (const void *)subscriptionConfirmedContent;
+ (const void *)subscriptionEntryButtonWording;
+ (const void *)subscriptionEntryContent;
+ (const void *)isSystemPushFinished;
+ (const void *)subscriptionEntryState;
+ (const void *)appId;
+ (const void *)shouldUseUpdatableMsg;
+ (const void *)shareKey;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) int updatableContentUpdateInterval; // @synthesize updatableContentUpdateInterval=_updatableContentUpdateInterval;
@property(retain, nonatomic) NSString *updatableContentColor; // @synthesize updatableContentColor=_updatableContentColor;
@property(retain, nonatomic) NSString *updatableContentText; // @synthesize updatableContentText=_updatableContentText;
@property(retain, nonatomic) NSString *subscriptionConfirmedContent; // @synthesize subscriptionConfirmedContent=_subscriptionConfirmedContent;
@property(retain, nonatomic) NSString *subscriptionEntryButtonWording; // @synthesize subscriptionEntryButtonWording=_subscriptionEntryButtonWording;
@property(retain, nonatomic) NSString *subscriptionEntryContent; // @synthesize subscriptionEntryContent=_subscriptionEntryContent;
@property(nonatomic) BOOL isSystemPushFinished; // @synthesize isSystemPushFinished=_isSystemPushFinished;
@property(nonatomic) unsigned long long subscriptionEntryState; // @synthesize subscriptionEntryState=_subscriptionEntryState;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) BOOL shouldUseUpdatableMsg; // @synthesize shouldUseUpdatableMsg=_shouldUseUpdatableMsg;
@property(retain, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
- (unsigned int)nextTimeToUpdate;
- (BOOL)isUpdateAllowed;
- (BOOL)shouldUpdateNow;
- (id)toXML;
- (BOOL)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)description;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

