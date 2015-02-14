/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IKSlideshowDataSourceHandler : NSObject {

	id _dataSource;
	unsigned long long _numberOfItems;
	id _previousItem;
	id _currentItem;
	id _nextItem;
	long long _previousItemIndex;
	long long _currentItemIndex;
	long long _nextItemIndex;
	char _dataSourceRespondsToNameOfSlideshowItemAtIndex;
	char _dataSourceRespondsToSlideshowWillStart;
	char _dataSourceRespondsToSlideshowDidStop;
	char _dataSourceRespondsToSlideshowDidChangeCurrentIndex;

}
-(void)gotoItem:(id)arg1 ;
-(void)updateNumberOfItems;
-(void)slideshowDidChangeCurrentIndex:(unsigned long long)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(unsigned long long)itemCount;
-(id)nameOfSlideshowItemAtIndex:(unsigned long long)arg1 ;
-(void)slideshowWillStart;
-(void)slideshowDidStop;
-(void)cleanup;
@end

