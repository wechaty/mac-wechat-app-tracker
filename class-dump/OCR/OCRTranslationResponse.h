//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface OCRTranslationResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasClientScanId:1;
    unsigned int hasSource:1;
    unsigned int hasTranslation:1;
    unsigned int hasImageType:1;
    unsigned int clientScanId;
    unsigned int imageType;
    BaseResponse *baseResponse;
    NSString *source;
    NSString *translation;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetImageType:) unsigned int imageType; // @synthesize imageType;
@property(readonly, nonatomic) BOOL hasImageType; // @synthesize hasImageType;
@property(retain, nonatomic, setter=SetTranslation:) NSString *translation; // @synthesize translation;
@property(readonly, nonatomic) BOOL hasTranslation; // @synthesize hasTranslation;
@property(retain, nonatomic, setter=SetSource:) NSString *source; // @synthesize source;
@property(readonly, nonatomic) BOOL hasSource; // @synthesize hasSource;
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

