//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMContactsMgrBaseModel.h"

@class MMContactsMgrPrivacyItem;

@interface MMContactsMgrTabModel : MMContactsMgrBaseModel
{
    MMContactsMgrPrivacyItem *_aItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMContactsMgrPrivacyItem *aItem; // @synthesize aItem=_aItem;
- (BOOL)canSelectRowByKeyEvent;
- (id)makeRowViewForTableView:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
