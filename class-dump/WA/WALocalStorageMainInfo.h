//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WALocalStorageMainInfo : NSObject <WCTTableCoding>
{
    unsigned int _lastModifyTime;
    NSString *_appID;
    unsigned long long _storageLength;
}

+ (const void *)lastModifyTime;
+ (const void *)storageLength;
+ (const void *)appID;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned long long storageLength; // @synthesize storageLength=_storageLength;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

