//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface GetProfileInfoResponse_WxaLikeInfo : PBGeneratedMessage
{
    unsigned int hasCreateTime:1;
    unsigned int hasHeadimg:1;
    unsigned int hasNickname:1;
    unsigned int hasSelfLike:1;
    unsigned int selfLike_:1;
    unsigned int createTime;
    NSString *headimg;
    NSString *nickname;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasSelfLike; // @synthesize hasSelfLike;
@property(retain, nonatomic, setter=SetNickname:) NSString *nickname; // @synthesize nickname;
@property(readonly, nonatomic) BOOL hasNickname; // @synthesize hasNickname;
@property(retain, nonatomic, setter=SetHeadimg:) NSString *headimg; // @synthesize headimg;
@property(readonly, nonatomic) BOOL hasHeadimg; // @synthesize hasHeadimg;
@property(nonatomic, setter=SetCreateTime:) unsigned int createTime; // @synthesize createTime;
@property(readonly, nonatomic) BOOL hasCreateTime; // @synthesize hasCreateTime;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(nonatomic, setter=SetSelfLike:) BOOL selfLike; // @synthesize selfLike=selfLike_;
- (id)init;

@end

