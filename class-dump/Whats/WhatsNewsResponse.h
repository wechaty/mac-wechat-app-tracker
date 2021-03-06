//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface WhatsNewsResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRegistTime:1;
    unsigned int hasFstSnstime:1;
    unsigned int hasCount:1;
    unsigned int registTime;
    unsigned int fstSnstime;
    unsigned int count;
    BaseResponse *baseResponse;
    NSMutableArray *mutablePicUrlListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutablePicUrlListList; // @synthesize mutablePicUrlListList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(nonatomic, setter=SetFstSnstime:) unsigned int fstSnstime; // @synthesize fstSnstime;
@property(readonly, nonatomic) BOOL hasFstSnstime; // @synthesize hasFstSnstime;
@property(nonatomic, setter=SetRegistTime:) unsigned int registTime; // @synthesize registTime;
@property(readonly, nonatomic) BOOL hasRegistTime; // @synthesize hasRegistTime;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addPicUrlList:(id)arg1;
- (void)addPicUrlListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *picUrlList; // @dynamic picUrlList;
- (id)picUrlListList;
- (id)init;

@end

