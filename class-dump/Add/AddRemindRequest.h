//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface AddRemindRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasClientId:1;
    unsigned int hasRemindTime:1;
    unsigned int hasToUserCount:1;
    unsigned int hasContent:1;
    unsigned int toUserCount;
    BaseRequest *baseRequest;
    NSString *clientId;
    unsigned long long remindTime;
    NSMutableArray *mutableToUserListList;
    NSString *content;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetContent:) NSString *content; // @synthesize content;
@property(readonly, nonatomic) BOOL hasContent; // @synthesize hasContent;
@property(retain, nonatomic) NSMutableArray *mutableToUserListList; // @synthesize mutableToUserListList;
@property(nonatomic, setter=SetToUserCount:) unsigned int toUserCount; // @synthesize toUserCount;
@property(readonly, nonatomic) BOOL hasToUserCount; // @synthesize hasToUserCount;
@property(nonatomic, setter=SetRemindTime:) unsigned long long remindTime; // @synthesize remindTime;
@property(readonly, nonatomic) BOOL hasRemindTime; // @synthesize hasRemindTime;
@property(retain, nonatomic, setter=SetClientId:) NSString *clientId; // @synthesize clientId;
@property(readonly, nonatomic) BOOL hasClientId; // @synthesize hasClientId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addToUserList:(id)arg1;
- (void)addToUserListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *toUserList; // @dynamic toUserList;
- (id)toUserListList;
- (id)init;

@end

