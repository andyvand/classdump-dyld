/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _NSSearchSliceKindHandler : NSObject {

	int _searchSliceType;
	NSString* _attributeName;

}
-(void)dealloc;
-(id)initWithSearchSliceType:(int)arg1 attributeName:(id)arg2 ;
-(id)attributeName;
-(long long)_relativeStartingDayForDateOptionType:(int)arg1 ;
-(long long)_dateUnitMultiplierForSearchDateSpan:(int)arg1 ;
-(id)initWithAttributeName:(id)arg1 ;
-(id)queryStringForItems:(id)arg1 values:(id)arg2 ;
-(id)criteriaSliceForCriteria:(id)arg1 values:(id)arg2 ;
-(void)setCriteriaSlice:(id)arg1 forRuleEditer:(id)arg2 withRootMenuItem:(id)arg3 atRowIndex:(long long)arg4 ;
-(int)searchSliceType;
@end

