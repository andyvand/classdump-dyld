/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Mail/Mail-Structs.h>
@class NSString, NSArray;

@interface MFCriterion : NSObject {

	char _dateIsRelative;
	char _allCriteriaMustBeSatisfied;
	char _originatedFromSearchSuggestion;
	int _specialMailboxType;
	NSString* _name;
	NSString* _expression;
	NSString* _criterionIdentifier;
	long long _criterionType;
	long long _qualifier;
	long long _dateUnits;
	NSArray* _criteria;
	unsigned long long _knownLimit;
	NSString* _uniqueId;

}

@property (assign) int specialMailboxType;                            //@synthesize specialMailboxType=_specialMailboxType - In the implementation block
@property (copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (assign) long long criterionType;                           //@synthesize criterionType=_criterionType - In the implementation block
@property (copy) NSString * criterionIdentifier;                      //@synthesize criterionIdentifier=_criterionIdentifier - In the implementation block
@property (copy) NSString * expression;                               //@synthesize expression=_expression - In the implementation block
@property (assign) long long qualifier;                               //@synthesize qualifier=_qualifier - In the implementation block
@property (assign) long long dateUnits;                               //@synthesize dateUnits=_dateUnits - In the implementation block
@property (assign) char dateIsRelative;                               //@synthesize dateIsRelative=_dateIsRelative - In the implementation block
@property (nonatomic,copy) NSArray * criteria;                        //@synthesize criteria=_criteria - In the implementation block
@property (assign) char allCriteriaMustBeSatisfied;                   //@synthesize allCriteriaMustBeSatisfied=_allCriteriaMustBeSatisfied - In the implementation block
@property (assign) unsigned long long knownLimit;                     //@synthesize knownLimit=_knownLimit - In the implementation block
@property (assign) char originatedFromSearchSuggestion;               //@synthesize originatedFromSearchSuggestion=_originatedFromSearchSuggestion - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueId;              //@synthesize uniqueId=_uniqueId - In the implementation block
+(id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(char)arg2 ;
+(id)compoundCriterionWithCriteria:(id)arg1 ;
+(long long)criterionTypeForString:(id)arg1 ;
+(id)stringForCriterionType:(long long)arg1 ;
+(char)searchUsingOnlySpotlight;
+(char)logCriterionConversionErrors;
+(id)queryScopePathForMailbox:(id)arg1 ;
+(char)criteria:(id)arg1 areEqualToCriteria:(id)arg2 ;
+(id)criteriaFromDefaultsArray:(id)arg1 ;
+(id)defaultsArrayFromCriteria:(id)arg1 ;
+(char)logSpotlightQueries;
+(void)setLogSpotlightQueries:(char)arg1 ;
+(char)logSpotlightCallbacks;
+(void)setLogSpotlightCallbacks:(char)arg1 ;
+(void)logSpotlightStatus;
-(NSString *)uniqueId;
-(NSString *)expression;
-(void)setCriterionType:(long long)arg1 ;
-(void)setQualifier:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(char)arg2 ;
-(void)setAllCriteriaMustBeSatisfied:(char)arg1 ;
-(void)setCriteria:(NSArray *)arg1 ;
-(long long)criterionType;
-(NSString *)criterionIdentifier;
-(long long)qualifier;
-(void)setCriterionIdentifier:(NSString *)arg1 ;
-(long long)ruleQualifierForString:(id)arg1 ;
-(void)setDateUnits:(long long)arg1 ;
-(id)_qualifierString;
-(long long)dateUnits;
-(void)_setCriterionIdentifier:(id)arg1 ;
-(id)stringForRuleQualifier:(long long)arg1 ;
-(char)isSpotlightCriterion;
-(NSArray *)criteria;
-(char)containsSpotlightCriterion;
-(char)_isSpotlightOnlyCriterion;
-(char)containsSpotlightOnlyCriterion;
-(char)containsWhereFromsCriterion;
-(char)_containsVIPSendersCriterionWithInFlightURLs:(id)arg1 ;
-(char)_isCompoundCriterionSpotlightCriterion;
-(id)_spotlightQueryStringForBodyCriterion;
-(id)_spotlightQueryStringForAttachmentTypeCriterion;
-(id)_spotlightQueryStringForContainsAttachmentsCriterion;
-(id)_spotlightQueryStringForHeaderCriterion;
-(id)_spotlightQueryStringForAnyRecipientCriterion;
-(id)_spotlightDateQueryStringForAttribute:(id)arg1 ;
-(id)_spotlightQueryStringForPriorityCriterion;
-(id)_spotlightQueryStringForFlagCriterion;
-(id)_spotlightQueryStringForFlaggedStatusCriterion;
-(id)_spotlightQueryStringForCompoundCriterionWithInFlightURLs:(id)arg1 ;
-(id)_spotlightQueryStringForGroupOrVIPSendersCriterion;
-(id)_spotlightQueryStringForAnyAttachmentCriterion;
-(id)convertToGmailLabelCriterionIfNeeded;
-(id)_spotlightQueryStringForMailboxCriterion:(id)arg1 ;
-(id)_spotlightQueryStringWithInFlightURLs:(id)arg1 ;
-(id)_spotlightQueryStringForGmailLabelCriterion;
-(id)_spotlightQueryStringForAccountCriterion:(id)arg1 ;
-(id)_spotlightQueryStringForNotInAJunkOrTrashMailboxCriterion;
-(id)_spotlightQueryStringForInASpecialMailboxCriterionWithQualifier:(long long)arg1 inFlightURLs:(id)arg2 ;
-(id)_spotlightQueryStringForMessageID;
-(id)_comparisonOperatorForQualifier:(long long)arg1 ;
-(id)escapedString:(id)arg1 ;
-(id)_searchTermForExpression:(id)arg1 withQualifer:(long long)arg2 exactMatch:(char)arg3 ;
-(char)dateIsRelative;
-(id)criterionValueForNotEqualRelativeDates:(long long*)arg1 ;
-(id)utiForMessageAttachmentType:(char)arg1 ;
-(id)_spotlightStringForHeaderQueryString:(id)arg1 withSpotlightAttribute:(id)arg2 ;
-(char)allCriteriaMustBeSatisfied;
-(id)_simplifyOnce;
-(id)simplifiedCriterion;
-(char)originatedFromSearchSuggestion;
-(char)isValid:(id*)arg1 options:(unsigned)arg2 ;
-(char)isEqualToCriterion:(id)arg1 ;
-(char)containsJunkMailboxCriterion;
-(long long)smartMailboxesVersion;
-(id)compoundCriterionBySplittingExpression;
-(id)initWithCriterion:(id)arg1 expression:(id)arg2 ;
-(char)hasExpression;
-(char)containsMailboxCriterion;
-(char)containsVIPSendersCriterion;
-(id)spotlightQueryString;
-(void)setDateIsRelative:(char)arg1 ;
-(int)specialMailboxType;
-(void)setSpecialMailboxType:(int)arg1 ;
-(unsigned long long)knownLimit;
-(void)setKnownLimit:(unsigned long long)arg1 ;
-(void)setOriginatedFromSearchSuggestion:(char)arg1 ;
-(char)isExpressibleInTigerSchema;
-(id)SQLExpressionWithContext:(SCD_Struct_MF8*)arg1 depth:(unsigned long long)arg2 enclosingSmartMailboxes:(id)arg3 ;
-(id)criterionForSearchWithExpandedSmartMailboxes:(id)arg1 forSpotlight:(char)arg2 convertingGmailCriteria:(char)arg3 ;
-(char)hasNumberCriterion;
-(unsigned long long)bestBaseTable;
-(id)criterionExpressionForEqualRelativeDates:(SCD_Struct_MF8*)arg1 depth:(unsigned long long)arg2 enclosingSmartMailboxes:(id)arg3 ;
-(id)criterionForSQL;
-(id)criterionForSQLIgnoringGmail;
-(id)criterionForSpotlight;
-(id)SQLExpressionWithTables:(unsigned long long*)arg1 baseTable:(unsigned long long)arg2 ;
-(id)fixOnceWithExpandedSmartMailboxes:(id)arg1 forSpotlight:(char)arg2 ;
-(id)criterionByMergingSpotlightCriteria;
-(id)targetSmartMailbox;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(long long)version;
-(void)setExpression:(NSString *)arg1 ;
-(id)descriptionWithDepth:(unsigned long long)arg1 ;
@end

