//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface SendPatRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasFromUsername:1;
    unsigned int hasChatUsername:1;
    unsigned int hasPattedUsername:1;
    unsigned int hasClientMsgId:1;
    unsigned int hasScene:1;
    unsigned int scene;
    BaseRequest *baseRequest;
    NSString *fromUsername;
    NSString *chatUsername;
    NSString *pattedUsername;
    NSString *clientMsgId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetClientMsgId:) NSString *clientMsgId; // @synthesize clientMsgId;
@property(readonly, nonatomic) BOOL hasClientMsgId; // @synthesize hasClientMsgId;
@property(retain, nonatomic, setter=SetPattedUsername:) NSString *pattedUsername; // @synthesize pattedUsername;
@property(readonly, nonatomic) BOOL hasPattedUsername; // @synthesize hasPattedUsername;
@property(retain, nonatomic, setter=SetChatUsername:) NSString *chatUsername; // @synthesize chatUsername;
@property(readonly, nonatomic) BOOL hasChatUsername; // @synthesize hasChatUsername;
@property(retain, nonatomic, setter=SetFromUsername:) NSString *fromUsername; // @synthesize fromUsername;
@property(readonly, nonatomic) BOOL hasFromUsername; // @synthesize hasFromUsername;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
