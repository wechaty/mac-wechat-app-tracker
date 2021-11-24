//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface SolitaireItem : NSObject <PBCoding, NSCopying>
{
    BOOL isHeader;
    BOOL isExample;
    BOOL canEdit;
    unsigned int msgLocalId;
    unsigned int index;
    unsigned int createTime;
    unsigned int msgCreateTime;
    NSString *content;
    NSString *nsSeparator;
    NSString *username;
    long long itemNum;
    struct _NSRange _range;
}

+ (void)initialize;
+ (void)PBArrayAdd_itemNum;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_canEdit;
+ (void)PBArrayAdd_isExample;
+ (void)PBArrayAdd_isHeader;
+ (void)PBArrayAdd_msgLocalId;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nsSeparator;
+ (void)PBArrayAdd_content;
- (void).cxx_destruct;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) long long itemNum; // @synthesize itemNum;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned int index; // @synthesize index;
@property(nonatomic) BOOL canEdit; // @synthesize canEdit;
@property(nonatomic) BOOL isExample; // @synthesize isExample;
@property(nonatomic) BOOL isHeader; // @synthesize isHeader;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(retain, nonatomic) NSString *nsSeparator; // @synthesize nsSeparator;
@property(retain, nonatomic) NSString *content; // @synthesize content;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

