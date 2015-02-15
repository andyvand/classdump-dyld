/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindow.h>

@class NSDocumentRevisionsView, CABackdropLayer;

@interface NSDocumentRevisionsWindow : NSWindow {

	NSDocumentRevisionsView* view;
	CABackdropLayer* rootBackdropLayer;

}

@property (readonly) NSDocumentRevisionsView * view; 
-(id)accessibilitySubroleAttribute;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(NSDocumentRevisionsView *)view;
-(void)sendEvent:(id)arg1 ;
-(char)_allowsOrdering;
-(char)canBecomeMainWindow;
-(id)accessibilityTitleAttribute;
-(id)initWithController:(id)arg1 ;
-(void)displayIfNeeded;
-(char)canBecomeKeyWindow;
@end
