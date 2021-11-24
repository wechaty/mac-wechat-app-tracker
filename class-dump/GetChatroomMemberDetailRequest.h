//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface GetChatroomMemberDetailRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasChatroomUserName:1;
    unsigned int hasClientVersion:1;
    unsigned int clientVersion;
    BaseRequest *baseRequest;
    NSString *chatroomUserName;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetClientVersion:) unsigned int clientVersion; // @synthesize clientVersion;
@property(readonly, nonatomic) BOOL hasClientVersion; // @synthesize hasClientVersion;
@property(retain, nonatomic, setter=SetChatroomUserName:) NSString *chatroomUserName; // @synthesize chatroomUserName;
@property(readonly, nonatomic) BOOL hasChatroomUserName; // @synthesize hasChatroomUserName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

