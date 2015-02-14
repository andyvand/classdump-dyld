/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MFCriterion.h>

@class NSString;

@interface MFMessageCriterion : MFCriterion {

	NSString* _originalGroupUniqueID;
	long long _specialMailboxTypeCode;
	NSString* _groupUniqueID;

}

@property (assign) long long specialMailboxTypeCode;                     //@synthesize specialMailboxTypeCode=_specialMailboxTypeCode - In the implementation block
@property (copy) NSString * groupUniqueID;                               //@synthesize groupUniqueID=_groupUniqueID - In the implementation block
@property (copy,readonly) NSString * originalGroupUniqueID; 
+(long long)criterionTypeForString:(id)arg1 ;
+(id)stringForCriterionType:(long long)arg1 ;
+(id)messagesInConversationCriterionWithConversationIDs:(id)arg1 ;
+(void)_updateAddressDisplayNames:(id)arg1 ;
+(void)initialize;
-(char)evaluateMessage:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(char)arg2 ;
-(void)setCriterionIdentifier:(id)arg1 ;
-(char)containsSpotlightCriterion;
-(long long)specialMailboxTypeCode;
-(id)emailAddressesForGroupCriterion;
-(id)emailAddressesForVIPCriterion;
-(char)isValid:(id*)arg1 options:(unsigned)arg2 ;
-(id)criterionByExpandingSpecialMailboxCriterion;
-(char)hasExpression;
-(char)isExpressibleInTigerSchema;
-(id)SQLExpressionWithContext:(SCD_Struct_MF8*)arg1 depth:(unsigned long long)arg2 enclosingSmartMailboxes:(id)arg3 ;
-(char)hasNumberCriterion;
-(id)fixOnceWithExpandedSmartMailboxes:(id)arg1 forSpotlight:(char)arg2 ;
-(id)criterionByMergingSpotlightCriteria;
-(char)containsIncludeConversationsCriterion;
-(char)containsMessageIsNotInATrashMailboxCriterion;
-(id)recursiveGroupUniqueIDs;
-(char)hasQualifier;
-(unsigned)ruleType;
-(void)setRuleType:(unsigned)arg1 ;
-(id)ruleHeader;
-(void)setRuleHeader:(id)arg1 ;
-(unsigned)ruleQualifier;
-(void)setRuleQualifier:(unsigned)arg1 ;
-(id)ruleExpression;
-(void)setRuleExpression:(id)arg1 ;
-(void)setGroupUniqueID:(NSString *)arg1 ;
-(void)setSpecialMailboxTypeCode:(long long)arg1 ;
-(NSString *)groupUniqueID;
-(char)isEquivalent:(id)arg1 ;
-(NSString *)originalGroupUniqueID;
-(id)_headersRequiredForEvaluation;
-(char)_doesGroup:(id)arg1 containSender:(id)arg2 ;
-(char)_evaluateJunkMailHeaders:(id)arg1 ;
-(char)_mailboxURLString:(id)arg1 satisfiesQualifier:(long long)arg2 forExpression:(id)arg3 ;
-(char)_evaluateMessage:(id)arg1 fetchBody:(char)arg2 needsBody:(char*)arg3 ;
-(char)_evaluateAddressBookCriterion:(id)arg1 ;
-(char)_evaluateBodyCriterion:(id)arg1 fetchBody:(char)arg2 needsBody:(char*)arg3 ;
-(char)_evaluateHeaderCriterion:(id)arg1 ;
-(char)_evaluateMemberOfGroupCriterion:(id)arg1 ;
-(char)_evaluateMemberOfVIPSendersCriterion:(id)arg1 ;
-(char)_evaluateAccountCriterion:(id)arg1 ;
-(char)_evaluateJunkMailCriterion:(id)arg1 fetchBody:(char)arg2 needsBody:(char*)arg3 ;
-(char)_evaluateDateCriterion:(id)arg1 ;
-(char)_evaluateAddressHistoryCriterion:(id)arg1 ;
-(char)_evaluateFullNameCriterion:(id)arg1 ;
-(char)_evaluateIsDigitallySignedCriterion:(id)arg1 ;
-(char)_evaluateIsEncryptedCriterion:(id)arg1 ;
-(char)_evaluatePriorityIsNormalCriterion:(id)arg1 ;
-(char)_evaluatePriorityIsHighCriterion:(id)arg1 ;
-(char)_evaluatePriorityIsLowCriterion:(id)arg1 ;
-(char)_evaluateAttachmentCriterion:(id)arg1 fetchBody:(char)arg2 needsBody:(char*)arg3 ;
-(char)_evaluateAttachmentTypeCriterion:(id)arg1 fetchBody:(char)arg2 needsBody:(char*)arg3 ;
-(char)_evaluateMessageTypeCriterion:(id)arg1 ;
-(char)_evaluateCompoundCriterion:(id)arg1 ;
-(char)_evaluateMailboxCriterion:(id)arg1 ;
-(char)_evaluateFlagCriterion:(id)arg1 ;
-(char)_evaluateSpecialMailboxCriterion:(id)arg1 ;
-(char)_evaluateFlaggedStatusCriterion:(id)arg1 ;
-(char)_evaluateGmailLabelCriterion:(id)arg1 ;
-(char)allowsEmptyExpression;
-(char)_containsCriterion:(long long)arg1 ;
-(char)containsRelativeDateCriteria;
-(char)containsAddressBookCriteria;
-(void)addHeadersRequiredForRoutingToArray:(id)arg1 ;
-(char)doesMessageSatisfyRuleEvaluationCriterion:(id)arg1 fetchBody:(char)arg2 needsBody:(char*)arg3 ;
-(id)criterionByExpandingGroup;
-(char)containsLastViewedDateCriterion;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
@end

