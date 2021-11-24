//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface GetWeiBoURLReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasA2Key:1;
    unsigned int hasUserName:1;
    unsigned int hasScene:1;
    unsigned int hasBlogUserName:1;
    unsigned int hasA2KeyNew:1;
    unsigned int scene;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *a2Key;
    NSString *userName;
    NSString *blogUserName;
    SKBuiltinBuffer_t *a2KeyNew;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetA2KeyNew:) SKBuiltinBuffer_t *a2KeyNew; // @synthesize a2KeyNew;
@property(readonly, nonatomic) BOOL hasA2KeyNew; // @synthesize hasA2KeyNew;
@property(retain, nonatomic, setter=SetBlogUserName:) NSString *blogUserName; // @synthesize blogUserName;
@property(readonly, nonatomic) BOOL hasBlogUserName; // @synthesize hasBlogUserName;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetA2Key:) SKBuiltinBuffer_t *a2Key; // @synthesize a2Key;
@property(readonly, nonatomic) BOOL hasA2Key; // @synthesize hasA2Key;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

