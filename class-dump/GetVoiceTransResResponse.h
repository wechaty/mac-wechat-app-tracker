//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, QueryResCtx, VoiceTransRes;

@interface GetVoiceTransResResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasTransRes:1;
    unsigned int hasQueryCtx:1;
    BaseResponse *baseResponse;
    VoiceTransRes *transRes;
    QueryResCtx *queryCtx;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetQueryCtx:) QueryResCtx *queryCtx; // @synthesize queryCtx;
@property(readonly, nonatomic) BOOL hasQueryCtx; // @synthesize hasQueryCtx;
@property(retain, nonatomic, setter=SetTransRes:) VoiceTransRes *transRes; // @synthesize transRes;
@property(readonly, nonatomic) BOOL hasTransRes; // @synthesize hasTransRes;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

