//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, PositionInfo, SKBuiltinBuffer_t;

@interface FindNBSRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasNbstype:1;
    unsigned int hasUserPos:1;
    unsigned int hasPageBuff:1;
    unsigned int nbstype;
    BaseRequest *baseRequest;
    PositionInfo *userPos;
    SKBuiltinBuffer_t *pageBuff;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetPageBuff:) SKBuiltinBuffer_t *pageBuff; // @synthesize pageBuff;
@property(readonly, nonatomic) BOOL hasPageBuff; // @synthesize hasPageBuff;
@property(retain, nonatomic, setter=SetUserPos:) PositionInfo *userPos; // @synthesize userPos;
@property(readonly, nonatomic) BOOL hasUserPos; // @synthesize hasUserPos;
@property(nonatomic, setter=SetNbstype:) unsigned int nbstype; // @synthesize nbstype;
@property(readonly, nonatomic) BOOL hasNbstype; // @synthesize hasNbstype;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
