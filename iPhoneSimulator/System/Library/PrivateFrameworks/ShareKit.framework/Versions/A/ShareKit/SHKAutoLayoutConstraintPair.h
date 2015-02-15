/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLayoutConstraint;

@interface SHKAutoLayoutConstraintPair : NSObject {

	NSLayoutConstraint* _firstConstraint;
	NSLayoutConstraint* _secondConstraint;

}

@property (readonly) NSLayoutConstraint * firstConstraint;               //@synthesize firstConstraint=_firstConstraint - In the implementation block
@property (readonly) NSLayoutConstraint * secondConstraint;              //@synthesize secondConstraint=_secondConstraint - In the implementation block
-(NSLayoutConstraint *)firstConstraint;
-(NSLayoutConstraint *)secondConstraint;
-(id)initWithFirstConstraint:(id)arg1 secondConstraint:(id)arg2 ;
-(id)constraints;
@end

