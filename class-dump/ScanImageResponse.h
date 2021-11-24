//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface ScanImageResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasClientScanId:1;
    unsigned int hasType:1;
    unsigned int hasDescriptionXml:1;
    unsigned int hasEndFlag:1;
    unsigned int hasImageType:1;
    unsigned int clientScanId;
    unsigned int type;
    unsigned int endFlag;
    unsigned int imageType;
    BaseResponse *baseResponse;
    NSString *descriptionXml;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetImageType:) unsigned int imageType; // @synthesize imageType;
@property(readonly, nonatomic) BOOL hasImageType; // @synthesize hasImageType;
@property(nonatomic, setter=SetEndFlag:) unsigned int endFlag; // @synthesize endFlag;
@property(readonly, nonatomic) BOOL hasEndFlag; // @synthesize hasEndFlag;
@property(retain, nonatomic, setter=SetDescriptionXml:) NSString *descriptionXml; // @synthesize descriptionXml;
@property(readonly, nonatomic) BOOL hasDescriptionXml; // @synthesize hasDescriptionXml;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(nonatomic, setter=SetClientScanId:) unsigned int clientScanId; // @synthesize clientScanId;
@property(readonly, nonatomic) BOOL hasClientScanId; // @synthesize hasClientScanId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

