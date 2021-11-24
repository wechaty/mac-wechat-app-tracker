//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, WxaAppBaseResponse;

@interface WxaAppGetShareInfoResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasWxaappBaseresponse:1;
    BaseResponse *baseResponse;
    NSMutableArray *mutableShareInfoList;
    WxaAppBaseResponse *wxaappBaseresponse;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetWxaappBaseresponse:) WxaAppBaseResponse *wxaappBaseresponse; // @synthesize wxaappBaseresponse;
@property(readonly, nonatomic) BOOL hasWxaappBaseresponse; // @synthesize hasWxaappBaseresponse;
@property(retain, nonatomic) NSMutableArray *mutableShareInfoList; // @synthesize mutableShareInfoList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addShareInfo:(id)arg1;
- (void)addShareInfoFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *shareInfo; // @dynamic shareInfo;
- (id)shareInfoList;
- (id)init;

@end

