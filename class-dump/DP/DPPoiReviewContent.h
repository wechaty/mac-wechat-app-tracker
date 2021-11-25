//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface DPPoiReviewContent : PBGeneratedMessage
{
    unsigned int hasUser:1;
    unsigned int hasText:1;
    unsigned int hasCreateTime:1;
    unsigned int createTime;
    NSString *user;
    NSString *text;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetCreateTime:) unsigned int createTime; // @synthesize createTime;
@property(readonly, nonatomic) BOOL hasCreateTime; // @synthesize hasCreateTime;
@property(retain, nonatomic, setter=SetText:) NSString *text; // @synthesize text;
@property(readonly, nonatomic) BOOL hasText; // @synthesize hasText;
@property(retain, nonatomic, setter=SetUser:) NSString *user; // @synthesize user;
@property(readonly, nonatomic) BOOL hasUser; // @synthesize hasUser;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
