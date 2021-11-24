//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, LiveSdkInfo, NSString;

@interface GetFreeLiveMicResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasLiveSdkInfo:1;
    unsigned int hasFreeLiveMicId:1;
    BaseResponse *baseResponse;
    LiveSdkInfo *liveSdkInfo;
    NSString *freeLiveMicId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetFreeLiveMicId:) NSString *freeLiveMicId; // @synthesize freeLiveMicId;
@property(readonly, nonatomic) BOOL hasFreeLiveMicId; // @synthesize hasFreeLiveMicId;
@property(retain, nonatomic, setter=SetLiveSdkInfo:) LiveSdkInfo *liveSdkInfo; // @synthesize liveSdkInfo;
@property(readonly, nonatomic) BOOL hasLiveSdkInfo; // @synthesize hasLiveSdkInfo;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

