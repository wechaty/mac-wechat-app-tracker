//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface SnsTagListResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasOpCode:1;
    unsigned int hasTagListMd5:1;
    unsigned int hasCount:1;
    unsigned int hasState:1;
    unsigned int opCode;
    unsigned int count;
    unsigned int state;
    BaseResponse *baseResponse;
    NSString *tagListMd5;
    NSMutableArray *mutableListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetState:) unsigned int state; // @synthesize state;
@property(readonly, nonatomic) BOOL hasState; // @synthesize hasState;
@property(retain, nonatomic) NSMutableArray *mutableListList; // @synthesize mutableListList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetTagListMd5:) NSString *tagListMd5; // @synthesize tagListMd5;
@property(readonly, nonatomic) BOOL hasTagListMd5; // @synthesize hasTagListMd5;
@property(nonatomic, setter=SetOpCode:) unsigned int opCode; // @synthesize opCode;
@property(readonly, nonatomic) BOOL hasOpCode; // @synthesize hasOpCode;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addList:(id)arg1;
- (void)addListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
- (id)listList;
- (id)init;

@end
