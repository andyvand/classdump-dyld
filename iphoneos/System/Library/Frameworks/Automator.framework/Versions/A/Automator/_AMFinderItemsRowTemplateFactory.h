/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMRowTemplateFactory.h>

@interface _AMFinderItemsRowTemplateFactory : _AMRowTemplateFactory
+(id)sharedInstance;
-(id)rowTemplatesForItemType:(id)arg1 ;
-(id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)arg1 withItemType:(id)arg2 ;
-(id)compoundPredicateTypes;
-(id)commonParentOfPaths:(id)arg1 ;
-(id)rowTemplatesWithLeftPopupName:(id)arg1 leftKeyPath:(id)arg2 operators:(id)arg3 rightPopupNames:(id)arg4 rightPopupValues:(id)arg5 ;
-(id)finderItemsKindRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)rowTemplatesForFinderItems;
-(id)finderItemsKindEvaluationPredicateForUIPredicate:(id)arg1 ;
-(id)_convertToEvaluationPredicateFromPathComparisonUIPredicate:(id)arg1 ;
@end

