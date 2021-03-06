//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FTSMessageData : NSObject <WCTTableCoding>
{
    unsigned int chatContextID;
    unsigned int mesLocalID;
    unsigned int msgType;
    unsigned int msgCreateTime;
    unsigned int _docId;
    unsigned int _reservedInt;
    NSString *chatName;
    NSString *realChatName;
    NSString *ftsMsgContent;
    NSString *_reservedText;
}

+ (const void *)reservedText;
+ (const void *)reservedInt;
+ (const void *)ftsMsgContent;
+ (const void *)realChatName;
+ (const void *)msgCreateTime;
+ (const void *)msgType;
+ (const void *)mesLocalID;
+ (const void *)chatName;
+ (const void *)chatContextID;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(nonatomic) unsigned int reservedInt; // @synthesize reservedInt=_reservedInt;
@property(nonatomic) unsigned int docId; // @synthesize docId=_docId;
@property(retain, nonatomic) NSString *ftsMsgContent; // @synthesize ftsMsgContent;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime;
@property(nonatomic) unsigned int msgType; // @synthesize msgType;
@property(nonatomic) unsigned int mesLocalID; // @synthesize mesLocalID;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName;
@property(nonatomic) unsigned int chatContextID; // @synthesize chatContextID;
- (id)description;
- (long long)compareMsgItemAscending:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

