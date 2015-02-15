/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>

@class NSView, NSCorrectionTypedTextHighlightView, NSCorrectionTextView, NSCorrectionShadowView, NSPanel, NSAttributedString, NSMutableArray, NSDictionary, NSString;

@interface NSCorrectionPanel : NSPanel {

	NSView* hostView;
	CGRect boundingBoxInHostView;
	NSCorrectionTypedTextHighlightView* typedTextView;
	NSCorrectionTextView* correctionView;
	NSCorrectionShadowView* shadowView;
	NSPanel* correctionSubPanel;
	/*^block*/id completionHandler;
	/*^block*/id stringCompletionHandler;
	char useDefaultWindowShadow;
	NSAttributedString* primaryCandidate;
	NSMutableArray* alternativeCandidates;
	char dismissedExternally;

}

@property (assign) char useDefaultStringAttributes; 
@property (copy) NSDictionary * correctionAttributes; 
@property (readonly) NSString * correction; 
@property (readonly) long long correctionPanelType; 
+(id)sharedCorrectionPanel;
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(id)accessibilityChildrenAttribute;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(id)initWithContentRect:(CGRect)arg1 backing:(unsigned long long)arg2 defer:(char)arg3 ;
-(void)showPanelAtRect:(CGRect)arg1 inView:(id)arg2 primaryString:(id)arg3 alternativeStrings:(id)arg4 forType:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)showPanelAtRect:(CGRect)arg1 inView:(id)arg2 withReplacement:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dismissAndAccept:(char)arg1 ;
-(long long)correctionPanelType;
-(void)dismiss;
-(CGRect)_highlightRectForTypedText:(CGRect)arg1 ;
-(char)_shouldCorrectionViewBeAtBottom:(double)arg1 highlightRect:(CGRect)arg2 inScreenVisibleRect:(CGRect)arg3 ;
-(void)showPanelAtRect:(CGRect)arg1 inView:(id)arg2 withReplacement:(id)arg3 forType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_adjustLayoutForView:(id)arg1 ;
-(void)_doDismissAndAccept:(id)arg1 ;
-(void)_dismissAndAccept:(char)arg1 ;
-(NSString *)correction;
-(void)removeFromWindow;
-(char)useDefaultStringAttributes;
-(void)_updateCorrectionViewForPanelType:(long long)arg1 inView:(id)arg2 ;
-(void)_interceptEvents;
-(void)setUseDefaultStringAttributes:(char)arg1 ;
-(void)setCorrectionAttributes:(NSDictionary *)arg1 ;
@end
