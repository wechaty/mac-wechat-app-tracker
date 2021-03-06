//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface GetPackageListRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasCount:1;
    unsigned int hasType:1;
    unsigned int hasFlag:1;
    unsigned int count;
    unsigned int type;
    unsigned int flag;
    BaseRequest *baseRequest;
    NSMutableArray *mutableListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetFlag:) unsigned int flag; // @synthesize flag;
@property(readonly, nonatomic) BOOL hasFlag; // @synthesize hasFlag;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic) NSMutableArray *mutableListList; // @synthesize mutableListList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
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

