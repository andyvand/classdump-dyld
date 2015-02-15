/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/StdMovieUITextItem.h>

@class NSArray, NSMenu;

@interface StdMovieUIChapterPopup : StdMovieUITextItem {

	NSArray* _chapterList;
	id _actionTarget;
	SEL _theAction;
	char _enabled;
	unsigned _currentIndex;
	NSMenu* _chapterMenu;

}
-(char)enabled;
-(unsigned)currentIndex;
-(void)setCurrentIndex:(unsigned)arg1 ;
-(id)chapterList;
-(id)initWithChapterList:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)menuAction:(id)arg1 ;
-(CGSize)computeMaximumTitleSize;
-(void)constructChapterMenu;
-(void)finalize;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)mouseDown:(id)arg1 ;
@end

