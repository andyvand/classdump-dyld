/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSISVariableDelegate;
@interface NSISVariable : NSObject {

	id<NSISVariableDelegate> _delegate;
	int _refCount;
	unsigned _ident;

}

@property (assign) id<NSISVariableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) char shouldBeMinimized; 
@property (readonly) int valueRestriction; 
+(id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(char)arg3 ;
+(id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(char)arg3 ;
+(id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(char)arg3 ;
-(char)shouldBeIntegral;
-(int)valueRestriction;
-(id)markedConstraint;
-(char)markedConstraintIsEligibleForIntegralizationAdjustment;
-(double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
-(char)valueIsUserVisible;
-(char)shouldBeMinimized;
-(id)init;
-(oneway void)release;
-(id)retain;
-(void)setDelegate:(id<NSISVariableDelegate>)arg1 ;
-(id)description;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id<NSISVariableDelegate>)delegate;
-(char)_tryRetain;
-(char)_isDeallocating;
@end
