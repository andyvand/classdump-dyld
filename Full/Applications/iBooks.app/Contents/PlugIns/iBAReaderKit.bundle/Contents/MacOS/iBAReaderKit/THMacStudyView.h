/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/THMacBackgroundView.h>

@protocol THMacStudyViewDelegate;
@class NSMutableArray;

@interface THMacStudyView : THMacBackgroundView {

	char _gestureDirectionDetermined;
	id<THMacStudyViewDelegate> _delegate;
	NSMutableArray* _lastEvents;

}

@property (assign,nonatomic) id<THMacStudyViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastEvents;                      //@synthesize lastEvents=_lastEvents - In the implementation block
@property (assign,nonatomic) char gestureDirectionDetermined;                  //@synthesize gestureDirectionDetermined=_gestureDirectionDetermined - In the implementation block
-(char)forwardScrollWheelEvent:(id)arg1 ;
-(char)gestureDirectionDetermined;
-(void)setGestureDirectionDetermined:(char)arg1 ;
-(CGPoint)p_calculateVelocity;
-(char)p_handleScrollWheelEvent:(id)arg1 ;
-(NSMutableArray *)lastEvents;
-(void)p_addEvent:(id)arg1 ;
-(void)setLastEvents:(NSMutableArray *)arg1 ;
-(void)setDelegate:(id<THMacStudyViewDelegate>)arg1 ;
-(void)dealloc;
-(id<THMacStudyViewDelegate>)delegate;
-(void)keyDown:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)awakeFromNib;
-(void)mouseUp:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)cursorUpdate:(id)arg1 ;
@end
