//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class MMSessionInfoPackedInfo, MessageData, NSString, WCContactData;

@interface MMSessionInfo : NSObject <WCTTableCoding>
{
    NSString *m_nsUserName;
    unsigned int m_uUnReadCount;
    BOOL m_bShowUnReadAsRedDot;
    unsigned int m_uLastTime;
    BOOL m_bIsTop;
    double m_enterSessionTime;
    double m_persistentCorrectionTime;
    BOOL m_bMemOnly;
    NSString *m_nsFilePath;
    BOOL m_bMarkUnread;
    BOOL _m_bIsDeletion;
    BOOL _m_isMentionedUnread;
    BOOL _m_isPattedUnread;
    BOOL _m_isAnnounceMentUnread;
    BOOL _isInGroupBox;
    BOOL _unreadCountForAccessibility;
    unsigned int m_syncSessionOrder;
    unsigned int _intRes1;
    unsigned int _intRes2;
    unsigned int _intRes3;
    unsigned int _chatSyncFirstLocalId;
    MMSessionInfoPackedInfo *m_packedInfo;
    MessageData *m_msgData;
    WCContactData *m_contact;
    NSString *_strRes1;
    NSString *_strRes2;
    NSString *_strRes3;
}

+ (const void *)m_packedInfo;
+ (const void *)intRes3;
+ (const void *)intRes2;
+ (const void *)intRes1;
+ (const void *)strRes3;
+ (const void *)strRes2;
+ (const void *)strRes1;
+ (const void *)m_uLastTime;
+ (const void *)m_bMarkUnread;
+ (const void *)m_bShowUnReadAsRedDot;
+ (const void *)m_uUnReadCount;
+ (const void *)m_nsUserName;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) BOOL unreadCountForAccessibility; // @synthesize unreadCountForAccessibility=_unreadCountForAccessibility;
@property(nonatomic) unsigned int chatSyncFirstLocalId; // @synthesize chatSyncFirstLocalId=_chatSyncFirstLocalId;
@property BOOL isInGroupBox; // @synthesize isInGroupBox=_isInGroupBox;
@property(nonatomic) BOOL m_isAnnounceMentUnread; // @synthesize m_isAnnounceMentUnread=_m_isAnnounceMentUnread;
@property(nonatomic) BOOL m_isPattedUnread; // @synthesize m_isPattedUnread=_m_isPattedUnread;
@property(nonatomic) BOOL m_isMentionedUnread; // @synthesize m_isMentionedUnread=_m_isMentionedUnread;
@property(nonatomic) BOOL m_bIsDeletion; // @synthesize m_bIsDeletion=_m_bIsDeletion;
@property unsigned int intRes3; // @synthesize intRes3=_intRes3;
@property unsigned int intRes2; // @synthesize intRes2=_intRes2;
@property unsigned int intRes1; // @synthesize intRes1=_intRes1;
@property(retain) NSString *strRes3; // @synthesize strRes3=_strRes3;
@property(retain) NSString *strRes2; // @synthesize strRes2=_strRes2;
@property(retain) NSString *strRes1; // @synthesize strRes1=_strRes1;
@property(nonatomic) BOOL m_bMemOnly; // @synthesize m_bMemOnly;
@property(nonatomic) double m_enterSessionTime; // @synthesize m_enterSessionTime;
@property double m_persistentCorrectionTime; // @synthesize m_persistentCorrectionTime;
@property BOOL m_bIsTop; // @synthesize m_bIsTop;
@property(retain, nonatomic) WCContactData *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) MessageData *m_msgData; // @synthesize m_msgData;
@property(nonatomic) unsigned int m_syncSessionOrder; // @synthesize m_syncSessionOrder;
@property(nonatomic) unsigned int m_uLastTime; // @synthesize m_uLastTime;
@property(nonatomic) BOOL m_bMarkUnread; // @synthesize m_bMarkUnread;
@property(nonatomic) BOOL m_bShowUnReadAsRedDot; // @synthesize m_bShowUnReadAsRedDot;
@property(nonatomic) unsigned int m_uUnReadCount; // @synthesize m_uUnReadCount;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
- (BOOL)isUnreadSession;
- (id)shortDesc;
- (id)description;
- (long long)compare:(id)arg1;
@property(retain, nonatomic) MMSessionInfoPackedInfo *m_packedInfo; // @synthesize m_packedInfo;
- (id)init;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

