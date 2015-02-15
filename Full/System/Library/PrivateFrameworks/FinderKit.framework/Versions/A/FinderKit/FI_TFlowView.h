/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <ImageKit/IKImageFlowView.h>
#import <FinderKit/TDragImageProtocol.h>

@class NSEvent, NSString;

@interface FI_TFlowView : IKImageFlowView <TDragImageProtocol> {

	NSEvent* _lastMouseDownEvent;

}

@property (nonatomic,retain) NSEvent * lastMouseDownEvent;              //@synthesize lastMouseDownEvent=_lastMouseDownEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDragImageOpaque;
-(void)setLastMouseDownEvent:(NSEvent *)arg1 ;
-(NSEvent *)lastMouseDownEvent;
-(id)_viewIdentifier;
-(void)dealloc;
-(void)reloadData;
-(char)acceptsFirstResponder;
-(void)dragImage:(id)arg1 at:(CGPoint)arg2 offset:(CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(char)arg7 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)resetCursorRects;
-(void)mouseDown:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(char)shouldDelayWindowOrderingForEvent:(id)arg1 ;
-(void)quickLookWithEvent:(id)arg1 ;
@end

