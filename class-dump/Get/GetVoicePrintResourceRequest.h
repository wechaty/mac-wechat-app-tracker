//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface GetVoicePrintResourceRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasResScence:1;
    unsigned int hasVerifyTicket:1;
    unsigned int resScence;
    BaseRequest *baseRequest;
    NSString *verifyTicket;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetVerifyTicket:) NSString *verifyTicket; // @synthesize verifyTicket;
@property(readonly, nonatomic) BOOL hasVerifyTicket; // @synthesize hasVerifyTicket;
@property(nonatomic, setter=SetResScence:) unsigned int resScence; // @synthesize resScence;
@property(readonly, nonatomic) BOOL hasResScence; // @synthesize hasResScence;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

