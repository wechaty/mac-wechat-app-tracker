//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString, StatusNotifyFunction;

@interface StatusNotifyRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasCode:1;
    unsigned int hasFromUserName:1;
    unsigned int hasToUserName:1;
    unsigned int hasClientMsgId:1;
    unsigned int hasUnreadChatListCount:1;
    unsigned int hasFunction:1;
    unsigned int hasUnreadFunctionCount:1;
    unsigned int code;
    unsigned int unreadChatListCount;
    unsigned int unreadFunctionCount;
    BaseRequest *baseRequest;
    NSString *fromUserName;
    NSString *toUserName;
    NSString *clientMsgId;
    NSMutableArray *mutableUnreadChatListList;
    StatusNotifyFunction *function;
    NSMutableArray *mutableUnreadFunctionListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableUnreadFunctionListList; // @synthesize mutableUnreadFunctionListList;
@property(nonatomic, setter=SetUnreadFunctionCount:) unsigned int unreadFunctionCount; // @synthesize unreadFunctionCount;
@property(readonly, nonatomic) BOOL hasUnreadFunctionCount; // @synthesize hasUnreadFunctionCount;
@property(retain, nonatomic, setter=SetFunction:) StatusNotifyFunction *function; // @synthesize function;
@property(readonly, nonatomic) BOOL hasFunction; // @synthesize hasFunction;
@property(retain, nonatomic) NSMutableArray *mutableUnreadChatListList; // @synthesize mutableUnreadChatListList;
@property(nonatomic, setter=SetUnreadChatListCount:) unsigned int unreadChatListCount; // @synthesize unreadChatListCount;
@property(readonly, nonatomic) BOOL hasUnreadChatListCount; // @synthesize hasUnreadChatListCount;
@property(retain, nonatomic, setter=SetClientMsgId:) NSString *clientMsgId; // @synthesize clientMsgId;
@property(readonly, nonatomic) BOOL hasClientMsgId; // @synthesize hasClientMsgId;
@property(retain, nonatomic, setter=SetToUserName:) NSString *toUserName; // @synthesize toUserName;
@property(readonly, nonatomic) BOOL hasToUserName; // @synthesize hasToUserName;
@property(retain, nonatomic, setter=SetFromUserName:) NSString *fromUserName; // @synthesize fromUserName;
@property(readonly, nonatomic) BOOL hasFromUserName; // @synthesize hasFromUserName;
@property(nonatomic, setter=SetCode:) unsigned int code; // @synthesize code;
@property(readonly, nonatomic) BOOL hasCode; // @synthesize hasCode;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addUnreadFunctionList:(id)arg1;
- (void)addUnreadFunctionListFromArray:(id)arg1;
- (void)addUnreadChatList:(id)arg1;
- (void)addUnreadChatListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *unreadFunctionList; // @dynamic unreadFunctionList;
- (id)unreadFunctionListList;
@property(retain, nonatomic) NSMutableArray *unreadChatList; // @dynamic unreadChatList;
- (id)unreadChatListList;
- (id)init;

@end
