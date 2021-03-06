//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMSnsEmojiInfoObj, NSData, NSString;

@interface MMSnsUserComment : NSObject <PBCoding>
{
    BOOL bDeleted;
    BOOL _isAdvertiserComment;
    BOOL _isRefAdvertiserComment;
    BOOL _isAdPreferInfo;
    int source;
    int type;
    unsigned int createTime;
    int isLocalAdded;
    int isRichText;
    int commentFlag;
    unsigned int _adAdvertiserFirstCommentDisplayTime;
    NSString *commentID;
    NSString *comment64ID;
    NSString *username;
    NSString *nickname;
    NSString *content;
    NSString *refCommentID;
    NSString *refComment64ID;
    NSString *refUserName;
    NSData *remindFriendsInfoData;
    MMSnsEmojiInfoObj *snsEmojiInfoObj;
    NSString *_contentPattern;
    NSString *_dataItemUsrName;
    NSString *_dataItemNickName;
    NSString *_adPreferNickName;
    NSString *_adPreferHeadUrl;
}

+ (id)fromServerCommentObj:(id)arg1;
+ (id)fromServerGroupObj:(id)arg1;
+ (id)fromServerObj:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_snsEmojiInfoObj;
+ (void)PBArrayAdd_remindFriendsInfoData;
+ (void)PBArrayAdd_commentFlag;
+ (void)PBArrayAdd_bDeleted;
+ (void)PBArrayAdd_isRichText;
+ (void)PBArrayAdd_refUserName;
+ (void)PBArrayAdd_refComment64ID;
+ (void)PBArrayAdd_refCommentID;
+ (void)PBArrayAdd_isLocalAdded;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_comment64ID;
+ (void)PBArrayAdd_commentID;
- (void).cxx_destruct;
@property(nonatomic) unsigned int adAdvertiserFirstCommentDisplayTime; // @synthesize adAdvertiserFirstCommentDisplayTime=_adAdvertiserFirstCommentDisplayTime;
@property(retain, nonatomic) NSString *adPreferHeadUrl; // @synthesize adPreferHeadUrl=_adPreferHeadUrl;
@property(retain, nonatomic) NSString *adPreferNickName; // @synthesize adPreferNickName=_adPreferNickName;
@property(nonatomic) BOOL isAdPreferInfo; // @synthesize isAdPreferInfo=_isAdPreferInfo;
@property(retain, nonatomic) NSString *dataItemNickName; // @synthesize dataItemNickName=_dataItemNickName;
@property(retain, nonatomic) NSString *dataItemUsrName; // @synthesize dataItemUsrName=_dataItemUsrName;
@property(nonatomic) BOOL isRefAdvertiserComment; // @synthesize isRefAdvertiserComment=_isRefAdvertiserComment;
@property(nonatomic) BOOL isAdvertiserComment; // @synthesize isAdvertiserComment=_isAdvertiserComment;
@property(retain, nonatomic) NSString *contentPattern; // @synthesize contentPattern=_contentPattern;
@property(retain, nonatomic) MMSnsEmojiInfoObj *snsEmojiInfoObj; // @synthesize snsEmojiInfoObj;
@property(retain, nonatomic) NSData *remindFriendsInfoData; // @synthesize remindFriendsInfoData;
@property(nonatomic) int commentFlag; // @synthesize commentFlag;
@property(nonatomic) BOOL bDeleted; // @synthesize bDeleted;
@property(nonatomic) int isRichText; // @synthesize isRichText;
@property(retain, nonatomic) NSString *refUserName; // @synthesize refUserName;
@property(retain, nonatomic) NSString *refComment64ID; // @synthesize refComment64ID;
@property(retain, nonatomic) NSString *refCommentID; // @synthesize refCommentID;
@property(nonatomic) int isLocalAdded; // @synthesize isLocalAdded;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) int source; // @synthesize source;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(retain, nonatomic) NSString *comment64ID; // @synthesize comment64ID;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID;
- (BOOL)isCommentFromFriend;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

