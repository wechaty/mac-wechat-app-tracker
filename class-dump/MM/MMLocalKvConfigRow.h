//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MMLocalKvConfigRow : NSObject <WCTTableCoding>
{
    NSString *_configKey;
    NSString *_configValue;
}

+ (const void *)configValue;
+ (const void *)configKey;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *configValue; // @synthesize configValue=_configValue;
@property(retain, nonatomic) NSString *configKey; // @synthesize configKey=_configKey;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

