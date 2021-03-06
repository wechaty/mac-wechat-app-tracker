//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface UpdateWxaUsageRecordRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasScene:1;
    unsigned int hasIsFromBackground:1;
    unsigned int hasVersionType:1;
    unsigned int hasRecordType:1;
    unsigned int hasOpType:1;
    unsigned int hasUsername:1;
    unsigned int hasReason:1;
    unsigned int hasSessionId:1;
    unsigned int scene;
    unsigned int isFromBackground;
    unsigned int versionType;
    unsigned int recordType;
    unsigned int opType;
    unsigned int reason;
    BaseRequest *baseRequest;
    NSString *username;
    NSString *sessionId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetSessionId:) NSString *sessionId; // @synthesize sessionId;
@property(readonly, nonatomic) BOOL hasSessionId; // @synthesize hasSessionId;
@property(nonatomic, setter=SetReason:) unsigned int reason; // @synthesize reason;
@property(readonly, nonatomic) BOOL hasReason; // @synthesize hasReason;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
@property(nonatomic, setter=SetOpType:) unsigned int opType; // @synthesize opType;
@property(readonly, nonatomic) BOOL hasOpType; // @synthesize hasOpType;
@property(nonatomic, setter=SetRecordType:) unsigned int recordType; // @synthesize recordType;
@property(readonly, nonatomic) BOOL hasRecordType; // @synthesize hasRecordType;
@property(nonatomic, setter=SetVersionType:) unsigned int versionType; // @synthesize versionType;
@property(readonly, nonatomic) BOOL hasVersionType; // @synthesize hasVersionType;
@property(nonatomic, setter=SetIsFromBackground:) unsigned int isFromBackground; // @synthesize isFromBackground;
@property(readonly, nonatomic) BOOL hasIsFromBackground; // @synthesize hasIsFromBackground;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

