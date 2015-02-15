/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FI_TViewController.h>

@class FI_TCriteriaSlicesController;

@interface FI_TSearchCriteriaController : FI_TViewController {

	FI_TCriteriaSlicesController* _slicesController;

}

@property (retain,readonly) FI_TCriteriaSlicesController * slicesController;              //@synthesize slicesController=_slicesController - In the implementation block
-(void)aboutToTearDown;
-(void)removeAllSlices;
-(long long)sliceCount;
-(BOOL)showSystemFiles:(BOOL)arg1 ;
-(BOOL)includeNonFinderFiles:(BOOL)arg1 ;
-(id)criterionWithSuggestion:(id)arg1 ;
-(id)criteriaWithSearchString:(id)arg1 nameOnly:(BOOL)arg2 ;
-(void)showCriteria:(id)arg1 ;
-(long long)criteriaCount;
-(void)configureFor:(BOOL)arg1 ;
-(FI_TCriteriaSlicesController *)slicesController;
-(id)filter;
-(id)initWithDelegate:(id)arg1 ;
-(id)nibName;
@end

