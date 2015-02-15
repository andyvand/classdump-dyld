/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSISVariableDelegate.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface NSISPlaybackOperation : NSObject <NSISVariableDelegate> {

	NSMutableDictionary* oldIdentsToNewVariables;
	NSMutableSet* variablesToIntegralize;
	NSMutableSet* userObservableVariables;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)unwrapVariable:(id)arg1 ;
-(id)unwrapLinearExpression:(id)arg1 ;
-(void)playbackOneAction:(id)arg1 onEngine:(id)arg2 ;
-(double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(char)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(char)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
@end

