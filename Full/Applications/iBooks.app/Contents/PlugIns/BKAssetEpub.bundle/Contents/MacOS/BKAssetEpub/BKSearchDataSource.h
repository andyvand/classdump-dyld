/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKSearchDataSource <NSObject>
@property (assign,getter=arePageNumbersValidated,nonatomic) char pageNumbersValidated; 
@optional
-(unsigned long long)indexOfNextSearchResultForIndex:(unsigned long long)arg1;
-(unsigned long long)indexOfPreviousSearchResultForIndex:(unsigned long long)arg1;

@required
-(id)tokenForRow:(unsigned long long)arg1;
-(unsigned long long)searchRowCount;
-(void)refetchSearchData;
-(id)searchDataForRow:(unsigned long long)arg1;
-(unsigned long long)recentSearchCount;
-(id)recentSearchDataForRow:(unsigned long long)arg1;
-(char)arePageNumbersValidated;
-(void)setPageNumbersValidated:(char)arg1;
-(id)updateSearchDataForSearchState;
-(id)updateSearchDataByAddingSearchResults:(id)arg1 forGroup:(id)arg2 insertedIndices:(id)arg3;

@end

