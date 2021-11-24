//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MultiTalkBannerItem : NSObject <WCTTableCoding>
{
    unsigned int routeid;
    unsigned int createtime;
    unsigned int multiTalkStatus;
    unsigned int bannerSDKMode;
    NSString *wxGroupId;
    NSString *wxMultiTalkGroupId;
    unsigned long long roomid;
    unsigned long long roomkey;
    NSString *wxMultiTalkUserList;
    NSString *wxMultiTalkInviteNick;
    unsigned long long bannerItemSeq;
}

+ (const struct WCTProperty *)bannerItemSeq;
+ (const struct WCTProperty *)bannerSDKMode;
+ (const struct WCTProperty *)multiTalkStatus;
+ (const struct WCTProperty *)wxMultiTalkInviteNick;
+ (const struct WCTProperty *)wxMultiTalkUserList;
+ (const struct WCTProperty *)createtime;
+ (const struct WCTProperty *)routeid;
+ (const struct WCTProperty *)roomkey;
+ (const struct WCTProperty *)roomid;
+ (const struct WCTProperty *)wxMultiTalkGroupId;
+ (const struct WCTProperty *)wxGroupId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) unsigned int bannerSDKMode; // @synthesize bannerSDKMode;
@property(nonatomic) unsigned long long bannerItemSeq; // @synthesize bannerItemSeq;
@property(nonatomic) unsigned int multiTalkStatus; // @synthesize multiTalkStatus;
@property(retain, nonatomic) NSString *wxMultiTalkInviteNick; // @synthesize wxMultiTalkInviteNick;
@property(retain, nonatomic) NSString *wxMultiTalkUserList; // @synthesize wxMultiTalkUserList;
@property(nonatomic) unsigned int createtime; // @synthesize createtime;
@property(nonatomic) unsigned int routeid; // @synthesize routeid;
@property(nonatomic) unsigned long long roomkey; // @synthesize roomkey;
@property(nonatomic) unsigned long long roomid; // @synthesize roomid;
@property(retain, nonatomic) NSString *wxMultiTalkGroupId; // @synthesize wxMultiTalkGroupId;
@property(retain, nonatomic) NSString *wxGroupId; // @synthesize wxGroupId;
- (id)description;
- (BOOL)isBannerItemValid;
- (void)dealloc;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

