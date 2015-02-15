/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSScrollView;

@interface _NSScrollViewContentAreaLayout : NSObject {

	NSScrollView* scrollView;
	CGSize contentAreaSize;
	CGSize documentFrameSize;
	char hScrollerShown;
	char vScrollerShown;
	char didTrimContentAreaForHScroller;
	char didTrimContentAreaForVScroller;
	CGSize trimmedContentAreaSize;

}
-(id)description;
-(id)copy;
-(void)_addVerticalScroller;
-(void)_addHorizontalScroller;
-(CGSize)_clipBoundsSize;
-(id)_initWithScrollView:(id)arg1 ;
-(CGSize)_documentFrameSize;
-(void)_resetLayoutWithContentAreaSize:(CGSize)arg1 ;
-(void)_updateLayoutWithDocumentFrameSize:(CGSize)arg1 ;
-(char)_hScrollerShown;
-(char)_vScrollerShown;
-(char)_didTrimContentAreaForHScroller;
-(char)_didTrimContentAreaForVScroller;
-(CGSize)_trimmedContentAreaSize;
@end

