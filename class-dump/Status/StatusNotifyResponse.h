//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface StatusNotifyResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasMsgId:1;
    unsigned int hasNewMsgId:1;
    unsigned int hasChatContactCount:1;
    unsigned int msgId;
    unsigned int chatContactCount;
    BaseResponse *baseResponse;
    unsigned long long newMsgId;
    NSMutableArray *mutableChatContactListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableChatContactListList; // @synthesize mutableChatContactListList;
@property(nonatomic, setter=SetChatContactCount:) unsigned int chatContactCount; // @synthesize chatContactCount;
@property(readonly, nonatomic) BOOL hasChatContactCount; // @synthesize hasChatContactCount;
@property(nonatomic, setter=SetNewMsgId:) unsigned long long newMsgId; // @synthesize newMsgId;
@property(readonly, nonatomic) BOOL hasNewMsgId; // @synthesize hasNewMsgId;
@property(nonatomic, setter=SetMsgId:) unsigned int msgId; // @synthesize msgId;
@property(readonly, nonatomic) BOOL hasMsgId; // @synthesize hasMsgId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addChatContactList:(id)arg1;
- (void)addChatContactListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *chatContactList; // @dynamic chatContactList;
- (id)chatContactListList;
- (id)init;

@end

