/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSImageView.h>

@protocol TDraggingSource;
@interface FI_TImageView : NSImageView {

	SEL _clickAction;
	SEL _doubleClickAction;
	BOOL _doubleClickOnMouseUp;
	char _acceptsFirstMouse;
	id<TDraggingSource> _draggingSourceDelegate;
	CGSize _maxSize;
	CGSize _minSize;
	BOOL _opaqueHitTestingEnabled;

}

@property (assign) SEL clickAction;                                                     //@synthesize clickAction=_clickAction - In the implementation block
@property (assign) SEL doubleClickAction;                                               //@synthesize doubleClickAction=_doubleClickAction - In the implementation block
@property (assign) BOOL rejectsMultiFileDrops; 
@property (assign) char acceptsFirstMouse;                                              //@synthesize acceptsFirstMouse=_acceptsFirstMouse - In the implementation block
@property (assign) id<TDraggingSource> draggingSourceDelegate;                          //@synthesize draggingSourceDelegate=_draggingSourceDelegate - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                                            //@synthesize maxSize=_maxSize - In the implementation block
@property (assign,nonatomic) CGSize minSize;                                            //@synthesize minSize=_minSize - In the implementation block
@property (getter=isOpaqueHitTestingEnabled) BOOL opaqueHitTestingEnabled;              //@synthesize opaqueHitTestingEnabled=_opaqueHitTestingEnabled - In the implementation block
-(void)setAcceptsFirstMouse:(char)arg1 ;
-(char)acceptsFirstMouse;
-(void)initCommon;
-(void)setOpaqueHitTestingEnabled:(BOOL)arg1 ;
-(void)awakeCommon;
-(BOOL)isOpaqueHitTestingEnabled;
-(void)setRejectsMultiFileDrops:(BOOL)arg1 ;
-(BOOL)rejectsMultiFileDrops;
-(SEL)clickAction;
-(void)setClickAction:(SEL)arg1 ;
-(SEL)doubleClickAction;
-(void)setDoubleClickAction:(SEL)arg1 ;
-(id<TDraggingSource>)draggingSourceDelegate;
-(void)setDraggingSourceDelegate:(id<TDraggingSource>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(CGSize)maxSize;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setBoundsSize:(CGSize)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(CGSize)minSize;
-(void)awakeFromNib;
-(void)mouseUp:(id)arg1 ;
@end

