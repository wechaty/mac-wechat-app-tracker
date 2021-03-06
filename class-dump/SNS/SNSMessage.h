//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface SNSMessage : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement;
    unsigned int _m_uLocalId;
    unsigned int _m_uType;
    unsigned int _m_uFlag;
    unsigned int _m_uCreateTime;
    unsigned int _m_uCommentFlag;
    long long lastInsertedRowID;
    NSString *_m_nsFeedId;
    NSString *_m_nsFromUsername;
    NSString *_m_nsFromNickname;
    NSString *_m_nsToUsername;
    NSString *_m_nsToNickname;
    NSString *_m_nsContent;
    NSData *_m_nsRef;
    NSData *_m_nsMetaData;
    NSString *_m_nsCommentId;
    NSString *_m_nsClientId;
    NSString *_m_nsComment64Id;
}

+ (const void *)m_uCommentFlag;
+ (const void *)m_nsComment64Id;
+ (const void *)m_nsClientId;
+ (const void *)m_nsCommentId;
+ (const void *)m_nsMetaData;
+ (const void *)m_nsRef;
+ (const void *)m_nsContent;
+ (const void *)m_nsToNickname;
+ (const void *)m_nsToUsername;
+ (const void *)m_nsFromNickname;
+ (const void *)m_nsFromUsername;
+ (const void *)m_nsFeedId;
+ (const void *)m_uCreateTime;
+ (const void *)m_uFlag;
+ (const void *)m_uType;
+ (const void *)m_uLocalId;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uCommentFlag; // @synthesize m_uCommentFlag=_m_uCommentFlag;
@property(retain, nonatomic) NSString *m_nsComment64Id; // @synthesize m_nsComment64Id=_m_nsComment64Id;
@property(retain, nonatomic) NSString *m_nsClientId; // @synthesize m_nsClientId=_m_nsClientId;
@property(retain, nonatomic) NSString *m_nsCommentId; // @synthesize m_nsCommentId=_m_nsCommentId;
@property(retain, nonatomic) NSData *m_nsMetaData; // @synthesize m_nsMetaData=_m_nsMetaData;
@property(retain, nonatomic) NSData *m_nsRef; // @synthesize m_nsRef=_m_nsRef;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent=_m_nsContent;
@property(retain, nonatomic) NSString *m_nsToNickname; // @synthesize m_nsToNickname=_m_nsToNickname;
@property(retain, nonatomic) NSString *m_nsToUsername; // @synthesize m_nsToUsername=_m_nsToUsername;
@property(retain, nonatomic) NSString *m_nsFromNickname; // @synthesize m_nsFromNickname=_m_nsFromNickname;
@property(retain, nonatomic) NSString *m_nsFromUsername; // @synthesize m_nsFromUsername=_m_nsFromUsername;
@property(retain, nonatomic) NSString *m_nsFeedId; // @synthesize m_nsFeedId=_m_nsFeedId;
@property(nonatomic) unsigned int m_uCreateTime; // @synthesize m_uCreateTime=_m_uCreateTime;
@property(nonatomic) unsigned int m_uFlag; // @synthesize m_uFlag=_m_uFlag;
@property(nonatomic) unsigned int m_uType; // @synthesize m_uType=_m_uType;
@property(nonatomic) unsigned int m_uLocalId; // @synthesize m_uLocalId=_m_uLocalId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;

@end

