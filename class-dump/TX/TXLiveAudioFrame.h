//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface TXLiveAudioFrame : NSObject
{
    NSData *_data;
    long long _channels;
    long long _sampleRate;
}

- (void).cxx_destruct;
@property(nonatomic) long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) long long channels; // @synthesize channels=_channels;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

@end
