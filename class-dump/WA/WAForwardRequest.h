//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WAForwardRequest : NSObject
{
    BOOL _shouldUseDynamicPage;
    unsigned int _shareScene;
    unsigned int _type;
    unsigned int _version;
    unsigned int _disableForward;
    unsigned int _appServiceType;
    unsigned int _debugModeType;
    NSString *_title;
    NSString *_desc;
    NSString *_appMediaUrl;
    NSData *_thumbnailData;
    NSString *_appName;
    NSString *_displayName;
    NSString *_username;
    NSString *_appId;
    NSString *_pagePath;
    NSString *_iconUrl;
    NSString *_extraData;
    NSString *_debugMd5;
    NSString *_cacheKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) BOOL shouldUseDynamicPage; // @synthesize shouldUseDynamicPage=_shouldUseDynamicPage;
@property(retain, nonatomic) NSString *debugMd5; // @synthesize debugMd5=_debugMd5;
@property(nonatomic) unsigned int debugModeType; // @synthesize debugModeType=_debugModeType;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(retain, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) unsigned int disableForward; // @synthesize disableForward=_disableForward;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(nonatomic) unsigned int shareScene; // @synthesize shareScene=_shareScene;
@property(retain, nonatomic) NSString *appMediaUrl; // @synthesize appMediaUrl=_appMediaUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)messageDataFromRequest;

@end

