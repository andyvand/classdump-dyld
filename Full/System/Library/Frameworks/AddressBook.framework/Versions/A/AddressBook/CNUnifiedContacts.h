/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CNUnifiedContacts : NSObject
+(id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2 ;
+(id)unifyMultivalues:(id)arg1 forProperty:(id)arg2 ;
+(unsigned long long)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3 ;
+(unsigned long long)indexOfPreferredContactForUnifying:(id)arg1 ;
+(id)unifyContacts:(id)arg1 withPreferredContact:(id)arg2 ;
+(id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3 ;
+(/*^block*/id)equivalentLabeledValueFilterForLabeledValue:(id)arg1 property:(id)arg2 ;
+(void)unifyNamesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 ;
+(void)unifyNonNameSingleValuesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 ;
+(void)unifyMultiValuesOfContacts:(id)arg1 intoContact:(id)arg2 ;
+(id)nonNameSingleValueProperties;
+(void)unifySingleValuesProperties:(id)arg1 ofContacts:(id)arg2 intoContact:(id)arg3 ;
+(id)firstNonNilValueForProperty:(id)arg1 inContacts:(id)arg2 ;
+(void)unifyMultiValue:(id)arg1 intoMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(char)shouldIncludeLabeledValue:(id)arg1 fromSource:(id)arg2 inDestination:(id)arg3 forProperty:(id)arg4 ;
+(char)shouldLabeledValue:(id)arg1 replaceInferiorValueInMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(void)replaceInferiorValueInMultiValue:(id)arg1 withEntryAtIndex:(unsigned long long)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4 ;
+(char)doesMultiValue:(id)arg1 needLabeledValue:(id)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4 ;
+(unsigned long long)countOfLabel:(id)arg1 value:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4 ;
+(unsigned long long)countOfLabelIncludingEquivalents:(id)arg1 value:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4 ;
+(unsigned long long)countOfLabelsEquivalentTo:(id)arg1 valuesEquivalentTo:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4 ;
+(id)indexesOfValuesInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(id)indexesOfLabeledValuesEquivalentTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(unsigned long long)indexOfValueMostInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(void)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 intoMap:(id)arg3 forProperty:(id)arg4 ;
+(void)correlateIdentifiersOfUnifiedMap:(id)arg1 toIdentifiersOfMultiValueMap:(id)arg2 intoMap:(id)arg3 forProperty:(id)arg4 ;
+(id)unifiedIdentifiersForLabeledValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3 ;
+(id)unifiedIdentifiersForValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3 ;
+(char)isLabeledValue:(id)arg1 equivalentTo:(id)arg2 forProperty:(id)arg3 ;
+(char)isLabel:(id)arg1 equivalentToLabel:(id)arg2 forProperty:(id)arg3 ;
+(id)findFirstIdentifier:(id)arg1 inMultiValue:(id)arg2 ;
@end

