//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTraitsViewController.h"

@class MMFileListViewController, MMTextField, NSString;

@interface MMFileSearchViewController : MMTraitsViewController
{
    NSString *_keyWord;
    MMTextField *_resultDescField;
    MMFileListViewController *_listVC;
    unsigned long long _lastCalledTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastCalledTime; // @synthesize lastCalledTime=_lastCalledTime;
@property(retain, nonatomic) MMFileListViewController *listVC; // @synthesize listVC=_listVC;
@property(nonatomic) __weak MMTextField *resultDescField; // @synthesize resultDescField=_resultDescField;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
- (void)performSearch;
- (void)returnSearchResultCount:(long long)arg1;
- (void)clear;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (void)viewChangedEffectiveAppearance;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

