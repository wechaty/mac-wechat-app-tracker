//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface SolitaireObj : NSObject <PBCoding, NSCopying>
{
    BOOL hasHeader;
    BOOL isCreateType;
    BOOL canQuickShowTips;
    BOOL _bJustSendPlainText;
    BOOL _bNeedAddOccupyWhenTapTips;
    BOOL _isActived;
    BOOL _bFromCallLaunch;
    unsigned int matchCount;
    unsigned int activeTime;
    NSString *nsSolitaireHeader;
    NSString *nsSolitaireTail;
    NSString *nsExample;
    NSString *nsSeparator;
    NSString *nsLaunchUserName;
    NSString *nsChatName;
    NSMutableDictionary *dicSolitaireItem;
    NSMutableSet *invalidSolitaireKeySet;
    long long firstSvrId;
    NSMutableDictionary *dicInvalidMsg;
    unsigned long long activeScene;
    NSString *nsIdentifier;
    NSString *_nsContent;
    NSArray *_arrNewItems;
    unsigned long long _editScene;
}

+ (void)initialize;
+ (void)PBArrayAdd_nsIdentifier;
+ (void)PBArrayAdd_activeScene;
+ (void)PBArrayAdd_dicInvalidMsg;
+ (void)PBArrayAdd_firstSvrId;
+ (void)PBArrayAdd_activeTime;
+ (void)PBArrayAdd_invalidSolitaireKeySet;
+ (void)PBArrayAdd_dicSolitaireItem;
+ (void)PBArrayAdd_matchCount;
+ (void)PBArrayAdd_canQuickShowTips;
+ (void)PBArrayAdd_isCreateType;
+ (void)PBArrayAdd_hasHeader;
+ (void)PBArrayAdd_nsChatName;
+ (void)PBArrayAdd_nsLaunchUserName;
+ (void)PBArrayAdd_nsSeparator;
+ (void)PBArrayAdd_nsExample;
+ (void)PBArrayAdd_nsSolitaireTail;
+ (void)PBArrayAdd_nsSolitaireHeader;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long editScene; // @synthesize editScene=_editScene;
@property(nonatomic) BOOL bFromCallLaunch; // @synthesize bFromCallLaunch=_bFromCallLaunch;
@property(nonatomic) BOOL isActived; // @synthesize isActived=_isActived;
@property(nonatomic) BOOL bNeedAddOccupyWhenTapTips; // @synthesize bNeedAddOccupyWhenTapTips=_bNeedAddOccupyWhenTapTips;
@property(nonatomic) BOOL bJustSendPlainText; // @synthesize bJustSendPlainText=_bJustSendPlainText;
@property(retain, nonatomic) NSArray *arrNewItems; // @synthesize arrNewItems=_arrNewItems;
@property(retain, nonatomic) NSString *nsContent; // @synthesize nsContent=_nsContent;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier;
@property(nonatomic) unsigned long long activeScene; // @synthesize activeScene;
@property(retain, nonatomic) NSMutableDictionary *dicInvalidMsg; // @synthesize dicInvalidMsg;
@property(nonatomic) long long firstSvrId; // @synthesize firstSvrId;
@property(nonatomic) unsigned int activeTime; // @synthesize activeTime;
@property(retain, nonatomic) NSMutableSet *invalidSolitaireKeySet; // @synthesize invalidSolitaireKeySet;
@property(retain, nonatomic) NSMutableDictionary *dicSolitaireItem; // @synthesize dicSolitaireItem;
@property(nonatomic) unsigned int matchCount; // @synthesize matchCount;
@property(nonatomic) BOOL canQuickShowTips; // @synthesize canQuickShowTips;
@property(nonatomic) BOOL isCreateType; // @synthesize isCreateType;
@property(nonatomic) BOOL hasHeader; // @synthesize hasHeader;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName;
@property(retain, nonatomic) NSString *nsLaunchUserName; // @synthesize nsLaunchUserName;
@property(retain, nonatomic) NSString *nsSeparator; // @synthesize nsSeparator;
@property(retain, nonatomic) NSString *nsExample; // @synthesize nsExample;
@property(retain, nonatomic) NSString *nsSolitaireTail; // @synthesize nsSolitaireTail;
@property(retain, nonatomic) NSString *nsSolitaireHeader; // @synthesize nsSolitaireHeader;
@property(readonly, copy) NSString *description;
- (void)updateSelfInfoWithSolitaireObj:(id)arg1;
- (BOOL)genSolitaireItemDistinctByArray:(id)arg1 forceUpdate:(BOOL)arg2;
- (id)genSortItemsWithNewArr:(BOOL)arg1;
- (void)mergeNewItems;
- (id)getSolitaireXmlInfo;
- (void)fixHeaderInfo;
- (void)fixExampleInfo;
- (void)fixSolitaireInfo;
- (id)getRangeWithContent:(id)arg1;
- (id)getSolitaireResultWithNewLine:(BOOL)arg1;
- (void)addSolitaireItemsWithSolitaireInfo:(id)arg1;
- (void)invalidAllItem;
- (void)addInvalidMsgWithItem:(id)arg1;
- (id)getDiffNewAndMergeItemsWithContents:(id)arg1;
- (BOOL)getEditContentInSameNumWith:(id)arg1 Item:(id)arg2;
- (id)getSolitaireKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
