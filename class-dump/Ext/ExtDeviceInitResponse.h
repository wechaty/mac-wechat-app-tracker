//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, CmdList, NSMutableArray;

@interface ExtDeviceInitResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasCmdList:1;
    BaseResponse *baseResponse;
    CmdList *cmdList;
    NSMutableArray *mutableChatContactListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableChatContactListList; // @synthesize mutableChatContactListList;
@property(retain, nonatomic, setter=SetCmdList:) CmdList *cmdList; // @synthesize cmdList;
@property(readonly, nonatomic) BOOL hasCmdList; // @synthesize hasCmdList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addChatContactListFromArray:(id)arg1;
- (void)addChatContactList:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *chatContactList; // @dynamic chatContactList;
- (id)chatContactListList;
- (id)init;

@end

