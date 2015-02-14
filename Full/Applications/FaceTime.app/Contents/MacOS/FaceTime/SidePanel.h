/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <AppKit/NSResponder.h>
#import <FaceTime/NSWindowDelegate.h>
#import <FaceTime/NSAnimationDelegate.h>

@class SidePanelWindow, BlackWindow, SidePanelContentView, NSView, NSString;

@interface SidePanel : NSResponder <NSWindowDelegate, NSAnimationDelegate> {

	SidePanelWindow* _window;
	BlackWindow* _parentWindow;
	SidePanelContentView* _containerView;

}

@property (assign,getter=isVisible,nonatomic) char visible; 
@property (assign,nonatomic) double backgroundOpacity; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) NSView * view; 
@property (nonatomic,retain) SidePanelContentView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sidePanelWithView:(id)arg1 width:(double)arg2 ;
-(void)_detachFromWindow;
-(void)_attachToWindow:(id)arg1 ;
-(id)_initWithView:(id)arg1 width:(double)arg2 ;
-(void)_makeWindow;
-(void)_clearWindow;
-(void)_handleWindowDidResize:(id)arg1 ;
-(void)setBackgroundOpacity:(double)arg1 ;
-(double)backgroundOpacity;
-(void)dealloc;
-(CGRect)frame;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsParentAttributeSettable;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(NSView *)view;
-(char)isVisible;
-(char)accessibilityIsChildrenAttributeSettable;
-(SidePanelContentView *)containerView;
-(void)setContainerView:(SidePanelContentView *)arg1 ;
-(void)setVisible:(char)arg1 ;
@end

