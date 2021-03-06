//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface CheckCanSubscribeBizResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasCheckTicket:1;
    unsigned int hasToUserName:1;
    unsigned int hasWebViewUrl:1;
    unsigned int hasShowWord:1;
    BaseResponse *baseResponse;
    NSString *checkTicket;
    NSString *toUserName;
    NSString *webViewUrl;
    NSString *showWord;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetShowWord:) NSString *showWord; // @synthesize showWord;
@property(readonly, nonatomic) BOOL hasShowWord; // @synthesize hasShowWord;
@property(retain, nonatomic, setter=SetWebViewUrl:) NSString *webViewUrl; // @synthesize webViewUrl;
@property(readonly, nonatomic) BOOL hasWebViewUrl; // @synthesize hasWebViewUrl;
@property(retain, nonatomic, setter=SetToUserName:) NSString *toUserName; // @synthesize toUserName;
@property(readonly, nonatomic) BOOL hasToUserName; // @synthesize hasToUserName;
@property(retain, nonatomic, setter=SetCheckTicket:) NSString *checkTicket; // @synthesize checkTicket;
@property(readonly, nonatomic) BOOL hasCheckTicket; // @synthesize hasCheckTicket;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

