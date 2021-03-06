//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class CustomizedInfo, FBFriend, NSString, SnsUserInfo;

@interface MFriend : PBGeneratedMessage
{
    unsigned int hasUsername:1;
    unsigned int hasNickname:1;
    unsigned int hasMobileMd5:1;
    unsigned int hasSex:1;
    unsigned int hasProvince:1;
    unsigned int hasCity:1;
    unsigned int hasSignature:1;
    unsigned int hasPersonalCard:1;
    unsigned int hasAlias:1;
    unsigned int hasFbinfo:1;
    unsigned int hasAlbumFlag:1;
    unsigned int hasAlbumStyle:1;
    unsigned int hasAlbumBgimgId:1;
    unsigned int hasSnsUserInfo:1;
    unsigned int hasCountry:1;
    unsigned int hasMyBrandList:1;
    unsigned int hasCustomizedInfo:1;
    unsigned int hasBigHeadImgUrl:1;
    unsigned int hasSmallHeadImgUrl:1;
    unsigned int hasAntispamTicket:1;
    int sex;
    unsigned int personalCard;
    unsigned int albumFlag;
    unsigned int albumStyle;
    NSString *username;
    NSString *nickname;
    NSString *mobileMd5;
    NSString *province;
    NSString *city;
    NSString *signature;
    NSString *alias;
    FBFriend *fbinfo;
    NSString *albumBgimgId;
    SnsUserInfo *snsUserInfo;
    NSString *country;
    NSString *myBrandList;
    CustomizedInfo *customizedInfo;
    NSString *bigHeadImgUrl;
    NSString *smallHeadImgUrl;
    NSString *antispamTicket;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetAntispamTicket:) NSString *antispamTicket; // @synthesize antispamTicket;
@property(readonly, nonatomic) BOOL hasAntispamTicket; // @synthesize hasAntispamTicket;
@property(retain, nonatomic, setter=SetSmallHeadImgUrl:) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl;
@property(readonly, nonatomic) BOOL hasSmallHeadImgUrl; // @synthesize hasSmallHeadImgUrl;
@property(retain, nonatomic, setter=SetBigHeadImgUrl:) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl;
@property(readonly, nonatomic) BOOL hasBigHeadImgUrl; // @synthesize hasBigHeadImgUrl;
@property(retain, nonatomic, setter=SetCustomizedInfo:) CustomizedInfo *customizedInfo; // @synthesize customizedInfo;
@property(readonly, nonatomic) BOOL hasCustomizedInfo; // @synthesize hasCustomizedInfo;
@property(retain, nonatomic, setter=SetMyBrandList:) NSString *myBrandList; // @synthesize myBrandList;
@property(readonly, nonatomic) BOOL hasMyBrandList; // @synthesize hasMyBrandList;
@property(retain, nonatomic, setter=SetCountry:) NSString *country; // @synthesize country;
@property(readonly, nonatomic) BOOL hasCountry; // @synthesize hasCountry;
@property(retain, nonatomic, setter=SetSnsUserInfo:) SnsUserInfo *snsUserInfo; // @synthesize snsUserInfo;
@property(readonly, nonatomic) BOOL hasSnsUserInfo; // @synthesize hasSnsUserInfo;
@property(retain, nonatomic, setter=SetAlbumBgimgId:) NSString *albumBgimgId; // @synthesize albumBgimgId;
@property(readonly, nonatomic) BOOL hasAlbumBgimgId; // @synthesize hasAlbumBgimgId;
@property(nonatomic, setter=SetAlbumStyle:) unsigned int albumStyle; // @synthesize albumStyle;
@property(readonly, nonatomic) BOOL hasAlbumStyle; // @synthesize hasAlbumStyle;
@property(nonatomic, setter=SetAlbumFlag:) unsigned int albumFlag; // @synthesize albumFlag;
@property(readonly, nonatomic) BOOL hasAlbumFlag; // @synthesize hasAlbumFlag;
@property(retain, nonatomic, setter=SetFbinfo:) FBFriend *fbinfo; // @synthesize fbinfo;
@property(readonly, nonatomic) BOOL hasFbinfo; // @synthesize hasFbinfo;
@property(retain, nonatomic, setter=SetAlias:) NSString *alias; // @synthesize alias;
@property(readonly, nonatomic) BOOL hasAlias; // @synthesize hasAlias;
@property(nonatomic, setter=SetPersonalCard:) unsigned int personalCard; // @synthesize personalCard;
@property(readonly, nonatomic) BOOL hasPersonalCard; // @synthesize hasPersonalCard;
@property(retain, nonatomic, setter=SetSignature:) NSString *signature; // @synthesize signature;
@property(readonly, nonatomic) BOOL hasSignature; // @synthesize hasSignature;
@property(retain, nonatomic, setter=SetCity:) NSString *city; // @synthesize city;
@property(readonly, nonatomic) BOOL hasCity; // @synthesize hasCity;
@property(retain, nonatomic, setter=SetProvince:) NSString *province; // @synthesize province;
@property(readonly, nonatomic) BOOL hasProvince; // @synthesize hasProvince;
@property(nonatomic, setter=SetSex:) int sex; // @synthesize sex;
@property(readonly, nonatomic) BOOL hasSex; // @synthesize hasSex;
@property(retain, nonatomic, setter=SetMobileMd5:) NSString *mobileMd5; // @synthesize mobileMd5;
@property(readonly, nonatomic) BOOL hasMobileMd5; // @synthesize hasMobileMd5;
@property(retain, nonatomic, setter=SetNickname:) NSString *nickname; // @synthesize nickname;
@property(readonly, nonatomic) BOOL hasNickname; // @synthesize hasNickname;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

