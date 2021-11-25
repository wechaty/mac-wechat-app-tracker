//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class MMSessionInfoPackedInfo, NSString;

@interface MMSessionInfo : NSObject <WCTTableCoding>
{
    NSString *m_nsUserName;
    unsigned int m_uUnReadCount;
    BOOL m_bShowUnReadAsRedDot;
    unsigned int m_uLastTime;
    BOOL m_bIsTop;
    unsigned int m_uTopTime;
    unsigned int m_uUnTopTime;
    unsigned int m_enterSessionTime;
    BOOL m_bMemOnly;
    NSString *m_nsFilePath;
    BOOL m_bMarkUnread;
    BOOL _m_bIsDeletion;
    BOOL _m_isMentionedUnread;
    BOOL _m_isPattedUnread;
    unsigned int _intRes1;
    unsigned int _intRes2;
    unsigned int _intRes3;
    unsigned int _chatSyncFirstLocalId;
    MMSessionInfoPackedInfo *m_packedInfo;
    NSString *_strRes1;
    NSString *_strRes2;
    NSString *_strRes3;
}

+ (const struct WCTProperty *)m_packedInfo;
+ (const struct WCTProperty *)intRes3;
+ (const struct WCTProperty *)intRes2;
+ (const struct WCTProperty *)intRes1;
+ (const struct WCTProperty *)strRes3;
+ (const struct WCTProperty *)strRes2;
+ (const struct WCTProperty *)strRes1;
+ (const struct WCTProperty *)m_uLastTime;
+ (const struct WCTProperty *)m_bMarkUnread;
+ (const struct WCTProperty *)m_bShowUnReadAsRedDot;
+ (const struct WCTProperty *)m_uUnReadCount;
+ (const struct WCTProperty *)m_nsUserName;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) unsigned int chatSyncFirstLocalId; // @synthesize chatSyncFirstLocalId=_chatSyncFirstLocalId;
@property(nonatomic) BOOL m_isPattedUnread; // @synthesize m_isPattedUnread=_m_isPattedUnread;
@property(nonatomic) BOOL m_isMentionedUnread; // @synthesize m_isMentionedUnread=_m_isMentionedUnread;
@property unsigned int intRes3; // @synthesize intRes3=_intRes3;
@property unsigned int intRes2; // @synthesize intRes2=_intRes2;
@property unsigned int intRes1; // @synthesize intRes1=_intRes1;
@property(retain) NSString *strRes3; // @synthesize strRes3=_strRes3;
@property(retain) NSString *strRes2; // @synthesize strRes2=_strRes2;
@property(retain) NSString *strRes1; // @synthesize strRes1=_strRes1;
@property(nonatomic) BOOL m_bIsDeletion; // @synthesize m_bIsDeletion=_m_bIsDeletion;
@property(nonatomic) BOOL m_bMemOnly; // @synthesize m_bMemOnly;
@property(nonatomic) unsigned int m_enterSessionTime; // @synthesize m_enterSessionTime;
@property unsigned int m_uUnTopTime; // @synthesize m_uUnTopTime;
@property unsigned int m_uTopTime; // @synthesize m_uTopTime;
@property BOOL m_bIsTop; // @synthesize m_bIsTop;
@property(retain, nonatomic) MMSessionInfoPackedInfo *m_packedInfo; // @synthesize m_packedInfo;
@property(nonatomic) unsigned int m_uLastTime; // @synthesize m_uLastTime;
@property(nonatomic) BOOL m_bMarkUnread; // @synthesize m_bMarkUnread;
@property(nonatomic) BOOL m_bShowUnReadAsRedDot; // @synthesize m_bShowUnReadAsRedDot;
@property(nonatomic) unsigned int m_uUnReadCount; // @synthesize m_uUnReadCount;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
- (BOOL)isUnreadSession;
- (id)description;
- (long long)compare:(id)arg1;
- (void)setFromPBSessionInfo:(id)arg1;
- (void)ignoreSyncSessionOrder;
- (void)setM_msgData:(id)arg1;
- (void)setM_contact:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
