//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6WeChat24SnsFeedCarViewController.h"

#import "MMTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@interface _TtC6WeChat24SnsFeedCarViewController (WeChat) <NSTableViewDelegate, NSTableViewDataSource, MMTableViewDelegate>
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)removeComposeInputRow:(BOOL)arg1;
- (void)insertComposeInputRow:(id)arg1;
@end
