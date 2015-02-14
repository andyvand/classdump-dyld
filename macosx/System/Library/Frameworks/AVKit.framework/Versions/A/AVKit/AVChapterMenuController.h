/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMenu, NSArray;

@interface AVChapterMenuController : NSObject {

	NSMenu* _menu;
	NSArray* _chapters;
	long long _selectedIndex;
	/*^block*/id _selectionHandler;

}
-(id)initWithMenu:(id)arg1 chapters:(id)arg2 selectedIndex:(long long)arg3 selectionHandler:(/*^block*/id)arg4 ;
-(void)setChapters:(id)arg1 selectedIndex:(long long)arg2 ;
-(void)_updateMenu;
-(void)_addSeparatorMenuItem;
-(void)_selection:(id)arg1 ;
@end

