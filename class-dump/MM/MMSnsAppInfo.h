//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMSnsAppInfo : NSObject <PBCoding>
{
    BOOL isForceUpdate;
    BOOL clickable;
    NSString *appID;
    NSString *appName;
    NSString *version;
    NSString *installUrl;
    NSString *fromUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_clickable;
+ (void)PBArrayAdd_isForceUpdate;
+ (void)PBArrayAdd_fromUrl;
+ (void)PBArrayAdd_installUrl;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appID;
- (void).cxx_destruct;
@property(nonatomic) BOOL clickable; // @synthesize clickable;
@property(nonatomic) BOOL isForceUpdate; // @synthesize isForceUpdate;
@property(retain, nonatomic) NSString *fromUrl; // @synthesize fromUrl;
@property(retain, nonatomic) NSString *installUrl; // @synthesize installUrl;
@property(retain, nonatomic) NSString *version; // @synthesize version;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (BOOL)isValid;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
