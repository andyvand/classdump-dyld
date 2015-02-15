/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzCore/CALayer.h>
#import <QuartzComposer/CAAction.h>

@class QCCompositionCellLayer, QCPickerSelectionLayer, CATextLayer;

@interface QCCompositionPickerGridCellLayer : CALayer <CAAction> {

	QCCompositionCellLayer* _QCLayer;
	QCPickerSelectionLayer* _selectionLayer;
	CATextLayer* _textLayer;
	CGColorRef _cellFocusRingColor;
	CGColorRef _cellSelectedTextColor;
	CGColorRef _cellTextColor;
	id _controller;
	char _selected;

}
-(char)selected;
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSelected:(char)arg1 ;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(id)composition;
-(void)wakeup;
-(void)sleep;
-(id)initWithComposition:(id)arg1 controller:(id)arg2 ;
-(void)_finalize_QCCompositionPickerGridCellLayer;
-(void)selectionDidChange;
-(void)updateLayout;
-(void)animateCompositionsIfNeeded;
-(void)cellBackgroundColorDidChange;
-(void)selectionModeDidChange;
-(id)compositionLayer;
-(void)setCollapsedLayout;
-(void)restoreExpandedLayout;
@end

