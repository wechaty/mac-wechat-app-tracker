//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class KeyValueTablePackedInfo, NSString;

@interface KeyValueTable : NSObject <WCTTableCoding>
{
    NSString *sKey;
    NSString *sValue;
    KeyValueTablePackedInfo *_m_packedInfo;
}

+ (const struct WCTProperty *)m_packedInfo;
+ (const struct WCTProperty *)sValue;
+ (const struct WCTProperty *)sKey;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) KeyValueTablePackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(retain, nonatomic) NSString *sValue; // @synthesize sValue;
@property(retain, nonatomic) NSString *sKey; // @synthesize sKey;
- (id)description;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

