//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSString;

@interface UxLifeMediaInfo : PBGeneratedMessage
{
    unsigned int hasThumburl:1;
    unsigned int hasBufferurl:1;
    unsigned int hasHeight:1;
    unsigned int hasWidth:1;
    unsigned int hasClientBuffer:1;
    float height;
    float width;
    NSString *thumburl;
    NSString *bufferurl;
    NSData *clientBuffer;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetClientBuffer:) NSData *clientBuffer; // @synthesize clientBuffer;
@property(readonly, nonatomic) BOOL hasClientBuffer; // @synthesize hasClientBuffer;
@property(nonatomic, setter=SetWidth:) float width; // @synthesize width;
@property(readonly, nonatomic) BOOL hasWidth; // @synthesize hasWidth;
@property(nonatomic, setter=SetHeight:) float height; // @synthesize height;
@property(readonly, nonatomic) BOOL hasHeight; // @synthesize hasHeight;
@property(retain, nonatomic, setter=SetBufferurl:) NSString *bufferurl; // @synthesize bufferurl;
@property(readonly, nonatomic) BOOL hasBufferurl; // @synthesize hasBufferurl;
@property(retain, nonatomic, setter=SetThumburl:) NSString *thumburl; // @synthesize thumburl;
@property(readonly, nonatomic) BOOL hasThumburl; // @synthesize hasThumburl;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
