//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface CheckUnBindResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRandomPasswd:1;
    unsigned int hasCanUnbindNotice:1;
    BaseResponse *baseResponse;
    NSString *randomPasswd;
    NSString *canUnbindNotice;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetCanUnbindNotice:) NSString *canUnbindNotice; // @synthesize canUnbindNotice;
@property(readonly, nonatomic) BOOL hasCanUnbindNotice; // @synthesize hasCanUnbindNotice;
@property(retain, nonatomic, setter=SetRandomPasswd:) NSString *randomPasswd; // @synthesize randomPasswd;
@property(readonly, nonatomic) BOOL hasRandomPasswd; // @synthesize hasRandomPasswd;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

