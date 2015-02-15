/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABPropertySummaryBuilding.h>

@class NSMutableDictionary, NSString;

@interface ABPropertySummaryBuilder : NSObject <ABPropertySummaryBuilding> {

	NSMutableDictionary* _builders;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)buildSummaryForValue:(id)arg1 property:(id)arg2 ;
-(id)builderForProperty:(id)arg1 ;
-(id)makeBuilderForProperty:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

