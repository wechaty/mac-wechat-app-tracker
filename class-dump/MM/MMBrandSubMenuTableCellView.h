//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MMSidebarLabelTextField, NSBox, NSString;

@interface MMBrandSubMenuTableCellView : NSTableCellView
{
    BOOL _selected;
    BOOL _isLastOne;
    NSString *_menuName;
    MMSidebarLabelTextField *_labelView;
    NSBox *_dividerLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSBox *dividerLine; // @synthesize dividerLine=_dividerLine;
@property(retain, nonatomic) MMSidebarLabelTextField *labelView; // @synthesize labelView=_labelView;
@property(nonatomic) BOOL isLastOne; // @synthesize isLastOne=_isLastOne;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *menuName; // @synthesize menuName=_menuName;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

