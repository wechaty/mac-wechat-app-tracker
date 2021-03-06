//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMChatLogBaseCellView.h"

@class MMTextView, NSImageView, NSString;

@interface MMChatLogLocationCellView : MMChatLogBaseCellView
{
    MMTextView *_locationLabelView;
    NSImageView *_locationImageView;
    NSString *_cacheKey;
}

+ (id)attrStrWithLocationLabelStr:(id)arg1;
+ (double)heightWithLocationLabelStr:(id)arg1 constrainedToWidth:(double)arg2;
+ (double)cellHeightWithFavItemDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 parentDataField:(id)arg4 constrainedToWidth:(double)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(retain, nonatomic) MMTextView *locationLabelView; // @synthesize locationLabelView=_locationLabelView;
- (void)populateWithFavItemDataField:(id)arg1;
- (void)populateWithFavItemDataField:(id)arg1 parentDataField:(id)arg2 parentFavItem:(id)arg3;
- (void)populateWithFavItemDataField:(id)arg1 parentDataField:(id)arg2;
- (void)populateWithFavItemDataField:(id)arg1 parentMessage:(id)arg2;
- (void)populateWithFavItemDataField:(id)arg1 parentFavItem:(id)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

