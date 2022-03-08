//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMCGIDelegate-Protocol.h"

@class MMTimer, MessageData, NSString;

@interface MMVoiceTranscribeCGI : NSObject <MMCGIDelegate>
{
    BOOL m_isStop;
    unsigned int _totalLen;
    unsigned int _startPos;
    unsigned int _dataLen;
    unsigned int _getResultSeq;
    MessageData *_messageData;
    NSString *_voiceID;
    CDUnknownBlockType _didTranscribeCompletedBlock;
    NSString *_voiceFilePath;
    MMTimer *_timeChecker;
    double _timerInterval;
    MMTimer *_timeOutChecker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timeOutChecker; // @synthesize timeOutChecker=_timeOutChecker;
@property(nonatomic) unsigned int getResultSeq; // @synthesize getResultSeq=_getResultSeq;
@property(nonatomic) double timerInterval; // @synthesize timerInterval=_timerInterval;
@property(retain, nonatomic) MMTimer *timeChecker; // @synthesize timeChecker=_timeChecker;
@property(nonatomic) unsigned int dataLen; // @synthesize dataLen=_dataLen;
@property(nonatomic) unsigned int startPos; // @synthesize startPos=_startPos;
@property(nonatomic) unsigned int totalLen; // @synthesize totalLen=_totalLen;
@property(retain, nonatomic) NSString *voiceFilePath; // @synthesize voiceFilePath=_voiceFilePath;
@property(copy, nonatomic) CDUnknownBlockType didTranscribeCompletedBlock; // @synthesize didTranscribeCompletedBlock=_didTranscribeCompletedBlock;
@property(retain, nonatomic) NSString *voiceID; // @synthesize voiceID=_voiceID;
@property(retain, nonatomic) MessageData *messageData; // @synthesize messageData=_messageData;
- (id)voiceAttrWithMessage:(id)arg1;
- (unsigned int)voiceFileLengthWithFile:(id)arg1;
- (id)voiceFilePathWithMessage:(id)arg1;
- (id)voiceIDWithMessage:(id)arg1;
- (void)stopTimeOutChecker;
- (void)handleVoiceTransTimeOut;
- (void)startVoiceTransTimeOutChecker;
- (void)handleGetVoiceTranscribeResult:(id)arg1;
- (void)handleUploadVoiceDataResult:(id)arg1;
- (void)handleCheckVoiceTransResult:(id)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)getVoiceTranscribeResultRecursively;
- (void)getTranscribeResult;
- (void)uploadVoiceDataRecursively;
- (void)transcribeVoiceMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)stopTranscribe;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

