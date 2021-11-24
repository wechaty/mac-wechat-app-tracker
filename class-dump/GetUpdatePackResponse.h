//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t;

@interface GetUpdatePackResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasTotalLen:1;
    unsigned int hasStartPos:1;
    unsigned int hasDataLen:1;
    unsigned int hasData:1;
    SKBuiltinBuffer_t *data_;
    unsigned int totalLen;
    unsigned int startPos;
    unsigned int dataLen;
    BaseResponse *baseResponse;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetData:) SKBuiltinBuffer_t *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(nonatomic, setter=SetDataLen:) unsigned int dataLen; // @synthesize dataLen;
@property(readonly, nonatomic) BOOL hasDataLen; // @synthesize hasDataLen;
@property(nonatomic, setter=SetStartPos:) unsigned int startPos; // @synthesize startPos;
@property(readonly, nonatomic) BOOL hasStartPos; // @synthesize hasStartPos;
@property(nonatomic, setter=SetTotalLen:) unsigned int totalLen; // @synthesize totalLen;
@property(readonly, nonatomic) BOOL hasTotalLen; // @synthesize hasTotalLen;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

