/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSImageView.h>

@class AVChapter, NSMenuItem;

@interface AVChapterPopupButtonMenuItemImageView : NSImageView {

	AVChapter* _chapter;
	NSMenuItem* _menuItem;

}
+(id)chapterPopupButtonMenuItemImageViewWithChapter:(id)arg1 menuItem:(id)arg2 ;
-(id)initWithChapter:(id)arg1 menuItem:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

