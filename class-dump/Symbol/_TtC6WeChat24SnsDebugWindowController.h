//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class NSArray, NSButton, NSImageView, NSProgressIndicator, NSStackView, NSString, NSTextField, NSTextView, NSView;

@interface _TtC6WeChat24SnsDebugWindowController : NSWindowController <NSWindowDelegate>
{
    // Error parsing type: , name: textView
    // Error parsing type: , name: downloadTextField
    // Error parsing type: , name: imageView
    // Error parsing type: , name: textTid
    // Error parsing type: , name: textComment
    // Error parsing type: , name: playerView
    // Error parsing type: , name: playerProgressBar
    // Error parsing type: , name: playerStreamingProgressBar
    // Error parsing type: , name: dataList
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: collection
    // Error parsing type: , name: imageStackView
    // Error parsing type: , name: batchDownloadSwitch
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)delFeed:(id)arg1;
- (void)delLike:(id)arg1;
- (void)commitLike:(id)arg1;
- (void)onCommitComment:(id)arg1;
- (void)gridImageContentSizeChanged:(id)arg1;
- (void)cleanMediaPath:(id)arg1;
- (void)cleanDataPath:(id)arg1;
- (void)cleanPreview:(id)arg1;
- (void)normalDownload:(id)arg1;
- (void)batchDownload:(id)arg1;
- (void)onBatchDownloadSwitchChange:(id)arg1;
- (void)downloadMedia:(id)arg1;
- (void)openMediaPath:(id)arg1;
- (void)loadNextPage:(id)arg1;
- (void)loadFirstPage:(id)arg1;
- (void)endSession:(id)arg1;
- (void)beginSession:(id)arg1;
- (void)preloadData:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)showCommitWindow:(id)arg1;
- (void)windowDidLoad;
@property(nonatomic) __weak NSButton *batchDownloadSwitch; // @synthesize batchDownloadSwitch;
@property(nonatomic) __weak NSStackView *imageStackView; // @synthesize imageStackView;
@property(nonatomic, copy) NSArray *collection;
@property(nonatomic) __weak NSProgressIndicator *playerStreamingProgressBar; // @synthesize playerStreamingProgressBar;
@property(nonatomic) __weak NSProgressIndicator *playerProgressBar; // @synthesize playerProgressBar;
@property(nonatomic) __weak NSView *playerView; // @synthesize playerView;
@property(nonatomic) __weak NSTextField *textComment; // @synthesize textComment;
@property(nonatomic) __weak NSTextField *textTid; // @synthesize textTid;
@property(nonatomic) __weak NSImageView *imageView; // @synthesize imageView;
@property(nonatomic) __weak NSTextField *downloadTextField; // @synthesize downloadTextField;
@property(nonatomic, retain) NSTextView *textView; // @synthesize textView;
@property(nonatomic, readonly) NSString *windowNibName;

@end

