//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ShakeTranImgGetItem : PBGeneratedMessage
{
    unsigned int hasWebUrl:1;
    unsigned int hasThumbUrl:1;
    unsigned int hasImgUrl:1;
    NSString *webUrl;
    NSString *thumbUrl;
    NSString *imgUrl;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetImgUrl:) NSString *imgUrl; // @synthesize imgUrl;
@property(readonly, nonatomic) BOOL hasImgUrl; // @synthesize hasImgUrl;
@property(retain, nonatomic, setter=SetThumbUrl:) NSString *thumbUrl; // @synthesize thumbUrl;
@property(readonly, nonatomic) BOOL hasThumbUrl; // @synthesize hasThumbUrl;
@property(retain, nonatomic, setter=SetWebUrl:) NSString *webUrl; // @synthesize webUrl;
@property(readonly, nonatomic) BOOL hasWebUrl; // @synthesize hasWebUrl;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
