//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface ShowAuthorizeUserIDReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasAppid:1;
    unsigned int hasAuthType:1;
    unsigned int authType;
    BaseRequest *baseRequest;
    NSString *appid;
    NSMutableArray *mutableCategoryIdList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetAuthType:) unsigned int authType; // @synthesize authType;
@property(readonly, nonatomic) BOOL hasAuthType; // @synthesize hasAuthType;
@property(retain, nonatomic) NSMutableArray *mutableCategoryIdList; // @synthesize mutableCategoryIdList;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addCategoryIdFromArray:(id)arg1;
- (void)addCategoryId:(unsigned int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *categoryId; // @dynamic categoryId;
- (id)categoryIdList;
- (id)init;

@end

