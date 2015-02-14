/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/TabSearchItem.h>

@class NSURL, TabSearchTabInfoForFiltering;

@interface TabSearchTabItem : TabSearchItem {

	NSURL* _tabURL;
	TabSearchTabInfoForFiltering* _filteringInfoForTab;

}

@property (nonatomic,retain) NSURL * tabURL;                                                  //@synthesize tabURL=_tabURL - In the implementation block
@property (nonatomic,retain) TabSearchTabInfoForFiltering * filteringInfoForTab;              //@synthesize filteringInfoForTab=_filteringInfoForTab - In the implementation block
-(NSURL *)tabURL;
-(void)setTabURL:(NSURL *)arg1 ;
-(TabSearchTabInfoForFiltering *)filteringInfoForTab;
-(void)setFilteringInfoForTab:(TabSearchTabInfoForFiltering *)arg1 ;
@end

