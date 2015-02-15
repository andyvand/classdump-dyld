/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABSearchElement.h>

@class NSString;

@interface ABSearchElementMatch : ABSearchElement {

	NSString* _searchProperty;
	long long _searchPropertyType;
	id _searchValue;
	long long _searchValueType;
	NSString* _searchLabel;
	NSString* _searchKey;
	long long _testCase;
	char _searchPeople;
	char _searchSubscribed;
	char _diacriticInsensitive;
	long long _comparison;

}
+(void)initialize;
-(char)nts_MatchesRecord:(id)arg1 ;
-(char)searchPeople;
-(char)searchGroups;
-(char)searchSubscribed;
-(id)prefetchingRelationshipKeyPathsForImplClass:(Class)arg1 inAddressBook:(id)arg2 ;
-(id)searchRecordClasses;
-(id)_predicateForImplClass:(Class)arg1 addressBook:(id)arg2 ;
-(id)groupsUsedInDefinition;
-(void)setDiacriticInsensitiveOption:(char)arg1 ;
-(char)usesGroupInDefinition:(id)arg1 ;
-(char)matchesRecord:(id)arg1 ;
-(id)initWithProperty:(id)arg1 label:(id)arg2 key:(id)arg3 value:(id)arg4 searchPeople:(char)arg5 comparison:(long long)arg6 ;
-(long long)encodingVersion;
-(void)setSearchValue:(id)arg1 ;
-(id)initWithProperty:(id)arg1 label:(id)arg2 key:(id)arg3 value:(id)arg4 searchPeople:(char)arg5 searchSubscribed:(char)arg6 comparison:(long long)arg7 ;
-(id)_predicateForKeyPath:(id)arg1 comparison:(long long)arg2 value:(id)arg3 ;
-(char)diacriticInsensitiveOption;
-(id)_predicateForYearlessSearchOnDatePropertyKeyPath:(id)arg1 toManyRelationshipName:(id)arg2 futureOnly:(char)arg3 allNotMatch:(char)arg4 customPropertyPath:(id)arg5 customProperty:(id)arg6 searchValue:(id)arg7 label:(id)arg8 ;
-(char)isReferencingGroup:(id)arg1 ;
-(id)_predicateForImplClass:(Class)arg1 context:(id)arg2 ;
-(char)_isNegation;
-(id)_predicateForCustomProperty:(id)arg1 comparison:(long long)arg2 value:(id)arg3 label:(id)arg4 ;
-(id)_predicateForUnknownKeyWithComparison:(long long)arg1 value:(id)arg2 ;
-(id)_predicateForMessagingAddressService:(id)arg1 comparison:(long long)arg2 value:(id)arg3 label:(id)arg4 ;
-(id)_predicateForToManyRelationshipName:(id)arg1 relativeKeyPath:(id)arg2 comparison:(long long)arg3 value:(id)arg4 label:(id)arg5 ;
-(char)compareWithRecordValue:(id)arg1 ;
-(char)_compareSingleScalarWithRecordValue:(id)arg1 ;
-(id)_valueInMultiValue:(id)arg1 ;
-(char)_compareSingleArrayWithRecordValue:(id)arg1 ;
-(char)_compareSingleDictionaryKeyWithRecordValue:(id)arg1 ;
-(char)_compareSingleDictionaryNoKeyWithRecordValue:(id)arg1 ;
-(char)isSimpleSearch;
-(void)_nts_CalculatePropertyTypeForRecord:(id)arg1 ;
-(char)_compareMultiLabelScalarWithRecordValue:(id)arg1 ;
-(char)_compareMultiLabelArrayWithRecordValue:(id)arg1 ;
-(char)_compareMultiLabelDictionaryKeyWithRecordValue:(id)arg1 ;
-(char)_compareMultiLabelDictionaryNoKeyWithRecordValue:(id)arg1 ;
-(char)_compareMultiNoLabelScalarWithRecordValue:(id)arg1 ;
-(char)_compareMultiNoLabelArrayWithRecordValue:(id)arg1 ;
-(char)_compareMultiNoLabelDictionaryKeyWithRecordValue:(id)arg1 ;
-(char)_compareMultiNoLabelDictionaryNoKeyWithRecordValue:(id)arg1 ;
-(id)_searchProperty;
-(long long)_comparison;
-(id)_key;
-(id)decodeDatabasePathWithCoder:(id)arg1 ;
-(id)addressBookWithCoder:(id)arg1 databaseDirectory:(id)arg2 ;
-(id)decodeParentGroupsWithCoder:(id)arg1 ;
-(id)decodeAccountWithCoder:(id)arg1 ;
-(id)storesInAddressBook:(id)arg1 exceptStore:(id)arg2 ;
-(char)predicateMatchesRecord:(id)arg1 ;
-(id)_withinDate;
-(id)affectedStoresInAddressBook:(id)arg1 ;
-(id)_value;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)_label;
@end

