//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface SnsTagMemMutilSetRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasModUserName:1;
    unsigned int hasCount:1;
    unsigned int count;
    BaseRequest *baseRequest;
    NSString *modUserName;
    NSMutableArray *mutableTagIdListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableTagIdListList; // @synthesize mutableTagIdListList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetModUserName:) NSString *modUserName; // @synthesize modUserName;
@property(readonly, nonatomic) BOOL hasModUserName; // @synthesize hasModUserName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addTagIdList:(id)arg1;
- (void)addTagIdListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *tagIdList; // @dynamic tagIdList;
- (id)tagIdListList;
- (id)init;

@end

