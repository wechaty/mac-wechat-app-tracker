//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString, WxaBusinessBaseResponse;

@interface ShareTransIdResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasBusinessResp:1;
    unsigned int hasUsername:1;
    BaseResponse *baseResponse;
    WxaBusinessBaseResponse *businessResp;
    NSString *username;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
@property(retain, nonatomic, setter=SetBusinessResp:) WxaBusinessBaseResponse *businessResp; // @synthesize businessResp;
@property(readonly, nonatomic) BOOL hasBusinessResp; // @synthesize hasBusinessResp;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

