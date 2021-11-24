//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface VoIPMtGetSDKUserInfoRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasWxGroupid:1;
    BaseRequest *baseRequest;
    NSMutableArray *mutableVoipsdkUsernameList;
    NSString *wxGroupid;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetWxGroupid:) NSString *wxGroupid; // @synthesize wxGroupid;
@property(readonly, nonatomic) BOOL hasWxGroupid; // @synthesize hasWxGroupid;
@property(retain, nonatomic) NSMutableArray *mutableVoipsdkUsernameList; // @synthesize mutableVoipsdkUsernameList;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addVoipsdkUsernameFromArray:(id)arg1;
- (void)addVoipsdkUsername:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *voipsdkUsername; // @dynamic voipsdkUsername;
- (id)voipsdkUsernameList;
- (id)init;

@end

