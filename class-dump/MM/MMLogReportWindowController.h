//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "NSWindowDelegate-Protocol.h"

@class MMDatePickerInputView, MMLogUploader, NSButton, NSDate, NSDateFormatter, NSProgressIndicator, NSString, NSTextField;

@interface MMLogReportWindowController : MMWindowController <NSWindowDelegate>
{
    BOOL _didFinishedUpload;
    NSTextField *_descriptionLabel;
    NSButton *_reportButton;
    MMLogUploader *_uploader;
    NSProgressIndicator *_progressBar;
    unsigned long long _type;
    NSTextField *_extraTextField;
    MMDatePickerInputView *_datePickerInputView;
    NSDate *_today;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSDate *today; // @synthesize today=_today;
@property(nonatomic) __weak MMDatePickerInputView *datePickerInputView; // @synthesize datePickerInputView=_datePickerInputView;
@property(nonatomic) __weak NSTextField *extraTextField; // @synthesize extraTextField=_extraTextField;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) BOOL didFinishedUpload; // @synthesize didFinishedUpload=_didFinishedUpload;
@property(nonatomic) __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) MMLogUploader *uploader; // @synthesize uploader=_uploader;
@property(nonatomic) __weak NSButton *reportButton; // @synthesize reportButton=_reportButton;
@property(nonatomic) __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (BOOL)isCov;
- (void)didClickUploadButton:(id)arg1;
- (id)formattedStrFromDate:(id)arg1;
- (id)dateFromFormattedStr:(id)arg1;
- (void)onDatePickerSelected;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

