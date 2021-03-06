//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSData, NSString;

@interface AddAvatarReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasNickname:1;
    unsigned int hasHeadimgdata:1;
    unsigned int hasFileid:1;
    unsigned int hasHeadimgflag:1;
    unsigned int hasAppid:1;
    unsigned int headimgflag;
    BaseRequest *baseRequest;
    NSString *nickname;
    NSData *headimgdata;
    NSString *fileid;
    NSString *appid;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
@property(nonatomic, setter=SetHeadimgflag:) unsigned int headimgflag; // @synthesize headimgflag;
@property(readonly, nonatomic) BOOL hasHeadimgflag; // @synthesize hasHeadimgflag;
@property(retain, nonatomic, setter=SetFileid:) NSString *fileid; // @synthesize fileid;
@property(readonly, nonatomic) BOOL hasFileid; // @synthesize hasFileid;
@property(retain, nonatomic, setter=SetHeadimgdata:) NSData *headimgdata; // @synthesize headimgdata;
@property(readonly, nonatomic) BOOL hasHeadimgdata; // @synthesize hasHeadimgdata;
@property(retain, nonatomic, setter=SetNickname:) NSString *nickname; // @synthesize nickname;
@property(readonly, nonatomic) BOOL hasNickname; // @synthesize hasNickname;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

