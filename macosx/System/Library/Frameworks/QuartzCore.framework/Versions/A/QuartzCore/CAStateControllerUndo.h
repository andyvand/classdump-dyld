/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/CAStateRecorder.h>

@class CAState, NSMutableArray, NSString;

@interface CAStateControllerUndo : NSObject <CAStateRecorder> {

	CAStateControllerUndo* _next;
	CAState* _state;
	NSMutableArray* _elements;
	NSMutableArray* _transitions;

}

@property (readonly) CAStateControllerUndo * next;                      //@synthesize next=_next - In the implementation block
@property (nonatomic,retain) CAState * state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * elements;                 //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitions;              //@synthesize transitions=_transitions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setElements:(NSMutableArray *)arg1 ;
-(void)willAddLayer:(id)arg1 ;
-(void)addTransition:(id)arg1 ;
-(NSMutableArray *)transitions;
-(void)setTransitions:(NSMutableArray *)arg1 ;
-(CAStateControllerUndo *)next;
-(NSMutableArray *)elements;
-(void)dealloc;
-(void)setState:(CAState *)arg1 ;
-(CAState *)state;
-(void)addElement:(id)arg1 ;
@end

