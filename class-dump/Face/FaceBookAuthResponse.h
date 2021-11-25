//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface FaceBookAuthResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasFbuserId:1;
    unsigned int hasFbuserName:1;
    BaseResponse *baseResponse;
    unsigned long long fbuserId;
    NSString *fbuserName;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetFbuserName:) NSString *fbuserName; // @synthesize fbuserName;
@property(readonly, nonatomic) BOOL hasFbuserName; // @synthesize hasFbuserName;
@property(nonatomic, setter=SetFbuserId:) unsigned long long fbuserId; // @synthesize fbuserId;
@property(readonly, nonatomic) BOOL hasFbuserId; // @synthesize hasFbuserId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
