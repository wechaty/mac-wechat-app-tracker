//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCLookupFilter.h"

@class NSImage, TXCPicture;

@interface TXCFilterFilter : TXCLookupFilter
{
    TXCPicture *lookupImageSource;
    double mixDegree;
    NSImage *filterImagae;
}

- (void).cxx_destruct;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setFilterImage:(id)arg1;
- (void)setFilterMixLevel:(float)arg1;

@end

