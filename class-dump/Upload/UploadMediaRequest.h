//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface UploadMediaRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasClientMediaId:1;
    unsigned int hasDataMd5:1;
    unsigned int hasTotalLen:1;
    unsigned int hasStartPos:1;
    unsigned int hasDataLen:1;
    unsigned int hasData:1;
    SKBuiltinBuffer_t *data_;
    unsigned int hasMediaType:1;
    unsigned int hasAudioFormat:1;
    unsigned int hasAudioSamplingRate:1;
    unsigned int hasAudioChannelNum:1;
    unsigned int hasAudioBitRate:1;
    unsigned int totalLen;
    unsigned int startPos;
    unsigned int dataLen;
    unsigned int mediaType;
    unsigned int audioFormat;
    unsigned int audioSamplingRate;
    unsigned int audioChannelNum;
    unsigned int audioBitRate;
    BaseRequest *baseRequest;
    SKBuiltinString_t *clientMediaId;
    SKBuiltinString_t *dataMd5;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetAudioBitRate:) unsigned int audioBitRate; // @synthesize audioBitRate;
@property(readonly, nonatomic) BOOL hasAudioBitRate; // @synthesize hasAudioBitRate;
@property(nonatomic, setter=SetAudioChannelNum:) unsigned int audioChannelNum; // @synthesize audioChannelNum;
@property(readonly, nonatomic) BOOL hasAudioChannelNum; // @synthesize hasAudioChannelNum;
@property(nonatomic, setter=SetAudioSamplingRate:) unsigned int audioSamplingRate; // @synthesize audioSamplingRate;
@property(readonly, nonatomic) BOOL hasAudioSamplingRate; // @synthesize hasAudioSamplingRate;
@property(nonatomic, setter=SetAudioFormat:) unsigned int audioFormat; // @synthesize audioFormat;
@property(readonly, nonatomic) BOOL hasAudioFormat; // @synthesize hasAudioFormat;
@property(nonatomic, setter=SetMediaType:) unsigned int mediaType; // @synthesize mediaType;
@property(readonly, nonatomic) BOOL hasMediaType; // @synthesize hasMediaType;
@property(retain, nonatomic, setter=SetData:) SKBuiltinBuffer_t *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(nonatomic, setter=SetDataLen:) unsigned int dataLen; // @synthesize dataLen;
@property(readonly, nonatomic) BOOL hasDataLen; // @synthesize hasDataLen;
@property(nonatomic, setter=SetStartPos:) unsigned int startPos; // @synthesize startPos;
@property(readonly, nonatomic) BOOL hasStartPos; // @synthesize hasStartPos;
@property(nonatomic, setter=SetTotalLen:) unsigned int totalLen; // @synthesize totalLen;
@property(readonly, nonatomic) BOOL hasTotalLen; // @synthesize hasTotalLen;
@property(retain, nonatomic, setter=SetDataMd5:) SKBuiltinString_t *dataMd5; // @synthesize dataMd5;
@property(readonly, nonatomic) BOOL hasDataMd5; // @synthesize hasDataMd5;
@property(retain, nonatomic, setter=SetClientMediaId:) SKBuiltinString_t *clientMediaId; // @synthesize clientMediaId;
@property(readonly, nonatomic) BOOL hasClientMediaId; // @synthesize hasClientMediaId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

