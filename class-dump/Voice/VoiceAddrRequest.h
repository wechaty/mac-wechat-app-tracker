//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface VoiceAddrRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUserName:1;
    unsigned int hasData:1;
    SKBuiltinBuffer_t *data_;
    unsigned int hasOffset:1;
    unsigned int hasClientVoiceId:1;
    unsigned int hasEndFlag:1;
    unsigned int hasSamplePerSec:1;
    unsigned int hasBitsPerSample:1;
    unsigned int hasVoiceEncodeType:1;
    unsigned int hasFileType:1;
    unsigned int hasSearchType:1;
    unsigned int hasExtraNameCount:1;
    unsigned int offset;
    unsigned int endFlag;
    unsigned int samplePerSec;
    unsigned int bitsPerSample;
    unsigned int voiceEncodeType;
    unsigned int fileType;
    unsigned int searchType;
    unsigned int extraNameCount;
    BaseRequest *baseRequest;
    NSString *userName;
    NSString *clientVoiceId;
    NSMutableArray *mutableExtraNameUserNameListList;
    NSMutableArray *mutableExtraNameRemarkNameListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableExtraNameRemarkNameListList; // @synthesize mutableExtraNameRemarkNameListList;
@property(retain, nonatomic) NSMutableArray *mutableExtraNameUserNameListList; // @synthesize mutableExtraNameUserNameListList;
@property(nonatomic, setter=SetExtraNameCount:) unsigned int extraNameCount; // @synthesize extraNameCount;
@property(readonly, nonatomic) BOOL hasExtraNameCount; // @synthesize hasExtraNameCount;
@property(nonatomic, setter=SetSearchType:) unsigned int searchType; // @synthesize searchType;
@property(readonly, nonatomic) BOOL hasSearchType; // @synthesize hasSearchType;
@property(nonatomic, setter=SetFileType:) unsigned int fileType; // @synthesize fileType;
@property(readonly, nonatomic) BOOL hasFileType; // @synthesize hasFileType;
@property(nonatomic, setter=SetVoiceEncodeType:) unsigned int voiceEncodeType; // @synthesize voiceEncodeType;
@property(readonly, nonatomic) BOOL hasVoiceEncodeType; // @synthesize hasVoiceEncodeType;
@property(nonatomic, setter=SetBitsPerSample:) unsigned int bitsPerSample; // @synthesize bitsPerSample;
@property(readonly, nonatomic) BOOL hasBitsPerSample; // @synthesize hasBitsPerSample;
@property(nonatomic, setter=SetSamplePerSec:) unsigned int samplePerSec; // @synthesize samplePerSec;
@property(readonly, nonatomic) BOOL hasSamplePerSec; // @synthesize hasSamplePerSec;
@property(nonatomic, setter=SetEndFlag:) unsigned int endFlag; // @synthesize endFlag;
@property(readonly, nonatomic) BOOL hasEndFlag; // @synthesize hasEndFlag;
@property(retain, nonatomic, setter=SetClientVoiceId:) NSString *clientVoiceId; // @synthesize clientVoiceId;
@property(readonly, nonatomic) BOOL hasClientVoiceId; // @synthesize hasClientVoiceId;
@property(nonatomic, setter=SetOffset:) unsigned int offset; // @synthesize offset;
@property(readonly, nonatomic) BOOL hasOffset; // @synthesize hasOffset;
@property(retain, nonatomic, setter=SetData:) SKBuiltinBuffer_t *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addExtraNameRemarkNameList:(id)arg1;
- (void)addExtraNameRemarkNameListFromArray:(id)arg1;
- (void)addExtraNameUserNameList:(id)arg1;
- (void)addExtraNameUserNameListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *extraNameRemarkNameList; // @dynamic extraNameRemarkNameList;
- (id)extraNameRemarkNameListList;
@property(retain, nonatomic) NSMutableArray *extraNameUserNameList; // @dynamic extraNameUserNameList;
- (id)extraNameUserNameListList;
- (id)init;

@end

