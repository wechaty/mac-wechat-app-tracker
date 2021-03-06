//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface RevokeMsgResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasIntroduction:1;
    unsigned int hasSysWording:1;
    BaseResponse *baseResponse;
    NSString *introduction;
    NSString *sysWording;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetSysWording:) NSString *sysWording; // @synthesize sysWording;
@property(readonly, nonatomic) BOOL hasSysWording; // @synthesize hasSysWording;
@property(retain, nonatomic, setter=SetIntroduction:) NSString *introduction; // @synthesize introduction;
@property(readonly, nonatomic) BOOL hasIntroduction; // @synthesize hasIntroduction;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

