//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface GetProfileInfoResponse_FeedBack : PBGeneratedMessage
{
    unsigned int hasTitle:1;
    unsigned int hasJumpurlPrefix:1;
    NSString *title;
    NSString *jumpurlPrefix;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetJumpurlPrefix:) NSString *jumpurlPrefix; // @synthesize jumpurlPrefix;
@property(readonly, nonatomic) BOOL hasJumpurlPrefix; // @synthesize hasJumpurlPrefix;
@property(retain, nonatomic, setter=SetTitle:) NSString *title; // @synthesize title;
@property(readonly, nonatomic) BOOL hasTitle; // @synthesize hasTitle;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

