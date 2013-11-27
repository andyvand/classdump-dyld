/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPanGestureRecognizer.h>
#import <UIKit/_UIScreenEdgePanRecognizerDelegate.h>

@class _UIScreenEdgePanRecognizer;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {

	_UIScreenEdgePanRecognizer* _recognizer;
	unsigned _edges;

}

@property (assign,nonatomic) unsigned edges;              //@synthesize edges=_edges - In the implementation block
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEdges:(unsigned)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(float)_edgeRegionSize;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(BOOL)isRequiringLongPress;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(unsigned)edges;
@end
