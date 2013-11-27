/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIResponderForwardable <NSObject>
@property (assign,setter=_setForwardablePhase:,nonatomic) int _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
@property (nonatomic,readonly) UIWindow * window; 
@required
-(id)window;
-(id)gestureRecognizers;
-(void)_setForwardablePhase:(int)arg1;
-(id)_responder;
-(void)_setResponder:(id)arg1;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(int)arg1;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
-(int)_forwardablePhase;
-(BOOL)_isAbandoningForwardingRecord;
-(id)_mutableForwardingRecord;
-(void)_abandonForwardingRecord;
@end
