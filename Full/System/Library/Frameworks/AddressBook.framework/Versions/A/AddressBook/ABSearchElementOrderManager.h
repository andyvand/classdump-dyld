/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABSearchElementOrderManagerProtocol.h>

@class NSDictionary, NSMutableDictionary, NSMutableArray;

@interface ABSearchElementOrderManager : NSObject <ABSearchElementOrderManagerProtocol> {

	NSDictionary* _propertyDefinitions;
	NSMutableDictionary* _propertiesDefinitionsByName;
	NSMutableArray* _propertyNames;

}
+(id)orderManager;
-(id)propertyDefinitions;
-(id)definitionForProperty:(id)arg1 ;
-(id)definitionForComparison:(long long)arg1 withPropertyDefinition:(id)arg2 ;
-(id)entryForProperty:(id)arg1 withComparison:(long long)arg2 ;
-(id)comparisonsForProperty:(id)arg1 ;
-(id)orderForProperty:(id)arg1 comparison:(long long)arg2 ;
-(id)localizedStringForComparison:(long long)arg1 withProperty:(id)arg2 ;
-(id)localizedStringForProperty:(id)arg1 ;
-(void)updatePropertyWidth:(double*)arg1 andComparisonWidth:(double*)arg2 ;
-(char)putPropertyInOtherMenu:(id)arg1 ;
-(char)propertyIsComposite:(id)arg1 ;
-(id)typeForProperty:(id)arg1 withComparison:(long long)arg2 ;
-(char)isYearLessComparison:(long long)arg1 forProperty:(id)arg2 ;
-(char)isWithinTimePeriodComparison:(long long)arg1 forProperty:(id)arg2 ;
-(char)isDateComparison:(long long)arg1 forProperty:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)properties;
@end

