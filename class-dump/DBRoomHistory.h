//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface DBRoomHistory : NSObject <WCTTableCoding>
{
    NSString *_chatName;
    unsigned long long _historyId;
    long long _msgServerId;
}

+ (const struct WCTProperty *)msgServerId;
+ (const struct WCTProperty *)historyId;
+ (const struct WCTProperty *)chatName;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned long long historyId; // @synthesize historyId=_historyId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

