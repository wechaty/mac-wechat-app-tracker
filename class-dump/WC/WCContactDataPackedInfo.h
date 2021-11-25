//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString, SubscriptBrandInfo;

@interface WCContactDataPackedInfo : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL m_isShowRedDot;
    unsigned int m_uiChatState;
    unsigned int m_uiExtKey;
    unsigned int m_uiImgKeyAtLastGet;
    unsigned int m_uiQQUin;
    unsigned int m_uiFriendScene;
    unsigned int m_uiWeiboFlag;
    unsigned int m_uiNeedUpdate;
    unsigned int m_uiWCFlag;
    unsigned int m_uiBrandSubscriptionSettings;
    unsigned int m_uiDraftTime;
    unsigned int m_uiUpdateTime;
    unsigned int m_uiChatRoomFlags;
    NSString *m_nsMobileIdentify;
    NSString *m_nsQQNickName;
    NSString *m_nsQQRemark;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
    NSString *m_nsHDImgStatus;
    NSString *m_nsCertificationInfo;
    NSString *m_nsWeiboAddress;
    NSString *m_nsWeiboNickName;
    NSString *m_nsOwner;
    NSString *m_nsWCBGImgObjectID;
    NSString *m_pcWCBGImgID;
    NSString *m_nsExternalInfo;
    NSString *m_nsBrandSubscriptConfigUrl;
    SubscriptBrandInfo *m_subBrandInfo;
    NSString *m_nsChatRoomData;
    NSString *m_nsTagList;
    NSString *m_nsDescription;
    NSString *m_nsDescriptionPY;
    NSString *m_nsCardUrl;
    NSString *m_nsAntispamTicket;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_uiChatRoomFlags;
+ (void)PBArrayAdd_m_nsAntispamTicket;
+ (void)PBArrayAdd_m_nsCardUrl;
+ (void)PBArrayAdd_m_nsDescriptionPY;
+ (void)PBArrayAdd_m_nsDescription;
+ (void)PBArrayAdd_m_nsTagList;
+ (void)PBArrayAdd_m_uiUpdateTime;
+ (void)PBArrayAdd_m_uiDraftTime;
+ (void)PBArrayAdd_m_isShowRedDot;
+ (void)PBArrayAdd_m_nsChatRoomData;
+ (void)PBArrayAdd_m_subBrandInfo;
+ (void)PBArrayAdd_m_uiBrandSubscriptionSettings;
+ (void)PBArrayAdd_m_nsBrandSubscriptConfigUrl;
+ (void)PBArrayAdd_m_nsExternalInfo;
+ (void)PBArrayAdd_m_pcWCBGImgID;
+ (void)PBArrayAdd_m_uiWCFlag;
+ (void)PBArrayAdd_m_nsWCBGImgObjectID;
+ (void)PBArrayAdd_m_uiNeedUpdate;
+ (void)PBArrayAdd_m_nsOwner;
+ (void)PBArrayAdd_m_uiWeiboFlag;
+ (void)PBArrayAdd_m_nsWeiboNickName;
+ (void)PBArrayAdd_m_nsWeiboAddress;
+ (void)PBArrayAdd_m_uiFriendScene;
+ (void)PBArrayAdd_m_nsCertificationInfo;
+ (void)PBArrayAdd_m_nsHDImgStatus;
+ (void)PBArrayAdd_m_nsSignature;
+ (void)PBArrayAdd_m_nsCity;
+ (void)PBArrayAdd_m_nsProvince;
+ (void)PBArrayAdd_m_nsCountry;
+ (void)PBArrayAdd_m_nsQQRemark;
+ (void)PBArrayAdd_m_nsQQNickName;
+ (void)PBArrayAdd_m_uiQQUin;
+ (void)PBArrayAdd_m_nsMobileIdentify;
+ (void)PBArrayAdd_m_uiImgKeyAtLastGet;
+ (void)PBArrayAdd_m_uiExtKey;
+ (void)PBArrayAdd_m_uiChatState;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiChatRoomFlags; // @synthesize m_uiChatRoomFlags;
@property(retain, nonatomic) NSString *m_nsAntispamTicket; // @synthesize m_nsAntispamTicket;
@property(retain, nonatomic) NSString *m_nsCardUrl; // @synthesize m_nsCardUrl;
@property(retain, nonatomic) NSString *m_nsDescriptionPY; // @synthesize m_nsDescriptionPY;
@property(retain, nonatomic) NSString *m_nsDescription; // @synthesize m_nsDescription;
@property(retain, nonatomic) NSString *m_nsTagList; // @synthesize m_nsTagList;
@property(nonatomic) unsigned int m_uiUpdateTime; // @synthesize m_uiUpdateTime;
@property(nonatomic) unsigned int m_uiDraftTime; // @synthesize m_uiDraftTime;
@property(nonatomic) BOOL m_isShowRedDot; // @synthesize m_isShowRedDot;
@property(copy, nonatomic) NSString *m_nsChatRoomData; // @synthesize m_nsChatRoomData;
@property(retain, nonatomic) SubscriptBrandInfo *m_subBrandInfo; // @synthesize m_subBrandInfo;
@property(nonatomic) unsigned int m_uiBrandSubscriptionSettings; // @synthesize m_uiBrandSubscriptionSettings;
@property(copy, nonatomic) NSString *m_nsBrandSubscriptConfigUrl; // @synthesize m_nsBrandSubscriptConfigUrl;
@property(copy, nonatomic) NSString *m_nsExternalInfo; // @synthesize m_nsExternalInfo;
@property(retain, nonatomic) NSString *m_pcWCBGImgID; // @synthesize m_pcWCBGImgID;
@property(nonatomic) unsigned int m_uiWCFlag; // @synthesize m_uiWCFlag;
@property(copy, nonatomic) NSString *m_nsWCBGImgObjectID; // @synthesize m_nsWCBGImgObjectID;
@property(nonatomic) unsigned int m_uiNeedUpdate; // @synthesize m_uiNeedUpdate;
@property(copy, nonatomic) NSString *m_nsOwner; // @synthesize m_nsOwner;
@property(nonatomic) unsigned int m_uiWeiboFlag; // @synthesize m_uiWeiboFlag;
@property(copy, nonatomic) NSString *m_nsWeiboNickName; // @synthesize m_nsWeiboNickName;
@property(copy, nonatomic) NSString *m_nsWeiboAddress; // @synthesize m_nsWeiboAddress;
@property(nonatomic) unsigned int m_uiFriendScene; // @synthesize m_uiFriendScene;
@property(retain, nonatomic) NSString *m_nsCertificationInfo; // @synthesize m_nsCertificationInfo;
@property(copy, nonatomic) NSString *m_nsHDImgStatus; // @synthesize m_nsHDImgStatus;
@property(copy, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(copy, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(copy, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(copy, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(retain, nonatomic) NSString *m_nsQQRemark; // @synthesize m_nsQQRemark;
@property(retain, nonatomic) NSString *m_nsQQNickName; // @synthesize m_nsQQNickName;
@property(nonatomic) unsigned int m_uiQQUin; // @synthesize m_uiQQUin;
@property(retain, nonatomic) NSString *m_nsMobileIdentify; // @synthesize m_nsMobileIdentify;
@property(nonatomic) unsigned int m_uiImgKeyAtLastGet; // @synthesize m_uiImgKeyAtLastGet;
@property(nonatomic) unsigned int m_uiExtKey; // @synthesize m_uiExtKey;
@property(nonatomic) unsigned int m_uiChatState; // @synthesize m_uiChatState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)archivedWCTValue;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
