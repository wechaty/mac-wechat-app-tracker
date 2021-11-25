//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetRandomAvatarResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasNickname:1;
    unsigned int hasAvatarurl:1;
    unsigned int hasFileid:1;
    BaseResponse *baseResponse;
    NSString *nickname;
    NSString *avatarurl;
    NSString *fileid;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetFileid:) NSString *fileid; // @synthesize fileid;
@property(readonly, nonatomic) BOOL hasFileid; // @synthesize hasFileid;
@property(retain, nonatomic, setter=SetAvatarurl:) NSString *avatarurl; // @synthesize avatarurl;
@property(readonly, nonatomic) BOOL hasAvatarurl; // @synthesize hasAvatarurl;
@property(retain, nonatomic, setter=SetNickname:) NSString *nickname; // @synthesize nickname;
@property(readonly, nonatomic) BOOL hasNickname; // @synthesize hasNickname;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
