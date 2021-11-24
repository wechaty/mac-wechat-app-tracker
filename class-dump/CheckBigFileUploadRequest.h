//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface CheckBigFileUploadRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasFromUserName:1;
    unsigned int hasToUserName:1;
    unsigned int hasFileSize:1;
    unsigned int hasAeskey:1;
    unsigned int hasFileMd5:1;
    unsigned int hasFileType:1;
    unsigned int hasFileExt:1;
    unsigned int hasFileName:1;
    unsigned int fileType;
    BaseRequest *baseRequest;
    NSString *fromUserName;
    NSString *toUserName;
    unsigned long long fileSize;
    NSString *aeskey;
    NSString *fileMd5;
    NSString *fileExt;
    NSString *fileName;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetFileName:) NSString *fileName; // @synthesize fileName;
@property(readonly, nonatomic) BOOL hasFileName; // @synthesize hasFileName;
@property(retain, nonatomic, setter=SetFileExt:) NSString *fileExt; // @synthesize fileExt;
@property(readonly, nonatomic) BOOL hasFileExt; // @synthesize hasFileExt;
@property(nonatomic, setter=SetFileType:) unsigned int fileType; // @synthesize fileType;
@property(readonly, nonatomic) BOOL hasFileType; // @synthesize hasFileType;
@property(retain, nonatomic, setter=SetFileMd5:) NSString *fileMd5; // @synthesize fileMd5;
@property(readonly, nonatomic) BOOL hasFileMd5; // @synthesize hasFileMd5;
@property(retain, nonatomic, setter=SetAeskey:) NSString *aeskey; // @synthesize aeskey;
@property(readonly, nonatomic) BOOL hasAeskey; // @synthesize hasAeskey;
@property(nonatomic, setter=SetFileSize:) unsigned long long fileSize; // @synthesize fileSize;
@property(readonly, nonatomic) BOOL hasFileSize; // @synthesize hasFileSize;
@property(retain, nonatomic, setter=SetToUserName:) NSString *toUserName; // @synthesize toUserName;
@property(readonly, nonatomic) BOOL hasToUserName; // @synthesize hasToUserName;
@property(retain, nonatomic, setter=SetFromUserName:) NSString *fromUserName; // @synthesize fromUserName;
@property(readonly, nonatomic) BOOL hasFromUserName; // @synthesize hasFromUserName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

