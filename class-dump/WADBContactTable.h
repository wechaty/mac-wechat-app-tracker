//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString, WADBContactPack;

@interface WADBContactTable : NSObject <WCTTableCoding>
{
    unsigned int _type;
    unsigned int _wxAppOpt;
    NSString *_userName;
    NSString *_brandIconURL;
    NSString *_externalInfo;
    WADBContactPack *_contactPack;
    NSString *_headImageStatus;
    NSString *_appId;
}

+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)headImageStatus;
+ (const struct WCTProperty *)wxAppOpt;
+ (const struct WCTProperty *)contactPack;
+ (const struct WCTProperty *)externalInfo;
+ (const struct WCTProperty *)brandIconURL;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)userName;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *headImageStatus; // @synthesize headImageStatus=_headImageStatus;
@property(nonatomic) unsigned int wxAppOpt; // @synthesize wxAppOpt=_wxAppOpt;
@property(retain, nonatomic) WADBContactPack *contactPack; // @synthesize contactPack=_contactPack;
@property(retain, nonatomic) NSString *externalInfo; // @synthesize externalInfo=_externalInfo;
@property(retain, nonatomic) NSString *brandIconURL; // @synthesize brandIconURL=_brandIconURL;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

