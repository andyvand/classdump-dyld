/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMRowTemplateFactory.h>

@interface _AMMailItemsRowTemplateFactory : _AMRowTemplateFactory
+(id)sharedInstance;
-(id)rowTemplatesForItemType:(id)arg1 ;
-(id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)arg1 withItemType:(id)arg2 ;
-(id)mailAccountTypeRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)rowTemplatesForMailAccounts;
-(id)rowTemplatesForMailMailboxes;
-(id)rowTemplatesForMailMessages;
@end

