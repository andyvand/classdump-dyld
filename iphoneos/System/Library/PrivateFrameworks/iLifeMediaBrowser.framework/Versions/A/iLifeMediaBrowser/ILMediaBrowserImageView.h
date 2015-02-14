/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/IKImageBrowserView.h>

@interface ILMediaBrowserImageView : IKImageBrowserView {

	char _shouldDrawOverlays;
	char _displaysToolTips;

}
-(void)setDisplaysToolTips:(char)arg1 ;
-(char)displaysToolTips;
-(void)setShouldDrawOverlays:(char)arg1 ;
-(char)shouldDrawOverlays;
-(void)scaleCellSizeByFactor:(double)arg1 ;
-(char)_shouldSelectIndex:(long long)arg1 ;
-(void)setSelectionIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(char)selectItem:(char)arg1 atIndex:(unsigned long long)arg2 ;
-(void)rightMouseDown:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
@end

