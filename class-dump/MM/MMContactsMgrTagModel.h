//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMContactsMgrBaseModel.h"

@class MMContactTag;

@interface MMContactsMgrTagModel : MMContactsMgrBaseModel
{
    BOOL _isCreateType;
    MMContactTag *_tagInfo;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isCreateType; // @synthesize isCreateType=_isCreateType;
@property(retain, nonatomic) MMContactTag *tagInfo; // @synthesize tagInfo=_tagInfo;
- (BOOL)canSelectRowByKeyEvent;
- (id)makeRowViewForTableView:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

