//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMFavoriteDataMgr : MMService <MMService>
{
    NSMutableDictionary *_reportDataDic;
}

+ (int)covertReportSubType:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *reportDataDic; // @synthesize reportDataDic=_reportDataDic;
- (void)reportFavTagDelete:(BOOL)arg1;
- (void)reportFavTagRename:(BOOL)arg1 oldTagName:(id)arg2 newTagName:(id)arg3;
- (void)reportFavSearch:(unsigned long long)arg1;
- (void)reportFavMutileSelectItem:(int)arg1 multiSelectEntity:(unsigned long long)arg2 multiSelectNum:(unsigned long long)arg3 multiSelectTo:(int)arg4;
- (void)reportFavSelectSubType:(int)arg1;
- (void)reportFavCapacityExceed:(unsigned long long)arg1;
- (void)reportFavEnterSource:(unsigned long long)arg1;
- (void)reportFavBrowseDetailData:(id)arg1;
- (void)reportFavShareData:(id)arg1;
- (void)reportFavEnterDetailData:(id)arg1;
- (void)reportFavTagEditData:(id)arg1;
- (id)browseDetailReportDataForKey:(id)arg1;
- (void)removeBrowseDetailReportDataForKey:(id)arg1;
- (void)setBrowseDetailReportData:(id)arg1 forKey:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)loadDataForSelectedItem:(id)arg1 forCollectionView:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

