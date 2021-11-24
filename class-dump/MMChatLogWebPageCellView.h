//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMChatLogBaseCellView.h"

@class MMImageView, MMTextField, NSString;

@interface MMChatLogWebPageCellView : MMChatLogBaseCellView
{
    MMImageView *_thumbnailImageView;
    MMTextField *_webPageDescriptionTextView;
    MMTextField *_webPageLinkUrlDescriptionTextView;
    NSString *_thumbImagePath;
}

+ (double)cellHeightWithFavItemDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 parentDataField:(id)arg4 constrainedToWidth:(double)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *thumbImagePath; // @synthesize thumbImagePath=_thumbImagePath;
@property(retain, nonatomic) MMTextField *webPageLinkUrlDescriptionTextView; // @synthesize webPageLinkUrlDescriptionTextView=_webPageLinkUrlDescriptionTextView;
@property(retain, nonatomic) MMTextField *webPageDescriptionTextView; // @synthesize webPageDescriptionTextView=_webPageDescriptionTextView;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void)layoutThumbnail;
- (void)layoutWebPageInfo;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

@end

