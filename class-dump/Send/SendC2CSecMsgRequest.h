//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface SendC2CSecMsgRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasToUser:1;
    unsigned int hasMsgType:1;
    unsigned int hasTempId:1;
    unsigned int hasTitle:1;
    unsigned int hasDes:1;
    unsigned int hasUrl:1;
    unsigned int hasScene:1;
    int msgType;
    int scene;
    BaseRequest *baseRequest;
    NSString *toUser;
    NSString *tempId;
    NSString *title;
    NSString *des;
    NSString *url;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetScene:) int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetUrl:) NSString *url; // @synthesize url;
@property(readonly, nonatomic) BOOL hasUrl; // @synthesize hasUrl;
@property(retain, nonatomic, setter=SetDes:) NSString *des; // @synthesize des;
@property(readonly, nonatomic) BOOL hasDes; // @synthesize hasDes;
@property(retain, nonatomic, setter=SetTitle:) NSString *title; // @synthesize title;
@property(readonly, nonatomic) BOOL hasTitle; // @synthesize hasTitle;
@property(retain, nonatomic, setter=SetTempId:) NSString *tempId; // @synthesize tempId;
@property(readonly, nonatomic) BOOL hasTempId; // @synthesize hasTempId;
@property(nonatomic, setter=SetMsgType:) int msgType; // @synthesize msgType;
@property(readonly, nonatomic) BOOL hasMsgType; // @synthesize hasMsgType;
@property(retain, nonatomic, setter=SetToUser:) NSString *toUser; // @synthesize toUser;
@property(readonly, nonatomic) BOOL hasToUser; // @synthesize hasToUser;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

