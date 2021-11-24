//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class EmotionBannerImg, EmotionSummary;

@interface EmotionBanner : PBGeneratedMessage
{
    unsigned int hasBannerSummary:1;
    unsigned int hasBannerImg:1;
    EmotionSummary *bannerSummary;
    EmotionBannerImg *bannerImg;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetBannerImg:) EmotionBannerImg *bannerImg; // @synthesize bannerImg;
@property(readonly, nonatomic) BOOL hasBannerImg; // @synthesize hasBannerImg;
@property(retain, nonatomic, setter=SetBannerSummary:) EmotionSummary *bannerSummary; // @synthesize bannerSummary;
@property(readonly, nonatomic) BOOL hasBannerSummary; // @synthesize hasBannerSummary;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

