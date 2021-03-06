//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, MMBizWxaAppBaseInfo, NSString;

@interface ReportWxaAppExposeRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasWxaAppBaseInfo:1;
    unsigned int hasJsonData:1;
    BaseRequest *baseRequest;
    MMBizWxaAppBaseInfo *wxaAppBaseInfo;
    NSString *jsonData;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetJsonData:) NSString *jsonData; // @synthesize jsonData;
@property(readonly, nonatomic) BOOL hasJsonData; // @synthesize hasJsonData;
@property(retain, nonatomic, setter=SetWxaAppBaseInfo:) MMBizWxaAppBaseInfo *wxaAppBaseInfo; // @synthesize wxaAppBaseInfo;
@property(readonly, nonatomic) BOOL hasWxaAppBaseInfo; // @synthesize hasWxaAppBaseInfo;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

