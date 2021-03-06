//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, OpenIMContactCustomInfo;

@interface OpenIMContact : PBGeneratedMessage
{
    unsigned int hasTpUsername:1;
    unsigned int hasNickname:1;
    unsigned int hasType:1;
    unsigned int hasRemark:1;
    unsigned int hasBigHeadimg:1;
    unsigned int hasSmallHeadimg:1;
    unsigned int hasSource:1;
    unsigned int hasNicknamePyinit:1;
    unsigned int hasNicknameQuanpin:1;
    unsigned int hasRemarkPyinit:1;
    unsigned int hasRemarkQuanpin:1;
    unsigned int hasCustomInfo:1;
    unsigned int hasAntispamTicket:1;
    unsigned int hasAppId:1;
    unsigned int hasSex:1;
    unsigned int hasDescWordingId:1;
    unsigned int type;
    unsigned int source;
    unsigned int sex;
    NSString *tpUsername;
    NSString *nickname;
    NSString *remark;
    NSString *bigHeadimg;
    NSString *smallHeadimg;
    NSString *nicknamePyinit;
    NSString *nicknameQuanpin;
    NSString *remarkPyinit;
    NSString *remarkQuanpin;
    OpenIMContactCustomInfo *customInfo;
    NSString *antispamTicket;
    NSString *appId;
    NSString *descWordingId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetDescWordingId:) NSString *descWordingId; // @synthesize descWordingId;
@property(readonly, nonatomic) BOOL hasDescWordingId; // @synthesize hasDescWordingId;
@property(nonatomic, setter=SetSex:) unsigned int sex; // @synthesize sex;
@property(readonly, nonatomic) BOOL hasSex; // @synthesize hasSex;
@property(retain, nonatomic, setter=SetAppId:) NSString *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
@property(retain, nonatomic, setter=SetAntispamTicket:) NSString *antispamTicket; // @synthesize antispamTicket;
@property(readonly, nonatomic) BOOL hasAntispamTicket; // @synthesize hasAntispamTicket;
@property(retain, nonatomic, setter=SetCustomInfo:) OpenIMContactCustomInfo *customInfo; // @synthesize customInfo;
@property(readonly, nonatomic) BOOL hasCustomInfo; // @synthesize hasCustomInfo;
@property(retain, nonatomic, setter=SetRemarkQuanpin:) NSString *remarkQuanpin; // @synthesize remarkQuanpin;
@property(readonly, nonatomic) BOOL hasRemarkQuanpin; // @synthesize hasRemarkQuanpin;
@property(retain, nonatomic, setter=SetRemarkPyinit:) NSString *remarkPyinit; // @synthesize remarkPyinit;
@property(readonly, nonatomic) BOOL hasRemarkPyinit; // @synthesize hasRemarkPyinit;
@property(retain, nonatomic, setter=SetNicknameQuanpin:) NSString *nicknameQuanpin; // @synthesize nicknameQuanpin;
@property(readonly, nonatomic) BOOL hasNicknameQuanpin; // @synthesize hasNicknameQuanpin;
@property(retain, nonatomic, setter=SetNicknamePyinit:) NSString *nicknamePyinit; // @synthesize nicknamePyinit;
@property(readonly, nonatomic) BOOL hasNicknamePyinit; // @synthesize hasNicknamePyinit;
@property(nonatomic, setter=SetSource:) unsigned int source; // @synthesize source;
@property(readonly, nonatomic) BOOL hasSource; // @synthesize hasSource;
@property(retain, nonatomic, setter=SetSmallHeadimg:) NSString *smallHeadimg; // @synthesize smallHeadimg;
@property(readonly, nonatomic) BOOL hasSmallHeadimg; // @synthesize hasSmallHeadimg;
@property(retain, nonatomic, setter=SetBigHeadimg:) NSString *bigHeadimg; // @synthesize bigHeadimg;
@property(readonly, nonatomic) BOOL hasBigHeadimg; // @synthesize hasBigHeadimg;
@property(retain, nonatomic, setter=SetRemark:) NSString *remark; // @synthesize remark;
@property(readonly, nonatomic) BOOL hasRemark; // @synthesize hasRemark;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetNickname:) NSString *nickname; // @synthesize nickname;
@property(readonly, nonatomic) BOOL hasNickname; // @synthesize hasNickname;
@property(retain, nonatomic, setter=SetTpUsername:) NSString *tpUsername; // @synthesize tpUsername;
@property(readonly, nonatomic) BOOL hasTpUsername; // @synthesize hasTpUsername;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

