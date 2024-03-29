//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class MMSidebarColorIconView, MMSidebarLabelTextField, NSImage, NSString, SVGImageView;

@interface MMFavSidebarHeaderRowView : NSTableRowView
{
    NSString *_iconName;
    NSImage *_icon;
    NSString *_title;
    NSImage *_arrowIcon;
    SVGImageView *_iconView;
    MMSidebarColorIconView *_arrowIconView;
    MMSidebarLabelTextField *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMSidebarLabelTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMSidebarColorIconView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) SVGImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSImage *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void)layoutArrowIcon;
- (void)layoutIconView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

