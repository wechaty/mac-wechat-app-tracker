//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SolitaireReport.h"

@interface SolitaireClickReport : SolitaireReport
{
    unsigned long long _sourceType;
    unsigned long long _clickType;
}

@property(nonatomic) unsigned long long clickType; // @synthesize clickType=_clickType;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (void)report;

@end

