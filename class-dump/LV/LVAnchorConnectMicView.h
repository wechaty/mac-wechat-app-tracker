//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class LVConnectCellView, MMDivider, MMITSwitch, NSScrollView, NSTableView, NSTextField, SVGImageView;
@protocol LVAnchorConnectMicViewDelegate;

@interface LVAnchorConnectMicView : NSView
{
    MMITSwitch *_switchButton;
    LVConnectCellView *_currentConnectedCellView;
    id <LVAnchorConnectMicViewDelegate> _delegate;
    NSTextField *_connectLabel;
    NSTableView *_tableView;
    NSTextField *_titleLable;
    NSTextField *_allowLable;
    MMDivider *_divider;
    NSView *_switchView;
    NSTextField *_connnectingMicTitle;
    NSScrollView *_scrollView;
    SVGImageView *_micImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SVGImageView *micImageView; // @synthesize micImageView=_micImageView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSTextField *connnectingMicTitle; // @synthesize connnectingMicTitle=_connnectingMicTitle;
@property(retain, nonatomic) NSView *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) MMDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *allowLable; // @synthesize allowLable=_allowLable;
@property(retain, nonatomic) NSTextField *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSTextField *connectLabel; // @synthesize connectLabel=_connectLabel;
@property(nonatomic) __weak id <LVAnchorConnectMicViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LVConnectCellView *currentConnectedCellView; // @synthesize currentConnectedCellView=_currentConnectedCellView;
@property(retain, nonatomic) MMITSwitch *switchButton; // @synthesize switchButton=_switchButton;
- (void)hiddenConnectAndApplyMicView;
- (void)showConnectAndApplyMicView;
- (void)updateConnectLabel:(BOOL)arg1 andApplyConnectMicCount:(long long)arg2;
- (void)doClickSwitchButton;
- (void)addApplyMicView;
- (void)addSwitchView;
- (id)makeLableView:(id)arg1 fontSize:(double)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
