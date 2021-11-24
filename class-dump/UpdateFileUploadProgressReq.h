//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface UpdateFileUploadProgressReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasFileUploadToken:1;
    unsigned int hasProgress:1;
    unsigned int hasStatus:1;
    unsigned int hasStopReason:1;
    unsigned int progress;
    unsigned int status;
    unsigned int stopReason;
    BaseRequest *baseRequest;
    NSString *fileUploadToken;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetStopReason:) unsigned int stopReason; // @synthesize stopReason;
@property(readonly, nonatomic) BOOL hasStopReason; // @synthesize hasStopReason;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(nonatomic, setter=SetProgress:) unsigned int progress; // @synthesize progress;
@property(readonly, nonatomic) BOOL hasProgress; // @synthesize hasProgress;
@property(retain, nonatomic, setter=SetFileUploadToken:) NSString *fileUploadToken; // @synthesize fileUploadToken;
@property(readonly, nonatomic) BOOL hasFileUploadToken; // @synthesize hasFileUploadToken;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

