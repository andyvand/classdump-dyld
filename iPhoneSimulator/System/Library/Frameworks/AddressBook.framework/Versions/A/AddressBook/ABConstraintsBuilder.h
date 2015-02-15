/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray;

@interface ABConstraintsBuilder : NSObject {

	NSDictionary* _metrics;
	NSDictionary* _views;
	NSMutableArray* _constraints;
	unsigned long long _direction;
	long long _firstHorizontalAttribute;
	long long _secondHorizontalAttribute;

}
-(id)initWithMetrics:(id)arg1 views:(id)arg2 direction:(unsigned long long)arg3 ;
-(void)alignViews:(id)arg1 usingAttribute:(long long)arg2 ;
-(void)addAllVisualConstraints:(id)arg1 ;
-(void)setUpHorizontalAttributesWithDirection:(unsigned long long)arg1 ;
-(void)addAllVisualConstraints:(id)arg1 withExtraViews:(id)arg2 ;
-(void)addVisualConstraints:(id)arg1 withExtraViews:(id)arg2 ;
-(id)mergedViewsWithExtraViews:(id)arg1 ;
-(void)horizontallyAlignViews:(id)arg1 withSpacing:(double)arg2 ;
-(void)addConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 ;
-(id)constraintWithGenericFormat:(id)arg1 ;
-(void)horizontallyAlignVisibleViews:(id)arg1 withSpacing:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)constraints;
@end

